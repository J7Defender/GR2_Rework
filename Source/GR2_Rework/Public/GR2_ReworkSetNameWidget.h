// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GR2_ReworkSetNameWidget.generated.h"

/**
 * 
 */
UCLASS()
class GR2_REWORK_API UGR2_ReworkSetNameWidget : public UUserWidget
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="UserProperties")
	void SetName(const FString& Name);
};
