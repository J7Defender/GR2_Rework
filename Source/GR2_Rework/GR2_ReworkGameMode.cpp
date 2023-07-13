// Copyright Epic Games, Inc. All Rights Reserved.

// ReSharper disable CppDeprecatedEntity
#include "GR2_ReworkGameMode.h"
#include "UObject/ConstructorHelpers.h"

AGR2_ReworkGameMode::AGR2_ReworkGameMode()
	: Super()
{
}

FString AGR2_ReworkGameMode::InitNewPlayer(APlayerController* NewPlayerController, const FUniqueNetIdRepl& UniqueId,
	const FString& Options, const FString& Portal)
{
	return Super::InitNewPlayer(NewPlayerController, UniqueId, Options, Portal);
}

void AGR2_ReworkGameMode::RestartPlayer(AController* NewPlayer)
{
	Super::RestartPlayer(NewPlayer);
}

void AGR2_ReworkGameMode::PostLogin(APlayerController* NewPlayer)
{	
	Super::PostLogin(NewPlayer);
}

void AGR2_ReworkGameMode::Logout(AController* Exiting)
{	
	Super::Logout(Exiting);
}

void AGR2_ReworkGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}
