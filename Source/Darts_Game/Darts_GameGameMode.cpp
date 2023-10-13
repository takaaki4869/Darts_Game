// Copyright Epic Games, Inc. All Rights Reserved.

#include "Darts_GameGameMode.h"
#include "Darts_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADarts_GameGameMode::ADarts_GameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
