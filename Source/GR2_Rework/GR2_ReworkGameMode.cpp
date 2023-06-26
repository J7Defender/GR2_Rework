// Copyright Epic Games, Inc. All Rights Reserved.

// ReSharper disable CppDeprecatedEntity
#include "GR2_ReworkGameMode.h"
#include "UObject/ConstructorHelpers.h"

AGR2_ReworkGameMode::AGR2_ReworkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	PlayerCount = 0;
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

void AGR2_ReworkGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	UWorld* World = GetWorld();
	if (World && World->IsServer())
	{
		UE_LOG(LogTemp, Warning, TEXT("[Server] PostLogin"));		
	} else if (World && World->IsClient())
	{
		UE_LOG(LogTemp, Warning, TEXT("[Client] PostLogin"));
	}
	
	Super::InitGame(MapName, Options, ErrorMessage);
}

void AGR2_ReworkGameMode::RestartPlayerTimer(AController* CurrentController)
{
	if (const UWorld* World = GetWorld())
	{
		if (AGR2_ReworkGameMode* GameMode = Cast<AGR2_ReworkGameMode>(World->GetAuthGameMode()))
		{
			FTimerHandle RespawnTimerHandler;
			FTimerDelegate RespawnTimerDelegate;

			RespawnTimerDelegate.BindUFunction(this, FName("RestartPlayer"), CurrentController);
			
			World->GetTimerManager().SetTimer(RespawnTimerHandler, RespawnTimerDelegate, RESPAWN_TIME, false);
		}
	}
}
