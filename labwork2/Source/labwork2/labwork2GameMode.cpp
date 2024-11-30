// Copyright Epic Games, Inc. All Rights Reserved.

#include "labwork2GameMode.h"
#include "labwork2Character.h"
#include "UObject/ConstructorHelpers.h"

Alabwork2GameMode::Alabwork2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
