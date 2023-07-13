// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkPlayerState.h"

#include "GR2_ReworkCharacterData.h"
#include "Net/UnrealNetwork.h"


AGR2_ReworkPlayerState::AGR2_ReworkPlayerState()
{
	bUseCustomPlayerNames = true;
}

void AGR2_ReworkPlayerState::Server_SetCustomPlayerName_Implementation(const FString& Name)
{
	SetPlayerName(Name);
	
	UE_LOG(LogTemp, Warning, TEXT("[PlayerState_Server] Set Player Name to: %s"), *Name);
}

void AGR2_ReworkPlayerState::SetCustomPlayerName(const FString& Name)
{
	Server_SetCustomPlayerName(Name);
	
	UE_LOG(LogTemp, Warning, TEXT("[PlayerState] Set Player Name to: %s"), *Name);
}

void AGR2_ReworkPlayerState::BeginPlay()
{
	Super::BeginPlay();
}

void AGR2_ReworkPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate these things
	DOREPLIFETIME(AGR2_ReworkPlayerState, Team);
}
