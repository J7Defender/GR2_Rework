// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "GR2_ReworkGameSession.generated.h"

/**
 * 
 */
UCLASS()
class GR2_REWORK_API AGR2_ReworkGameSession : public AGameSession
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
};
