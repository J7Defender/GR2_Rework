// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#define MAX_FPS 75
#define DEBUG 1

#define LOG_CUSTOM(str) UE_LOG(LogTemp, Warning, TEXT("%s"), str);

/**
 * 
 */
class GR2_REWORK_API GR2_ReworkDefines
{
public:
	GR2_ReworkDefines();
	~GR2_ReworkDefines();
};
