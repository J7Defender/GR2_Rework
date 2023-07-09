// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GR2_Rework/GR2_ReworkGameMode.h"
#include "GR2_ReworkGameMode_Map1.generated.h"

/**
 * 
 */
UCLASS()
class GR2_REWORK_API AGR2_ReworkGameMode_Map1 : public AGR2_ReworkGameMode
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Control")
	bool bIsPlayable = true;
	
	void RestartPlayerTimer(AController* CurrentController);
};
