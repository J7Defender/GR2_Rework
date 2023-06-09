// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"

#include "GR2_ReworkCharacter.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/DamageEvents.h"
#include "Sound/SoundCue.h"

// Sets default values for this component's properties
UTP_WeaponComponent::UTP_WeaponComponent()
{
	// Default offset from the character location for projectiles to spawn
	MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);

	WeaponFXHandler = new UTP_WeaponFXHandler();
	if (WeaponFXHandler == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Null WeaponFXHandler"));
	}
}

void UTP_WeaponComponent::Fire()
{
	if (WeaponBlueprint->CurrentAmmo <= 0)
		return;
	
	WeaponFXHandler->DespawnMuzzleFlashFX(WeaponBlueprint);

	WeaponFXHandler->DespawnTrailFX(WeaponBlueprint);
	
	// Try and fire weapon

	FVector Location;
	FRotator Rotation;

	Character->GetController()->GetPlayerViewPoint(Location, Rotation);

	FVector RayStart = Location;
	RayEnd = RayStart + (Rotation.Vector() * WeaponBlueprint->Range);

	FCollisionQueryParams CollisionQueryParams;
	CollisionQueryParams.AddIgnoredActor(Character);

	GetWorld()->LineTraceSingleByChannel(HitResult, RayStart, RayEnd, ECC_Visibility, CollisionQueryParams);

	if (HitResult.GetActor() != nullptr)
	{
		FPointDamageEvent PointDamageEvent;

		Character->DealDamage(HitResult, WeaponBlueprint->Damage, RayStart, Character);

		AGR2_ReworkBulletImpactEffects* ImpactFxInst = WeaponBlueprint->ImpactFX.GetDefaultObject();

		WeaponFXHandler->SpawnSoundFXAt(this, ImpactFxInst->DefaultSound, HitResult.ImpactPoint);
	}
	
	// Try and play the sound if specified
	if (FireSound != nullptr)
	{
		WeaponFXHandler->SpawnSoundFXAt(this, FireSoundPersonal, Character->GetActorLocation());

		// Replicate sound to all players
		Character->Server_PlayFireSound();
	}
	
	// Try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Character->GetMesh1P()->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}

	// Try and display firing Fx if available
	WeaponFXHandler->SpawnMuzzleFlashFX(this, WeaponBlueprint);
	Character->Server_SpawnMuzzleFlashFX();

	// Try and display trail Fx if available
	WeaponFXHandler->SpawnTrailFX(this, WeaponBlueprint, HitResult, RayEnd, Rotation);
	Character->Server_SpawnTrailFX();

	// Try and show impact Fx if available
	WeaponFXHandler->SpawnImpactFX(this, WeaponBlueprint, HitResult);
	Character->Server_SpawnImpactFX();

	// Reduce Current Ammo in clip
	WeaponBlueprint->CurrentAmmo -= 1;

	WeaponBlueprint->UpdateAmmoUI();
}

void UTP_WeaponComponent::AttachWeaponToCharacter()
{
	const FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
	AttachToComponent(Character->GetMesh1P(), AttachmentRules, FName(TEXT("GripPoint")));
}

void UTP_WeaponComponent::AttachWeapon(AGR2_ReworkCharacter* TargetCharacter)
{
	bool CurrentWeaponSet = false;
	
	Character = TargetCharacter;
	if (Character == nullptr)
	{
		return;
	}
	
	switch (WeaponBlueprint->WeaponType)
	{
	case Primary:
		if (Character->GetWeapon1() != nullptr)
			return;
		Character->SetWeapon1(WeaponBlueprint);
		break;
	case Secondary:
		if (Character->GetWeapon2() != nullptr)
			return;
		Character->SetWeapon2(WeaponBlueprint);
		break;
	default:
		return;
	}
	
	// Attach the weapon to Character
	AttachWeaponToCharacter();
	
	// switch bHasRifle so the animation blueprint can switch to another animation set
	Character->SetHasRifle(true);

	// Pick up if not holding any weapon
	// Only get weapon and its info if holding 	
	if (Character->GetCurrentWeapon() == nullptr)
	{
		Character->SetCurrentWeapon(WeaponBlueprint);
		UE_LOG(LogTemp, Warning, TEXT("Set CurrentWeapon"));
	} else
	{
		SetVisibility(false);
	}
}

void UTP_WeaponComponent::StartBurst()
{
	IsFiring = true;
	if (Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}
	
	AutomaticFiring();
}

void UTP_WeaponComponent::StopBurst()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_HandleFire);
	IsFiring = false;

	WeaponFXHandler->DespawnMuzzleFlashFX(WeaponBlueprint);

	WeaponFXHandler->DespawnTrailFX(WeaponBlueprint);
}

void UTP_WeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (Character == nullptr)
	{
		return;
	}

	if (const APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->RemoveMappingContext(FireMappingContext);
		}
	}
}

void UTP_WeaponComponent::AutomaticFiring()
{
	if (WeaponBlueprint->bIsReloading == false || WeaponBlueprint->CurrentAmmo > 0)
	{
		Fire();
		if (WeaponBlueprint->IsAutomatic == true)
		{
			GetWorld()->GetTimerManager().SetTimer(TimerHandle_HandleFire, this, &UTP_WeaponComponent::Fire, WeaponBlueprint->TimeBetweenShots, true);
		}
	}
}
