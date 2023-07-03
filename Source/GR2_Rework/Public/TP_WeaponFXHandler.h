// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GR2_ReworkWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "GR2_Rework/TP_WeaponComponent.h"

class UTP_WeaponComponent;

/**
 * 
 */
class UTP_WeaponFXHandler
{

public:
	UTP_WeaponFXHandler();
	
	void DespawnMuzzleFlashFX(AGR2_ReworkWeapon* WeaponBlueprint);
	void DespawnTrailFX(AGR2_ReworkWeapon* WeaponBlueprint);
	
	void SpawnTrailFX(UTP_WeaponComponent* WeaponComponent, AGR2_ReworkWeapon* WeaponBlueprint, const FHitResult& HitResult, const FVector& EndPoint, const FRotator& CharRotation);
	void SpawnMuzzleFlashFX(UTP_WeaponComponent* WeaponComponent, AGR2_ReworkWeapon* WeaponBlueprint);
	
	void SpawnSoundFXAt(UTP_WeaponComponent* WeaponComponent, USoundBase* Sound, const FVector& Location);
	void SpawnImpactFX(UTP_WeaponComponent* WeaponComponent, AGR2_ReworkWeapon* WeaponBlueprint, const FHitResult& HitResult);
};
