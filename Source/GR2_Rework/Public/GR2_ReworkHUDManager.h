// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class GR2_REWORK_API GR2_ReworkHUDManager
{
public:
	GR2_ReworkHUDManager();
	~GR2_ReworkHUDManager();

	static GR2_ReworkHUDManager* GetInstance();

	inline static GR2_ReworkHUDManager* HUDManager = nullptr;
};
