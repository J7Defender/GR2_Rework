// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GR2_ReworkBulletImpactEffects.h"
#include "GameFramework/Actor.h"
#include "GR2_ReworkWeapon.generated.h"

class UTP_WeaponComponent;

UENUM(BlueprintType)
enum EWeaponType { Primary, Secondary, Knife };

UCLASS()
class GR2_REWORK_API AGR2_ReworkWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGR2_ReworkWeapon();
	
	/** Gun mesh */
	// UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Mesh)
	// USkeletalMeshComponent* GunMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="ShootingProperties")
	bool IsAutomatic;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="ShootingProperties")
	int FireRate;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category="ShootingProperties")
	float TimeBetweenShots;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="ShootingProperties")
	int Range;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="ShootingProperties")
	int Damage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="WeaponsProperties")
	TEnumAsByte<EWeaponType> weaponType;

	UPROPERTY(BlueprintReadWrite, Category="Component")
	UTP_WeaponComponent* WeaponComponent;

	/** Muzzle flash FX */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Effects")
	UParticleSystem* MuzzleFlashFX;
	
	/** spawned component for muzzle FX */
	UPROPERTY(Transient)
	UParticleSystemComponent* MuzzlePSC;

	/** Bullet trail FX */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Effects")
	UParticleSystem* TrailFX;
	
	/** spawned component for trail FX */
	UPROPERTY(Transient)
	UParticleSystemComponent* TrailPSC;

	/** impact effects */
	UPROPERTY(EditDefaultsOnly, Category=Effects)
	TSubclassOf<AGR2_ReworkBulletImpactEffects> ImpactFX;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, Category = "Weapon")
	void StartBurst();

	UFUNCTION(BlueprintNativeEvent, Category = "Weapon")
	void StopBurst();

	UFUNCTION(BlueprintNativeEvent, Category = "Visibility")
	void SetVisibility(bool	visibility);
};
