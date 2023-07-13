// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#define RESPAWN_TIME 3

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GR2_ReworkGameMode.generated.h"

class AGR2_ReworkCharacter;

UCLASS(minimalapi)
class AGR2_ReworkGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AGR2_ReworkGameMode();

	virtual FString InitNewPlayer(APlayerController* NewPlayerController, const FUniqueNetIdRepl& UniqueId, const FString& Options, const FString& Portal) override;

	virtual void RestartPlayer(AController* NewPlayer) override;

	virtual void PostLogin(APlayerController* NewPlayer) override;

	virtual void Logout(AController* Exiting) override;

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

	bool bIsPlayable;

private:
	TSubclassOf<AGR2_ReworkCharacter> CharacterClass;
};



