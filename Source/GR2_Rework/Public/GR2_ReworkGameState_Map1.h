// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GR2_ReworkPlayerState.h"
#include "GameFramework/GameState.h"
#include "GR2_ReworkGameState_Map1.generated.h"

/**
 * 
 */
UCLASS()
class GR2_REWORK_API AGR2_ReworkGameState_Map1 : public AGameState
{
	GENERATED_BODY()

public:
	
	UPROPERTY(Transient, Replicated)
	int RedTeamScore;

	UPROPERTY(Transient, Replicated)
	int BlueTeamScore;

	UPROPERTY(Transient, Replicated)
	int RemainingTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	TArray<AGR2_ReworkPlayerState*> BluePlayers;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	TArray<AGR2_ReworkPlayerState*> RedPlayers;

	/** FUNCTIONS */
	virtual void HandleMatchIsWaitingToStart() override;
	virtual void HandleMatchHasStarted() override;
	virtual void HandleMatchHasEnded() override;
};
