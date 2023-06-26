// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

// custom log category
DECLARE_LOG_CATEGORY_EXTERN(GR2, Log, All);

// custom log macro
#define LOG(x, ...) UE_LOG(GR2, Log, TEXT(x), __VA_ARGS__)
#define LOG_WARNING(x, ...) UE_LOG(GR2, Warning, TEXT(x), __VA_ARGS__)
#define LOG_ERROR(x, ...) UE_LOG(GR2, Error, TEXT(x), __VA_ARGS__)

#define MAX_FPS 75
#define DEBUG 1