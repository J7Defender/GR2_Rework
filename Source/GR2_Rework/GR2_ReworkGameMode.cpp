// Copyright Epic Games, Inc. All Rights Reserved.

#include "GR2_ReworkGameMode.h"
#include "GR2_ReworkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGR2_ReworkGameMode::AGR2_ReworkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}
