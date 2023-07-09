// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkAmmunitionManager.h"

GR2_ReworkAmmunitionManager::GR2_ReworkAmmunitionManager(): WeaponBlueprint(nullptr)
{
}

GR2_ReworkAmmunitionManager::GR2_ReworkAmmunitionManager(AGR2_ReworkWeapon* WeaponBlueprint)
{
	this->WeaponBlueprint = WeaponBlueprint;
}

GR2_ReworkAmmunitionManager::~GR2_ReworkAmmunitionManager()
{
}
