// Copyright Epic Games, Inc. All Rights Reserved.

#include "GGJ24_MakeMeLaughGameMode.h"
#include "GGJ24_MakeMeLaughCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGGJ24_MakeMeLaughGameMode::AGGJ24_MakeMeLaughGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
