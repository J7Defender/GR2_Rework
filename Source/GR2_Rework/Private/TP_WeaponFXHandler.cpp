// Fill out your copyright notice in the Description page of Project Settings.


#include "TP_WeaponFXHandler.h"

#include "GR2_Rework/GR2_Rework.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"

UTP_WeaponFXHandler::UTP_WeaponFXHandler()
{
	
}

void UTP_WeaponFXHandler::DespawnMuzzleFlashFX(AGR2_ReworkWeapon* WeaponBlueprint)
{
	if (WeaponBlueprint->MuzzlePSC != nullptr)
	{
		WeaponBlueprint->MuzzlePSC->Deactivate();
		WeaponBlueprint->MuzzlePSC = nullptr;
	}
}

void UTP_WeaponFXHandler::DespawnTrailFX(AGR2_ReworkWeapon* WeaponBlueprint)
{
	if (WeaponBlueprint->TrailPSC != nullptr)
	{
		WeaponBlueprint->TrailPSC->Deactivate();
		WeaponBlueprint->TrailPSC = nullptr;
	}
}

void UTP_WeaponFXHandler::SpawnSoundFXAt(UTP_WeaponComponent* WeaponComponent, USoundBase* Sound, const FVector& Location)
{
	UGameplayStatics::PlaySoundAtLocation(WeaponComponent, Sound, Location);
}

void UTP_WeaponFXHandler::SpawnImpactFX(UTP_WeaponComponent* WeaponComponent, AGR2_ReworkWeapon* WeaponBlueprint,
	const FHitResult& HitResult)
{
	if (WeaponBlueprint->ImpactFX != nullptr)
	{
		if (WeaponBlueprint->ImpactPSC == nullptr)
		{
#if PLATFORM_WINDOWS
			LOG("Impact Spawned");
#endif
			
			// FVector VectorImpactPosition = static_cast<FVector>(HitResult.ImpactPoint);
			// WeaponBlueprint->ImpactPSC = UGameplayStatics::SpawnEmitterAtLocation(WeaponComponent, ImpactFxInst->DefaultFX, VectorImpactPosition);
		}
	}
}

void UTP_WeaponFXHandler::SpawnTrailFX(UTP_WeaponComponent* WeaponComponent, AGR2_ReworkWeapon* WeaponBlueprint, const FHitResult& HitResult, const FVector& EndPoint, const FRotator& CharRotation)
{
	FVector EndPointPos = EndPoint;
	if (WeaponBlueprint->TrailFX != nullptr)
	{
		if (WeaponBlueprint->TrailPSC == nullptr)
		{
			const FVector ActualEndPoint = HitResult.GetActor() != nullptr ? static_cast<FVector>(HitResult.ImpactPoint) : EndPointPos;
			
			WeaponBlueprint->TrailPSC = UGameplayStatics::SpawnEmitterAtLocation(WeaponComponent, WeaponBlueprint->TrailFX, WeaponComponent->GetSocketLocation(TEXT("Muzzle")), CharRotation);
			if (WeaponBlueprint->TrailPSC != nullptr)
			{
				const FName TrailTargetParam = TEXT("ShockBeamEnd"); // Parameter name for end point of the trail
				WeaponBlueprint->TrailPSC->SetVectorParameter(TrailTargetParam, ActualEndPoint);
			}
		}
	}
}

void UTP_WeaponFXHandler::SpawnMuzzleFlashFX(UTP_WeaponComponent* WeaponComponent, AGR2_ReworkWeapon* WeaponBlueprint)
{
	if (WeaponBlueprint->MuzzleFlashFX != nullptr)
	{
		const FName MuzzleSocketName = FName(TEXT("Muzzle"));
		if (WeaponBlueprint->MuzzlePSC != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("MuzzlePSC not nullptr -> Deactivate MuzzlePSC"));
			WeaponBlueprint->MuzzlePSC->Deactivate();
		}
		WeaponBlueprint->MuzzlePSC = UGameplayStatics::SpawnEmitterAttached(WeaponBlueprint->MuzzleFlashFX, WeaponComponent, MuzzleSocketName);
	}
}
