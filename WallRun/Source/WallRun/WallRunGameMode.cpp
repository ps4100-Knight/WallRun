// Copyright Epic Games, Inc. All Rights Reserved.

#include "WallRunGameMode.h"
#include "WallRunCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWallRunGameMode::AWallRunGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
