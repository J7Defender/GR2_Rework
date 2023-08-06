// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkGameState_Map1.h"

#include "../GameMode/GR2_ReworkGameMode_Map1.h"
#include "../../Character/GR2_ReworkPlayerState.h"
#include "Net/UnrealNetwork.h"

void AGR2_ReworkGameState_Map1::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate these things
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, RedTeamScore);
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, BlueTeamScore);
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, RemainingTime);
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, BluePlayersNum);
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, RedPlayersNum);
	DOREPLIFETIME(AGR2_ReworkGameState_Map1, GameMatchState);
}

void AGR2_ReworkGameState_Map1::ResetScore()
{
	BlueTeamScore = 0;
	RedTeamScore = 0;
	Multi_UpdateScoreUI();
}

void AGR2_ReworkGameState_Map1::Server_UpdateScore(AController* PlayerController)
{
	const AGR2_ReworkPlayerState* PlayerState = PlayerController->GetPlayerState<AGR2_ReworkPlayerState>();
	if (PlayerState->Team == Red)
	{
		BlueTeamScore++;
		UE_LOG(LogTemp, Warning, TEXT("[GameState] Blue Add 1 Score: %d"), BlueTeamScore);
	}

	if (PlayerState->Team == Blue)
	{
		RedTeamScore++;
		UE_LOG(LogTemp, Warning, TEXT("[GameState] Red Add 1 Score: %d"), RedTeamScore);
	}

	const int WinningScore = static_cast<AGR2_ReworkGameMode_Map1*>(GetWorld()->GetAuthGameMode())->WinningScore;
	
	if ((BlueTeamScore >= WinningScore || RedTeamScore >= WinningScore) && GameMatchState == EMatchState::E_InMatch)
	{
		TryChangeMatchState();
	}
}

void AGR2_ReworkGameState_Map1::OnRep_ScoreUpdate()
{
	UE_LOG(LogTemp, Warning, TEXT("[GameState]OnRep_ScoreUpdate"));
	Multi_UpdateScoreUI();
}

void AGR2_ReworkGameState_Map1::OnRep_TimerUpdate()
{
	UE_LOG(LogTemp, Warning, TEXT("[GameState]OnRep_TimerUpdate"));
	Multi_UpdateTimerUI();
}

void AGR2_ReworkGameState_Map1::UpdateMatchStateUI_Implementation(EMatchState FMatchState)
{
	// Implemented in Blueprints
}

void AGR2_ReworkGameState_Map1::Multi_UpdateMatchStateUI_Implementation(EMatchState FMatchState)
{
	UE_LOG(LogTemp, Warning, TEXT("[GameState]Multi_UpdateMatchStateUI"));
	UpdateMatchStateUI(FMatchState);
}

void AGR2_ReworkGameState_Map1::UpdateWinnerUI_Implementation(int WinnerIndex)
{
	// Implemented in Blueprints
}

void AGR2_ReworkGameState_Map1::Multi_UpdateWinnerUI_Implementation(int WinnerIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("[GameState]Multi_UpdateWinnerUI"));
	UpdateWinnerUI(WinnerIndex);
}

void AGR2_ReworkGameState_Map1::UpdateTimerUI_Implementation(int FRemainingTime)
{
	// Implemented in Blueprints
}

void AGR2_ReworkGameState_Map1::Multi_UpdateTimerUI_Implementation()
{
	if (!HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("[GameState]Multi_UpdateTimerUI"));
		UpdateTimerUI(RemainingTime);
	}
}

void AGR2_ReworkGameState_Map1::UpdateScoreUI_Implementation(int FRedTeamScore, int FBlueTeamScore)
{
	// Implemented in Blueprints
}

void AGR2_ReworkGameState_Map1::Multi_UpdateScoreUI_Implementation()
{
	if (!HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("[GameState]Multi_UpdateScoreUI"));
		UpdateScoreUI(RedTeamScore, BlueTeamScore);
	}
}

void AGR2_ReworkGameState_Map1::TryChangeMatchState()
{
	if (HasAuthority())
	{
		/** Switch to InMatch */
		if (GameMatchState == EMatchState::E_WarmUp)
		{
			if (IsReadyToStartMatch())
			{
				GameMatchState = EMatchState::E_InMatch;
				UE_LOG(LogTemp, Warning, TEXT("Changing State to E_InMatch"));
				Multi_UpdateMatchStateUI(EMatchState::E_InMatch);

				ResetScore();
				RemainingTime = GetWorld()->GetAuthGameMode<AGR2_ReworkGameMode_Map1>()->MatchTime;
				
				GetWorld()->GetAuthGameMode<AGR2_ReworkGameMode_Map1>()->RestartAllPlayers();
				
				return;
			}
		}

		/** Switch to PostMatch */
		if (GameMatchState == EMatchState::E_InMatch)
		{
			GameMatchState = EMatchState::E_PostMatch;
			UE_LOG(LogTemp, Warning, TEXT("Changing State to E_PostMatch"));

			Multi_UpdateMatchStateUI(EMatchState::E_PostMatch);
			
			RemainingTime = GetWorld()->GetAuthGameMode<AGR2_ReworkGameMode_Map1>()->EndMatchTime;

			GetWorld()->GetAuthGameMode<AGR2_ReworkGameMode_Map1>()->FreezeAllPlayers();

			if (BlueTeamScore > RedTeamScore)
			{
				Multi_UpdateWinnerUI(1);
			} else if (BlueTeamScore < RedTeamScore)
			{
				Multi_UpdateWinnerUI(2);
			} else
			{
				Multi_UpdateWinnerUI(0);
			}
			
			return;
		}

		/** Switch to WarmUp */
		if (GameMatchState == EMatchState::E_PostMatch || GameMatchState == EMatchState::E_Default)
		{
			GameMatchState = EMatchState::E_WarmUp;
			UE_LOG(LogTemp, Warning, TEXT("Changing State to E_WarmUp"));
			Multi_UpdateMatchStateUI(EMatchState::E_WarmUp);
			RemainingTime = GetWorld()->GetAuthGameMode<AGR2_ReworkGameMode_Map1>()->WarmUpTime;
			
			ResetScore();
			
			GetWorld()->GetAuthGameMode<AGR2_ReworkGameMode_Map1>()->RestartAllPlayers();
		}
	}
}

bool AGR2_ReworkGameState_Map1::IsReadyToStartMatch() const
{
	if (BluePlayersNum <= 0 || RedPlayersNum <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("[ReadyToStartMatch][GameState] Not enough players."));
		UE_LOG(LogTemp, Warning, TEXT("[ReadyToStartMatch][GameState] Need at least 1 player on each side."));
		
		const FString WaitingMessage = FString::Printf(TEXT("[ReadyToStartMatch][GameState] Need at least 1 player on each side."));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, WaitingMessage);
		
		return false;
	}
	return true;
}
