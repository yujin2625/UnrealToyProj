// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealToyProjGameMode.h"
#include "UnrealToyProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealToyProjGameMode::AUnrealToyProjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
