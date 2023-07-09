// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkGameMode_Map1.h"

void AGR2_ReworkGameMode_Map1::RestartPlayerTimer(AController* CurrentController)
{
	if (const UWorld* World = GetWorld())
	{
		if (AGR2_ReworkGameMode* GameMode = Cast<AGR2_ReworkGameMode>(World->GetAuthGameMode()))
		{
			FTimerHandle RespawnTimerHandler;
			FTimerDelegate RespawnTimerDelegate;

			RespawnTimerDelegate.BindUFunction(this, FName("RestartPlayer"), CurrentController);
			
			World->GetTimerManager().SetTimer(RespawnTimerHandler, RespawnTimerDelegate, RESPAWN_TIME, false);
		}
	}
}