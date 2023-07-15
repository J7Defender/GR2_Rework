// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkPlayerState.h"

#include "GR2_ReworkGameMode_Map1.h"
#include "GR2_Rework/GR2_ReworkCharacter.h"
#include "Net/UnrealNetwork.h"


AGR2_ReworkPlayerState::AGR2_ReworkPlayerState()
{
	bUseCustomPlayerNames = true;
}

void AGR2_ReworkPlayerState::StartPlayerOnTeamChange()
{
	if (GetOwner())
	{
		AController* OwnerController = Cast<AController>(GetOwner());
		if (OwnerController && OwnerController->GetCharacter())
		{
			// TODO: Remove this Destroy character function when change team
			// Cast<AGR2_ReworkCharacter>(OwnerController->GetCharacter())->Destroy();
			Cast<AGR2_ReworkCharacter>(OwnerController->GetCharacter())->RestartPlayer();
		}
	}
}

void AGR2_ReworkPlayerState::OnRep_Team()
{
	StartPlayerOnTeamChange();
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

void AGR2_ReworkPlayerState::Server_SetTeam_Implementation(ETeam PlayerTeam)
{
	Team = PlayerTeam;
}

void AGR2_ReworkPlayerState::SetTeam(ETeam PlayerTeam)
{
	Server_SetTeam(PlayerTeam);
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
