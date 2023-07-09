// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class GR2_REWORK_API GR2_ReworkCharacterData
{
public:
	GR2_ReworkCharacterData();
	~GR2_ReworkCharacterData();

	static GR2_ReworkCharacterData* GetInstance();
	static void SetUserName(FString Name);
	static FString GetUserName() { return GetInstance()->Name; }

	// Variables
	inline static GR2_ReworkCharacterData* CharacterData = nullptr;

	FString Name = "";
};