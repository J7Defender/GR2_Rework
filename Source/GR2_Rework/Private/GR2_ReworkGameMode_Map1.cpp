// Fill out your copyright notice in the Description page of Project Settings.

#include "GR2_ReworkGameMode_Map1.h"

#include "GR2_ReworkGameState_Map1.h"
#include "GR2_ReworkPlayerState.h"
#include "GR2_Rework/GR2_ReworkCharacter.h"

void AGR2_ReworkGameMode_Map1::RestartPlayerTimer(AController* CurrentController)
{
	if (const UWorld* World = GetWorld())
	{
		FTimerDelegate RespawnTimerDelegate;
		FTimerHandle RespawnTimerHandler;
		
		UE_LOG(LogTemp, Warning, TEXT("[GAME_MODE] AGR2_ReworkGameMode_Map1::RestartPlayerTimer"));

		RespawnTimerDelegate.BindUFunction(this, FName("RestartPlayer"), CurrentController);
		
		World->GetTimerManager().SetTimer(RespawnTimerHandler, RespawnTimerDelegate, RESPAWN_TIME, false);
	}
}

void AGR2_ReworkGameMode_Map1::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	UE_LOG(LogTemp, Warning, TEXT("[GAME_MODE] Player Logged in. NumPlayers: %d"), GetNumPlayers());
	PlayerControllers.Add(NewPlayer);
	static_cast<AGR2_ReworkCharacter*>(NewPlayer->GetCharacter())->Client_DisplayChooseTeamWidget();
}

void AGR2_ReworkGameMode_Map1::RestartPlayer(AController* NewPlayer)
{
	FString TeamStr = "";
	AActor* TeamPlayerStart;

	if (NewPlayer == nullptr || NewPlayer->GetPlayerState<AGR2_ReworkPlayerState>() == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("[AGR2_ReworkGameMode_Map1::RestartPlayer] NULL or Player Disconnected"))
		return;
	}

	if (NewPlayer->GetCharacter() != nullptr)
	{
		static_cast<AGR2_ReworkCharacter*>(NewPlayer->GetCharacter())->Server_DestroyWeapons();
		static_cast<AGR2_ReworkCharacter*>(NewPlayer->GetCharacter())->Multi_DestroyWeapons();
		NewPlayer->GetCharacter()->Destroy();
	}
	
	if (NewPlayer->GetPlayerState<AGR2_ReworkPlayerState>()->Team == ETeam::None)
	{
		TeamStr = TEXT("None");
		TeamPlayerStart = FindPlayerStart(NewPlayer, TeamStr);
	} else {
		TeamStr = NewPlayer->GetPlayerState<AGR2_ReworkPlayerState>()->Team == ETeam::Red ? TEXT("Red") : TEXT("Blue");
		TeamPlayerStart = FindPlayerStart(NewPlayer, TeamStr);
	}

	RestartPlayerAtPlayerStart(NewPlayer, TeamPlayerStart);
}

void AGR2_ReworkGameMode_Map1::RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot)
{
	Super::RestartPlayerAtPlayerStart(NewPlayer, StartSpot);
}

void AGR2_ReworkGameMode_Map1::RestartAllPlayers()
{
	for (const auto PlayerController: PlayerControllers)
	{
		RestartPlayer(PlayerController);
	}
}

void AGR2_ReworkGameMode_Map1::FreezeAllPlayers()
{
	for (const auto PlayerController: PlayerControllers)
	{
		AGR2_ReworkCharacter* Character = static_cast<AGR2_ReworkCharacter*>(PlayerController->GetCharacter());
		Character->bIsMoveAble = false;
	}
}

void AGR2_ReworkGameMode_Map1::BeginPlay()
{
	Super::BeginPlay();

	GetGameState<AGR2_ReworkGameState_Map1>()->GameMatchState = EMatchState::E_Default;
}

void AGR2_ReworkGameMode_Map1::Logout(AController* Exiting)
{
	if (Exiting->GetPlayerState<AGR2_ReworkPlayerState>()->Team == ETeam::Blue)
	{
		if (GetGameState<AGR2_ReworkGameState_Map1>()->BluePlayersNum > 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("[GameMode]Minus Blue Player"));
			GetGameState<AGR2_ReworkGameState_Map1>()->BluePlayersNum--;
		}
	} else if (Exiting->GetPlayerState<AGR2_ReworkPlayerState>()->Team == ETeam::Red)
	{
		if (GetGameState<AGR2_ReworkGameState_Map1>()->RedPlayersNum > 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("[GameMode]Minus Red Player"));
			GetGameState<AGR2_ReworkGameState_Map1>()->RedPlayersNum--;
		}
	}

	PlayerControllers.Remove(Exiting);
	
	Super::Logout(Exiting);
	
	UE_LOG(LogTemp, Warning, TEXT("[GAME_MODE] Player Logged out. Remaining NumPlayers: %d"), GetNumPlayers());
}

void AGR2_ReworkGameMode_Map1::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// UE_LOG(LogTemp, Warning, TEXT("RemainingTime: %d"), GetGameState<AGR2_ReworkGameState_Map1>()->RemainingTime);
}
