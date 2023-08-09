// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "../WeaponManager/Weapon/GR2_ReworkWeapon.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "GR2_ReworkCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;

UCLASS(config=Game)
class AGR2_ReworkCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AGR2_ReworkCharacter();
	
	virtual void BeginPlay() override;

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** Pawn mesh: 3rd person view */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category=Mesh, Replicated)
	USkeletalMeshComponent* Mesh3P;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;
	
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	// ----------------------------------------------------------------
	// Actions

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* CrouchAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;
		
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

	// ----------------------------------------------------------------
	// Basic Controls
	
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for crouch action*/
	void StartCrouch();

	/** Called for stop crouch action*/
	void StopCrouch();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	bool bIsMoveAble = false;
	// TODO: Change bIsMoveAble to false to prevent players from moving while choosing team

	/** Bool for Animation to know when holding gun */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon)
	bool bHasRifle;

	// ----------------------------------------------------------------
	// Movement Affect
	
	float MovementSpeedMultiplier = 1.0f;
	
	FTimerHandle TimerHandle_SlowEffectTimer;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	float OnHitMovementSpeedMultiplier;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	float OnHitEffectTime;

	void FinishSlowdown();
	void SlowDownOnHit();

	// ----------------------------------------------------------------
	// Damage Dealt
	
	void DealDamage(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_OnDealDamage(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser);
	bool Server_OnDealDamage_Validate(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser);
	void Server_OnDealDamage_Implementation(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser);
	
	/** Event for taking damage. Overridden from APawn.*/
	UFUNCTION(BlueprintCallable, Category = "Health")
	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Damage")
	AGR2_ReworkCharacter* LastDamageDealer;

	// ----------------------------------------------------------------
	// Effects Handlers

	UFUNCTION(Server, Unreliable)
	void Server_PlayFireSound(USoundBase* FFireSound);

	UFUNCTION(NetMulticast, Unreliable)
	void Multi_PlayFireSound(USoundBase* FFireSound);

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

	//----------------------------------------------------------------
	// Weapons and Weapon Actions

	void OnPrimaryWeaponChoose();
	void OnSecondaryWeaponChoose();
	void StartBurst();
	void StopBurst();

	void OnReloadWeapon();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapons", ReplicatedUsing = OnRep_CurrentWeapon)
	AGR2_ReworkWeapon* CurrentWeapon;

	/** Current weapons of player */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapons", Replicated)
	AGR2_ReworkWeapon* Weapon1;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapons", Replicated)
	AGR2_ReworkWeapon* Weapon2;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Weapons", Replicated)
	AGR2_ReworkWeapon* Weapon3;
	
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

	UFUNCTION(BlueprintNativeEvent, Category="Weapon")
	void OnCurrentWeaponSet(AGR2_ReworkWeapon* WeaponToSet);

	UFUNCTION(BlueprintNativeEvent, Category="Weapon")
	void SetWeaponOnSpawn();
	
	void Server_DestroyWeapons();
	void DestroyWeapons();

	UFUNCTION(NetMulticast, Reliable, Category="Weapons")
	void Multi_DestroyWeapons();

	//----------------------------------------------------------------
	// Health Management

	/** The player's maximum health. This is the highest value of their health can be. This value is a value of the player's health, which starts at when spawned.*/
	UPROPERTY(EditDefaultsOnly, Category = "Health")
	float MaxHealth = 100;

	/** The player's current health. When reduced to 0, they are considered dead.*/
	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth)
	float CurrentHealth;
	
	UFUNCTION(BlueprintNativeEvent, Category="Health")
	void OnHealthUpdateUI();
	
	/** Response to health being updated. Called on immediately after modification, and on clients in response to a RepNotify */
	void OnHealthUpdate();
	
	UFUNCTION(Server, Reliable)
	void OnDeathServer(bool bIsInitialSpawn = false);

	UFUNCTION(BlueprintNativeEvent, Category="Health")
	void OnDeathUpdateUI();
	
	/** RepNotify for changes made to current health.*/
	UFUNCTION()
	void OnRep_CurrentHealth();

	UFUNCTION()
	void OnRep_CurrentWeapon();
	
	/** Getter for Max Health.*/
	UFUNCTION(BlueprintPure, Category="Health")
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; } 

	/** Getter for Current Health.*/
	UFUNCTION(BlueprintPure, Category="Health")
	FORCEINLINE float GetCurrentHealth() const { return CurrentHealth; }

	/** Setter for Current Health. Clamps the value between 0 and MaxHealth and calls OnHealthUpdate. Should only be called on the server.*/
	UFUNCTION(BlueprintCallable, Category="Health")
	void SetCurrentHealth(float healthValue);

	//----------------------------------------------------------------
	// Relevant Variables

	/** Character Blueprint (self) */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Blueprint")
	AGR2_ReworkCharacter* CharacterBlueprint;

	/** Character HUD */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "HUD")
	UUserWidget* CharacterHUD;

	//----------------------------------------------------------------
	// HUD Showing

	UFUNCTION(Client, Reliable, Category="Team")
	void Client_DisplayChooseTeamWidget();

	UFUNCTION(BlueprintNativeEvent, Category="Team")
	void DisplayChooseTeamWidget();

	//----------------------------------------------------------------
	// Replication

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;

	//----------------------------------------------------------------
	// PlayerStates and Miscs

	UFUNCTION(BlueprintCallable, Category="Restart")
	void RestartPlayerOnBeginMatch();

	UFUNCTION()
	void SetPlayerColor(const FString& Color);

	virtual void OnRep_PlayerState() override;
};