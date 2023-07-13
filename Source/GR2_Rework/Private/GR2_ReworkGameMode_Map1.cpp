// Fill out your copyright notice in the Description page of Project Settings.

#include "GR2_ReworkGameMode_Map1.h"

#include "GR2_ReworkCharacterData.h"
#include "GR2_ReworkGameState_Map1.h"
#include "Blueprint/UserWidget.h"
#include "GR2_Rework/GR2_ReworkCharacter.h"

void AGR2_ReworkGameMode_Map1::RestartPlayerTimer(AController* CurrentController)
{
	if (const UWorld* World = GetWorld())
	{
		if (AGR2_ReworkGameMode* GameMode = Cast<AGR2_ReworkGameMode>(World->GetAuthGameMode()))
		{
			FTimerHandle RespawnTimerHandler;
			FTimerDelegate RespawnTimerDelegate;
			
			UE_LOG(LogTemp, Warning, TEXT("[GAME_MODE] NumPlayers: %d"), GetNumPlayers());

			RespawnTimerDelegate.BindUFunction(this, FName("RestartPlayer"), CurrentController);
			
			World->GetTimerManager().SetTimer(RespawnTimerHandler, RespawnTimerDelegate, RESPAWN_TIME, false);
		}
	}
}

void AGR2_ReworkGameMode_Map1::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	static_cast<AGR2_ReworkCharacter*>(NewPlayer->GetCharacter())->Client_DisplayChooseTeamWidget();
	
	UE_LOG(LogTemp, Warning, TEXT("[GAME_MODE] Player Logged in. NumPlayers: %d"), GetNumPlayers());
}

void AGR2_ReworkGameMode_Map1::Logout(AController* Exiting)
{
	if (Exiting->GetPlayerState<AGR2_ReworkPlayerState>()->Team == ETeam::Blue)
	{
		GetGameState<AGR2_ReworkGameState_Map1>()->BluePlayers.Remove(Exiting->GetPlayerState<AGR2_ReworkPlayerState>());
	} else
	{
		GetGameState<AGR2_ReworkGameState_Map1>()->RedPlayers.Remove(Exiting->GetPlayerState<AGR2_ReworkPlayerState>());
	}
	
	Super::Logout(Exiting);
	
	UE_LOG(LogTemp, Warning, TEXT("[GAME_MODE] Player Logged out. PlayerName: %s"), *(Exiting->GetPlayerState<AGR2_ReworkPlayerState>()->GetPlayerName()));
	
	UE_LOG(LogTemp, Warning, TEXT("[GAME_MODE] Player Logged out. Remaining NumPlayers: %d"), GetNumPlayers());
}

void AGR2_ReworkGameMode_Map1::HandleMatchIsWaitingToStart()
{
	Super::HandleMatchIsWaitingToStart();
	
	GetGameState<AGR2_ReworkGameState_Map1>()->RemainingTime = WarmUpTime;
}

void AGR2_ReworkGameMode_Map1::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	GetGameState<AGR2_ReworkGameState_Map1>()->RemainingTime = MatchTime;
}

void AGR2_ReworkGameMode_Map1::HandleMatchHasEnded()
{
	Super::HandleMatchHasEnded();

	GetGameState<AGR2_ReworkGameState_Map1>()->RemainingTime = EndMatchTime;
}

bool AGR2_ReworkGameMode_Map1::ReadyToStartMatch_Implementation()
{
	//TODO: [Start Match] Return true when each side has at least one player
	
	// if (GetNumPlayers() >= 2)
	// {
	// 	return true;
	// }
	// return false;

	return Super::ReadyToStartMatch_Implementation();
}

bool AGR2_ReworkGameMode_Map1::ReadyToEndMatch_Implementation()
{
	if (GetGameState<AGR2_ReworkGameState_Map1>()->BlueTeamScore >= WinningScore || GetGameState<AGR2_ReworkGameState_Map1>()->RedTeamScore >= WinningScore)
	{
		return true;
	}
	
	if (GetGameState<AGR2_ReworkGameState_Map1>()->RemainingTime <= 0)
	{
		return true;
	}

	return false;
}