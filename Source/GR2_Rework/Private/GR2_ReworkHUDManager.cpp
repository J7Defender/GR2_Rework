// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkHUDManager.h"

GR2_ReworkHUDManager::GR2_ReworkHUDManager()
{
}

GR2_ReworkHUDManager::~GR2_ReworkHUDManager()
{
}

GR2_ReworkHUDManager* GR2_ReworkHUDManager::GetInstance()
{
	if (HUDManager == nullptr)
	{
		HUDManager = new GR2_ReworkHUDManager();
	}
	return HUDManager;
}
