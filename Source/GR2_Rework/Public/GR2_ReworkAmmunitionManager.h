// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class AGR2_ReworkWeapon;
/**
 * 
 */
class GR2_REWORK_API GR2_ReworkAmmunitionManager
{
public:
	GR2_ReworkAmmunitionManager();
	explicit GR2_ReworkAmmunitionManager(AGR2_ReworkWeapon* WeaponBlueprint);
	~GR2_ReworkAmmunitionManager();

	AGR2_ReworkWeapon* WeaponBlueprint = nullptr;
};
