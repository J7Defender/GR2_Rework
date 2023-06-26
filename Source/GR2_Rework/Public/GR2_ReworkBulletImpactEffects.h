// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GR2_ReworkBulletImpactEffects.generated.h"

class USoundCue;

UCLASS()
class GR2_REWORK_API AGR2_ReworkBulletImpactEffects : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGR2_ReworkBulletImpactEffects();

	/** default impact FX used when material specific override doesn't exist */
	UPROPERTY(EditDefaultsOnly, Category=Defaults)
	UParticleSystem* DefaultFX;

	/** impact FX on flesh */
	UPROPERTY(EditDefaultsOnly, Category=Visual)
	UParticleSystem* FleshFX;

	/** default impact sound used when material specific override doesn't exist */
	UPROPERTY(EditDefaultsOnly, Category=Defaults)
	USoundCue* DefaultSound;
	
	/** impact FX on flesh */
	UPROPERTY(EditDefaultsOnly, Category=Sound)
	USoundCue* FleshSound;

	/** spawn effect */
	virtual void PostInitializeComponents() override;
};
