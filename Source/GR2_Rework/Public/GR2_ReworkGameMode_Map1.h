// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GR2_Rework/GR2_ReworkGameMode.h"
#include "GR2_ReworkGameMode_Map1.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EMatchState : uint8
{
	E_Default			UMETA(DisplayName = "NO_STAGE"),
	E_WarmUp			UMETA(DisplayName = "WARM_UP"),
	E_InMatch			UMETA(DisplayName = "IN_MATCH"),
	E_PostMatch			UMETA(DisplayName = "POST_MATCH")
};

UCLASS()
class GR2_REWORK_API AGR2_ReworkGameMode_Map1 : public AGR2_ReworkGameMode
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Control")
	bool bIsPlayable = true;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="PlayerControllers")
	TArray<AController*> PlayerControllers;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Rules")
	int WinningScore = 100;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Rules")
	int MatchTime = 300;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Rules")
	int WarmUpTime = 30;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Rules")
	int EndMatchTime = 30;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Rules")
	int BlueMaxPlayers = 5;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Rules")
	int RedMaxPlayers = 5;
	
	void RestartPlayerTimer(AController* CurrentController);

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void RestartPlayer(AController* NewPlayer) override;
	virtual void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot) override;

	UFUNCTION(BlueprintCallable, Category="Players")
	void RestartAllPlayers();

	void FreezeAllPlayers();

	virtual void BeginPlay() override;

	virtual void Logout(AController* Exiting) override;

	virtual void Tick(float DeltaSeconds) override;
};
