// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealCodeSamplesGameMode.h"
#include "UnrealCodeSamplesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCodeSamplesGameMode::AUnrealCodeSamplesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
