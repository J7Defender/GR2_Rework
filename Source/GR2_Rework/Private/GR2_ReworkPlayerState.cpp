// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkPlayerState.h"

#include "GR2_ReworkGameState_Map1.h"
#include "GR2_Rework/GR2_ReworkCharacter.h"
#include "Net/UnrealNetwork.h"


AGR2_ReworkPlayerState::AGR2_ReworkPlayerState()
{
	bUseCustomPlayerNames = true;
}

void AGR2_ReworkPlayerState::StartPlayerOnTeamChange()
{
	AGR2_ReworkCharacter* Character = GetOwnerCharacter();
	if (Character != nullptr)
	{
		Character->RestartPlayerOnBeginMatch();
	}
}

AGR2_ReworkCharacter* AGR2_ReworkPlayerState::GetOwnerCharacter()
{
	AController* OwnerController = Cast<AController>(GetOwner());
	if (OwnerController && OwnerController->GetCharacter())
	{
		return Cast<AGR2_ReworkCharacter>(OwnerController->GetCharacter());
	}
	return nullptr;
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
	if (Team == Red)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PlayerState] RedPlayersNum: Added"));
		static_cast<AGR2_ReworkGameState_Map1*>(GetWorld()->GetGameState())->RedPlayersNum++;
	} else if (Team == Blue)
	{
		UE_LOG(LogTemp, Warning, TEXT("[PlayerState] BluePlayersNum: Added"));
		static_cast<AGR2_ReworkGameState_Map1*>(GetWorld()->GetGameState())->BluePlayersNum++;
	}
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
