// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GR2_ReworkPlayerState.generated.h"

/**
 * 
 */

UENUM()
enum ETeam { Blue, Red, None };

UCLASS()
class GR2_REWORK_API AGR2_ReworkPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AGR2_ReworkPlayerState();
	
	/** Player Team */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Team", ReplicatedUsing="OnRep_Team")
	TEnumAsByte<ETeam> Team = ETeam::None;

	void StartPlayerOnTeamChange();
	
	UFUNCTION()
	void OnRep_Team();

	UFUNCTION(Server, Reliable, Category="Name")
	void Server_SetCustomPlayerName(const FString& Name);
	
	UFUNCTION(BlueprintCallable, Category="Name")
	void SetCustomPlayerName(const FString& Name);

	UFUNCTION(BlueprintCallable, Category="Team")
	void SetTeam(ETeam PlayerTeam);

	UFUNCTION(Server, Reliable, Category="Name")
	void Server_SetTeam(ETeam PlayerTeam);
	
	/** Override */
	virtual void BeginPlay() override;
};
