// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"
#include "TBPLayerController.h"
#include "Commands/Command.h"
#include "Commands/MoveCommand.h"

 
AGameManager::AGameManager()
{
 	 
	PrimaryActorTick.bCanEverTick = true;

}



 
void AGameManager::BeginPlay()
{
	Super::BeginPlay();

	if(auto PlayerController = GWorld -> GetFirstPlayerController<ATBPLayerController>())
	{
		PlayerController -> GameManager = this;
	}

	if(Levels.IsValidIndex(CurrentLevel))
	{
		CreateLevelActors(Levels[CurrentLevel]);
	}
}

void AGameManager::CreateLevelActors(FSLevelInfo& Info)
{
	ThePlayer = nullptr;

	for(auto UnitInfo : Info.Units)
	{
		if(AGameSlot* Slot = GameGrid -> GetSlot(UnitInfo.StartPosition))
		{
			Slot -> SpawnUnitHere(UnitInfo.UnitClass);
			if(Slot -> Unit && Slot -> Unit -> IsControlledByThePlayer())
			{
				ThePlayer = Slot -> Unit;
			}
		}
	}
}

void AGameManager::OnActorClicked(AActor* Actor, FKey button)
{
	if(CurrentCommand.IsValid() && CurrentCommand -> IsExecuting()) return;

	AGameSlot* Slot = Cast<AGameSlot>(Actor);

	 
	if(!Slot) return;
 
	if(!ThePlayer)
	{
		UE_LOG(LogTemp, Error, TEXT("No player unit detected!"))
		return;
	}

	 
	if(Slot -> Unit == nullptr)
	{
		 
		TSharedRef<MoveCommand> Cmd =
			MakeShared<MoveCommand>(ThePlayer -> Slot -> GridPosition, Slot -> GridPosition);
		CommandPool.Add(Cmd);
		Cmd -> Execute();
		CurrentCommand = Cmd;
	}
}

bool AGameManager::UndoLastMove()
{
	
	if(CommandPool.IsEmpty())
	{
		 
		return false;
	}
	
	TSharedRef <MoveCommand> PreviousMove = StaticCastSharedRef<MoveCommand>(CommandPool.Pop());
	PreviousMove -> Revert();
		
	 
	return true;

}


 
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(CurrentCommand.IsValid())
	{
		CurrentCommand -> Update(DeltaTime);
	}

}

