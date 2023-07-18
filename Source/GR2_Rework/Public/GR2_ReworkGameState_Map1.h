// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GR2_ReworkGameMode_Map1.h"
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
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ScoreUpdate)
	int RedTeamScore = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ScoreUpdate)
	int BlueTeamScore = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimerUpdate)
	int RemainingTime = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	int RedPlayersNum = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	int BluePlayersNum = 0;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="MatchState", Replicated)
	EMatchState GameMatchState;

	/** FUNCTIONS */
	UFUNCTION(BlueprintCallable, Category="States")
	void TryChangeMatchState();

	UFUNCTION(BlueprintCallable, Category="Score")
	void ResetScore();

	bool IsReadyToStartMatch() const;

	UFUNCTION(BlueprintCallable, Category="Score")
	void Server_UpdateScore(AController* PlayerController);

	UFUNCTION()
	void OnRep_ScoreUpdate();

	UFUNCTION()
	void OnRep_TimerUpdate();

	UFUNCTION(NetMulticast, Reliable, Category="Score")
	void Multi_UpdateScoreUI();

	UFUNCTION(BlueprintNativeEvent, Category="Score")
	void UpdateScoreUI(int FRedTeamScore, int FBlueTeamScore);

	UFUNCTION(NetMulticast, Reliable, Category="Timer")
	void Multi_UpdateTimerUI();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Timer")
	void UpdateTimerUI(int FRemainingTime);

	UFUNCTION(NetMulticast, Reliable, Category="WinAnnouce")
	void Multi_UpdateWinnerUI(int WinnerIndex);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="WinAnnouce")
	void UpdateWinnerUI(int WinnerIndex);

	UFUNCTION(NetMulticast, Reliable, Category="WinAnnouce")
	void Multi_UpdateMatchStateUI(EMatchState FMatchState);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="MatchState")
	void UpdateMatchStateUI(EMatchState FMatchState);
};
