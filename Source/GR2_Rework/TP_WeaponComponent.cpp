// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"

#include "GR2_ReworkCharacter.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/StaticMeshActor.h"

// Sets default values for this component's properties
UTP_WeaponComponent::UTP_WeaponComponent()
{
	// Default offset from the character location for projectiles to spawn
	MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);
}


void UTP_WeaponComponent::Fire()
{	
	UE_LOG(LogTemp, Warning, TEXT("WeaponComponent::Fire"));
	// Try and fire weapon

	FVector Location;
	FRotator Rotation;
	FHitResult HitResult;

	Character->GetController()->GetPlayerViewPoint(Location, Rotation);

	FVector RayStart = Location;
	FVector RayEnd = RayStart + (Rotation.Vector() * WeaponBlueprint->Range);

	GetWorld()->LineTraceSingleByChannel(HitResult, RayStart, RayEnd, ECC_Visibility);

	if (HitResult.GetActor()->GetClass() == AStaticMeshActor::StaticClass())
	{
		UE_LOG(LogTemp, Warning, TEXT("HIT"));
	}

#if WITH_EDITOR
	DrawDebugLine(GetWorld(), RayStart, RayEnd, FColor::Red, false, 2.f);
#endif	
	
	// Try and play the sound if specified
	// TODO: Add fire sound to weapon
	// if (FireSound != nullptr)
	// {
	// 	UGameplayStatics::PlaySoundAtLocation(this, FireSound, Character->GetActorLocation());
	// }
	
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
}

void UTP_WeaponComponent::AttachWeapon(AGR2_ReworkCharacter* TargetCharacter)
{
	Character = TargetCharacter;
	if (Character == nullptr)
	{
		return;
	}

	// Attach the weapon to the First Person Character
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
	AttachToComponent(Character->GetMesh1P(), AttachmentRules, FName(TEXT("GripPoint")));
	
	// switch bHasRifle so the animation blueprint can switch to another animation set
	Character->SetHasRifle(true);

	// Set up action bindings
	if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			// Set the priority of the mapping to 1, so that it overrides the Jump action with the Fire action when using touch input
			Subsystem->AddMappingContext(FireMappingContext, 1);
		}

		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
		{
			// Fire
			EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &UTP_WeaponComponent::StartFire);
			EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &UTP_WeaponComponent::StopFire);
		}
	}
}

void UTP_WeaponComponent::StartFire()
{
	UE_LOG(LogTemp, Warning, TEXT("StartFire"));
	IsFiring = true;
	if (Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}

	AutomaticFiring();
}

void UTP_WeaponComponent::StopFire()
{
	UE_LOG(LogTemp, Warning, TEXT("StopFire"));
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_HandleFire);
	IsFiring = false;
}

void UTP_WeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (Character == nullptr)
	{
		return;
	}

	if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->RemoveMappingContext(FireMappingContext);
		}
	}
}

void UTP_WeaponComponent::AutomaticFiring()
{
	Fire();
	if (WeaponBlueprint->IsAutomatic == true)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_HandleFire, this, &UTP_WeaponComponent::Fire, WeaponBlueprint->TimeBetweenShots, true);
	}
}
