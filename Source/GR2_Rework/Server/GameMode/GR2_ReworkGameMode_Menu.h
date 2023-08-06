// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GR2_ReworkGameMode.h"
#include "GR2_ReworkGameMode_Menu.generated.h"

/**
 * 
 */
UCLASS()
class GR2_REWORK_API AGR2_ReworkGameMode_Menu : public AGR2_ReworkGameMode
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="Control")
	bool bIsPlayable = false;
};
