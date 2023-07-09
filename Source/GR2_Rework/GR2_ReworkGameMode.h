// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#define RESPAWN_TIME 3

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GR2_ReworkGameMode.generated.h"

class AGR2_ReworkCharacter;

UCLASS(minimalapi)
class AGR2_ReworkGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGR2_ReworkGameMode();

	virtual FString InitNewPlayer(APlayerController* NewPlayerController, const FUniqueNetIdRepl& UniqueId, const FString& Options, const FString& Portal) override;

	virtual void RestartPlayer(AController* NewPlayer) override;

	virtual void PostLogin(APlayerController* NewPlayer) override;

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

	bool bIsPlayable;

private:
	int PlayerCount;

	TSubclassOf<AGR2_ReworkCharacter> CharacterClass;
};



