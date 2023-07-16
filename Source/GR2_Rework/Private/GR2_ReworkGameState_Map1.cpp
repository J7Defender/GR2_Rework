// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkGameState_Map1.h"
#include "Net/UnrealNetwork.h"

void AGR2_ReworkGameState_Map1::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate these things
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, RedTeamScore);
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, BlueTeamScore);
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, RemainingTime);
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, BluePlayers);
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, RedPlayers);
}

void AGR2_ReworkGameState_Map1::HandleMatchIsWaitingToStart()
{
	Super::HandleMatchIsWaitingToStart();
}

void AGR2_ReworkGameState_Map1::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();
}

void AGR2_ReworkGameState_Map1::HandleMatchHasEnded()
{
	Super::HandleMatchHasEnded();
}

void AGR2_ReworkGameState_Map1::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}
