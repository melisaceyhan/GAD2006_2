// Fill out your copyright notice in the Description page of Project Settings.


#include "NetGameMode.h"
#include "NetBaseCharacter.h"
#include "NetGameState.h"
#include "NetPlayerState.h"
#include "EngineUtils.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"

ANetGameMode::ANetGameMode()
{
	DefaultPawnClass = ANetBaseCharacter::StaticClass();
	PlayerStateClass = ANetPlayerState::StaticClass();
	GameStateClass = ANetGameState::StaticClass();
}

AActor* ANetGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	AActor* Start = AssignTeamAndPlayerStart(Player);
	return Start ? Start : Super::ChoosePlayerStart_Implementation(Player);
}

void ANetGameMode::AvatarsOverlapped(ANetAvatar* AvatarA, ANetAvatar* AvatarB)
{
	ANetGameState* GState = GetGameState<ANetGameState>();
	if (GState->RemainingTime > 0)
	{
		SetWinner(AvatarA, AvatarB, true);
	}
}

void ANetGameMode::TimeOver_Implementation()
{
	ANetAvatar* AvatarA = nullptr;
	ANetAvatar* AvatarB = nullptr;

	for (APlayerController* Player : AllPlayers)
	{
		auto State = Player->GetPlayerState<ANetPlayerState>();

		if (State)
		{
			ANetAvatar* Avatar = Cast<ANetAvatar>(Player->GetPawn());
			if (Avatar)
			{
				if (State->TeamID == EPlayerTeam::TEAM_Red)
				{
					AvatarB = Avatar;					
				}
				else
				{
					AvatarA = Avatar;					
				}
			}
		}
	}

	if (AvatarA && AvatarB)
	{		
		SetWinner(AvatarA, AvatarB, false);
	}
}

void ANetGameMode::SetWinner(ANetAvatar* AAvatar, ANetAvatar* BAvatar, bool bRedWon)
{
	ANetGameState* GState = GetGameState<ANetGameState>();
	if (GState == nullptr || GState->WinningPlayer >= 0)
	{
		return;
	}

	GState->StopTimer();

	ANetPlayerState* StateA = AAvatar->GetPlayerState<ANetPlayerState>();
	ANetPlayerState* StateB = BAvatar->GetPlayerState<ANetPlayerState>();
	if (StateA->TeamID == StateB->TeamID)
	{
		return;
	}

	if (bRedWon)
	{
		if (StateA->TeamID == EPlayerTeam::TEAM_Red)
		{
			GState->WinningPlayer = StateA->PlayerIndex;
		}
		else
		{
			GState->WinningPlayer = StateB->PlayerIndex;
		}

		AAvatar->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
		BAvatar->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

		for (APlayerController* Player : AllPlayers)
		{
			auto State = Player->GetPlayerState<ANetPlayerState>();

			if (State->TeamID == EPlayerTeam::TEAM_Blue)
			{
				State->Result = EGameResults::RESULT_Lost;
			}
			else
			{
				State->Result = EGameResults::RESULT_Won;
			}
		}
	}
	else
	{
		if (StateA->TeamID == EPlayerTeam::TEAM_Blue)
		{
			GState->WinningPlayer = StateA->PlayerIndex;
		}
		else
		{
			GState->WinningPlayer = StateB->PlayerIndex;
		}

		for (APlayerController* Player : AllPlayers)
		{
			auto State = Player->GetPlayerState<ANetPlayerState>();

			if (State)
			{
				if (State->TeamID == EPlayerTeam::TEAM_Red)
				{
					State->Result = EGameResults::RESULT_Lost;
				}
				else
				{
					State->Result = EGameResults::RESULT_Won;
				}
			}
		}
	}

	GState->OnVictory();

	FTimerHandle EndGameTimerHandle;
	GWorld->GetTimerManager().SetTimer(EndGameTimerHandle, this, &ANetGameMode::EndGame, 2.5f, false);
}

void ANetGameMode::EndGame()
{
	PlayerStartIndex = 0;
	TotalGames++;
	GetGameState<ANetGameState>()->WinningPlayer = -1;

	for (APlayerController* Player : AllPlayers)
	{
		APawn* Pawn = Player->GetPawn();
		Player->UnPossess();
		Pawn->Destroy();
		Player->StartSpot.Reset();
		RestartPlayer(Player);
	}

	ANetGameState* GState = GetGameState<ANetGameState>();
	GState->TriggerRestart();
}

AActor* ANetGameMode::GetPlayerStart(FString Name, int Index)
{
	FName PSName;
	if (Index < 0)
	{
		PSName = *Name;
	}
	else
	{
		PSName = *FString::Printf(TEXT("%s%d"), *Name, Index % 4);
	}

	for (TActorIterator<APlayerStart> It(GWorld); It; ++It)
	{
		if (APlayerStart* PS = Cast<APlayerStart>(*It))
		{
			if (PS->PlayerStartTag == PSName)
			{
				return *It;
			}
		}
	}

	return nullptr;
}

AActor* ANetGameMode::AssignTeamAndPlayerStart(AController* Player)
{
	AActor* Start = nullptr;
	ANetPlayerState* State = Player->GetPlayerState<ANetPlayerState>();
	if (State)
	{
		if (TotalGames == 0)
		{
			State->TeamID = TotalPlayerCount == 0 ? EPlayerTeam::TEAM_Blue : EPlayerTeam::TEAM_Red;
			State->PlayerIndex = TotalPlayerCount++;
			AllPlayers.Add(Cast<APlayerController>(Player));

			if (State->TeamID == EPlayerTeam::TEAM_Blue)
			{
				Start = GetPlayerStart("Blue", -1);
			}
			else
			{
				Start = GetPlayerStart("Red", PlayerStartIndex++);
			}
		}
		else
		{
			ANetPlayerState* NetPlayerState = Player->GetPlayerState<ANetPlayerState>();
			if (NetPlayerState)
			{
				EGameResults PreviousResult = NetPlayerState->Result;

				if (PreviousResult == EGameResults::RESULT_Won)
				{
					if(NetPlayerState->TeamID == EPlayerTeam::TEAM_Red)
					{
						State->TeamID = EPlayerTeam::TEAM_Blue;
						Start = GetPlayerStart("Blue", -1);
					}
					else if (NetPlayerState->TeamID == EPlayerTeam::TEAM_Blue)
					{
						State->TeamID = EPlayerTeam::TEAM_Red;
						Start = GetPlayerStart("Red", PlayerStartIndex++);
					}
				}
				else if(PreviousResult == EGameResults::RESULT_Lost)
				{
					if (NetPlayerState->TeamID == EPlayerTeam::TEAM_Red)
					{
						State->TeamID = EPlayerTeam::TEAM_Blue;
						Start = GetPlayerStart("Blue", -1);
					}
					else if (NetPlayerState->TeamID == EPlayerTeam::TEAM_Blue)
					{
						State->TeamID = EPlayerTeam::TEAM_Red;
						Start = GetPlayerStart("Red", PlayerStartIndex++);
					}
				}
				
			}
		}
		
		if (Start)
		{
			UE_LOG(LogTemp, Warning, TEXT("Assigned Player %s to Team %d at %s"), *Player->GetHumanReadableName(), static_cast<int32>(State->TeamID), *Start->GetActorLocation().ToString());
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to assign Player %s to a team start!"), *Player->GetHumanReadableName());
		}
	}
	return Start;
}