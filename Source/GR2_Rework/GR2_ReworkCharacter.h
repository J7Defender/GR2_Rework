// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GR2_ReworkGameMode.h"
#include "GR2_ReworkWeapon.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "GR2_ReworkCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;

/** Player's Team */
UENUM(BlueprintType)
enum ETeam { Red, Blue };

UCLASS(config=Game)
class AGR2_ReworkCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** Pawn mesh: 3rd person view */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh, Replicated)
	USkeletalMeshComponent* Mesh3P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* CrouchAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

public:
	AGR2_ReworkCharacter();

protected:
	virtual void BeginPlay() override;

public:
		
	/** Look Input Action */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	/** Fire Input Action */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* FireAction;

	/** Action choosing primary weapon */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* PrimaryWeaponChooseAction;

	/** Action choosing secondary weapon aka. pistol */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* SecondaryWeaponChooseAction;

	/** Action reload weapon */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* ReloadAction;

	/** Bool for AnimBP to switch to another animation set */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon)
	bool bHasRifle;

private:
	float MovementSpeedMultiplier = 1.0f;
	
	FTimerHandle TimerHandle_SlowEffectTimer;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	float OnHitMovementSpeedMultiplier;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	float OnHitEffectTime;

	void FinishSlowdown();
	void SlowDownOnHit();

public:

	/** Setter to set the bool */
	UFUNCTION(BlueprintCallable, Category = Weapon)
	void SetHasRifle(bool bNewHasRifle);

	/** Getter for the bool */
	UFUNCTION(BlueprintCallable, Category = Weapon)
	bool GetHasRifle();
	
	void DealDamage(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_OnDealDamage(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser);
	bool Server_OnDealDamage_Validate(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser);
	void Server_OnDealDamage_Implementation(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser);

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_OnFireVFX();
	void Multi_OnFireVFX_Implementation();

	UFUNCTION(Server, Unreliable)
	void Server_PlayFireSound();

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_PlayFireSound();

	UFUNCTION(Server, Unreliable)
	void Server_SpawnMuzzleFlashFX();

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_SpawnMuzzleFlashFX();

	UFUNCTION(Server, Unreliable)
	void Server_SpawnTrailFX();

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_SpawnTrailFX();

	UFUNCTION(Server, Unreliable)
	void Server_SpawnImpactFX();

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_SpawnImpactFX();

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for crouch action*/
	void StartCrouch();

	/** Called for stop crouch action*/
	void StopCrouch();

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;

	void OnPrimaryWeaponChoose();
	void OnSecondaryWeaponChoose();
	void StartBurst();
	void StopBurst();

	void OnReloadWeapon();
	
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	/** Get Current Weapon*/
	AGR2_ReworkWeapon* GetCurrentWeapon() const { return CurrentWeapon; }

	/** Set Current Weapon */
	void SetCurrentWeapon(AGR2_ReworkWeapon* Weapon);

	/** Get Primary Weapon*/
	AGR2_ReworkWeapon* GetWeapon1() const { return Weapon1; }
	
	/** Set Primary Weapon */
	void SetWeapon1(AGR2_ReworkWeapon* Weapon) { Weapon1 = Weapon; }
	
	/** Get Secondary Weapon*/
	AGR2_ReworkWeapon* GetWeapon2() const { return Weapon2; }

	/** Set Secondary Weapon */
	void SetWeapon2(AGR2_ReworkWeapon* Weapon) { Weapon2 = Weapon; }

protected:

	/** The player's maximum health. This is the highest value of their health can be. This value is a value of the player's health, which starts at when spawned.*/
	UPROPERTY(EditDefaultsOnly, Category = "Health")
	float MaxHealth;

	/** The player's current health. When reduced to 0, they are considered dead.*/
	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth)
	float CurrentHealth;

public:

	/** Character Blueprint */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Blueprint")
	AGR2_ReworkCharacter* CharacterBlueprint;

	/** Character HUD */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "HUD")
	UUserWidget* CharacterHUD;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapons", ReplicatedUsing = OnRep_CurrentWeapon)
	AGR2_ReworkWeapon* CurrentWeapon;

	/** Current weapons of player */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapons", Replicated)
	AGR2_ReworkWeapon* Weapon1;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapons", Replicated)
	AGR2_ReworkWeapon* Weapon2;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapons", Replicated)
	AGR2_ReworkWeapon* Weapon3;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Team")
	TEnumAsByte<ETeam> PlayerTeam;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="UserName")
	FString UserName;
	
	UFUNCTION(BlueprintNativeEvent, Category="Health")
	void OnHealthUpdateUI();
	
	/** Response to health being updated. Called on immediately after modification, and on clients in response to a RepNotify */
	void OnHealthUpdate();
	
	UFUNCTION(Server, Reliable, WithValidation)
	void OnDeathServer();
	bool OnDeathServer_Validate();
	void OnDeathServer_Implementation();

	UFUNCTION()
	static void ServerRestartPlayer(AGR2_ReworkGameMode* GameMode, AController* CurrentController);

	UFUNCTION(BlueprintNativeEvent, Category="Health")
	void OnDeathUpdateUI();
	
	/** RepNotify for changes made to current health.*/
	UFUNCTION()
	void OnRep_CurrentHealth();

	UFUNCTION()
	void OnRep_CurrentWeapon();

	UFUNCTION(BlueprintNativeEvent, Category="Weapon")
	void OnCurrentWeaponSet(AGR2_ReworkWeapon* WeaponToSet);

	UFUNCTION(BlueprintNativeEvent, Category="Weapon")
	void SetWeaponOnSpawn();

	// Setter & Getter
	
	/** Getter for Max Health.*/
	UFUNCTION(BlueprintPure, Category="Health")
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; } 

	/** Getter for Current Health.*/
	UFUNCTION(BlueprintPure, Category="Health")
	FORCEINLINE float GetCurrentHealth() const { return CurrentHealth; }

	/** Setter for Current Health. Clamps the value between 0 and MaxHealth and calls OnHealthUpdate. Should only be called on the server.*/
	UFUNCTION(BlueprintCallable, Category="Health")
	void SetCurrentHealth(float healthValue);
	
	/** Event for taking damage. Overridden from APawn.*/
	UFUNCTION(BlueprintCallable, Category = "Health")
	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
};