// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GR2_ReworkWeapon.h"
#include "TP_WeaponFXHandler.h"
#include "Components/SkeletalMeshComponent.h"
#include "TP_WeaponComponent.generated.h"

class AGR2_ReworkCharacter;
class UTP_WeaponFXHandler;

UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GR2_REWORK_API UTP_WeaponComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:	
	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AGR2_ReworkProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=Gameplay)
	USoundBase* FireSound;
	
	/** AnimMontage to play each time we fire */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* FireAnimation;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector MuzzleOffset;

	/** MappingContext */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* FireMappingContext;

	UPROPERTY(BlueprintReadWrite, Category="BluePrint")
	AGR2_ReworkWeapon* WeaponBlueprint;

	/** Sets default values for this component's properties */
	UTP_WeaponComponent();

	/** Attaches the actor to a FirstPersonCharacter */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void AttachWeapon(AGR2_ReworkCharacter* TargetCharacter);

	/** Start a Fire Sequence */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void StartBurst();

	UFUNCTION(BlueprintCallable, Category="Weapon")
	void StopBurst();

	/** Make the weapon Fire a Projectile */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void Fire();

	/** Attach Weapon to Character */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void AttachWeaponToCharacter();

protected:
	/** Ends gameplay for this component. */
	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	/** The Character holding this weapon*/
	AGR2_ReworkCharacter* Character;

	/** Weapon FX Handler */
	UTP_WeaponFXHandler* WeaponFXHandler;

	/** Handle the automatic firing */
	FTimerHandle TimerHandle_HandleFire;

	bool IsFiring = false;
	void AutomaticFiring();
};
