// Copyright Epic Games, Inc. All Rights Reserved.

#include "GR2_ReworkCharacter.h"

#include "GR2_Rework.h"

#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GR2_ReworkGameMode_Map1.h"
#include "GR2_ReworkGameState_Map1.h"
#include "GR2_ReworkPlayerState.h"
#include "TP_WeaponComponent.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

//////////////////////////////////////////////////////////////////////////
// AGR2_ReworkCharacter

AGR2_ReworkCharacter::AGR2_ReworkCharacter()
{
	// Character doesnt have a rifle at start
	bHasRifle = true;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh3P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh3P"));
	Mesh3P->SetupAttachment(GetCapsuleComponent());
	Mesh3P->SetOwnerNoSee(true);
	Mesh3P->bCastDynamicShadow = true;
	Mesh3P->CastShadow = true;
	Mesh3P->SetRelativeRotation(FRotator(0.f,-90.f,0.f));
	Mesh3P->SetRelativeLocation(FVector(0.f, 0.f, -80.f));

	MaxHealth = 100.f;
	CurrentHealth = MaxHealth;
}

void AGR2_ReworkCharacter::BeginPlay()
{
	// Call the base class
	Super::BeginPlay();

	//Add Input Mapping Context
	if (const APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	// UE_LOG(LogTemp, Warning, TEXT("AGR2_ReworkCharacter::BeginPlay"))
	
	if (GetWorld()->GetMapName() == PlayableMaps[0])
	{
		SetWeaponOnSpawn();
	}
}

//////////////////////////////////////////////////////////////////////////// Input

void AGR2_ReworkCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Crouching		
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &AGR2_ReworkCharacter::StartCrouch);
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Completed, this, &AGR2_ReworkCharacter::StopCrouch);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGR2_ReworkCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AGR2_ReworkCharacter::Look);

		//Weapon
		EnhancedInputComponent->BindAction(PrimaryWeaponChooseAction, ETriggerEvent::Triggered, this, &AGR2_ReworkCharacter::OnPrimaryWeaponChoose);
		EnhancedInputComponent->BindAction(SecondaryWeaponChooseAction, ETriggerEvent::Triggered, this, &AGR2_ReworkCharacter::OnSecondaryWeaponChoose);

		// Reload
		EnhancedInputComponent->BindAction(ReloadAction, ETriggerEvent::Triggered, this, &AGR2_ReworkCharacter::OnReloadWeapon);

		// Fire
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &AGR2_ReworkCharacter::StartBurst);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &AGR2_ReworkCharacter::StopBurst);
	}
}

void AGR2_ReworkCharacter::SetCurrentWeapon(AGR2_ReworkWeapon* Weapon)
{
	CurrentWeapon = Weapon;

	// Update HUD on Equip to current weapon
	CurrentWeapon->UpdateAmmoUI();
	CurrentWeapon->UpdateReloadUI();
}

void AGR2_ReworkCharacter::OnHealthUpdateUI_Implementation()
{
	// Implemented in Blueprint
}

void AGR2_ReworkCharacter::OnHealthUpdate()
{	
	if (IsLocallyControlled())
	{
		OnHealthUpdateUI();
		if (CurrentHealth <= 0)
		{
			UE_LOG(LogTemp,Warning, TEXT("Player has been killed"));
			// FString deathMessage = FString::Printf(TEXT("You have been killed."));
			// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, deathMessage);

			OnDeathServer();
			OnDeathUpdateUI();
		}
	}

	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("%s now has %f health remaining."), *GetFName().ToString(), CurrentHealth);
	}	
}

// void AGR2_ReworkCharacter::ServerRestartPlayer(AGR2_ReworkGameMode* GameMode, AController* CurrentController)
// {
// 	GameMode->RestartPlayer(CurrentController);
// }

void AGR2_ReworkCharacter::DestroyWeapons()
{
	if (CurrentWeapon != nullptr)
	{
		// UE_LOG(LogTemp, Warning, TEXT("[DestroyWeaponOnKilled] CurrentWeapon"));
		CurrentWeapon->Destroy();
		CurrentWeapon = nullptr;
	}
	if (Weapon1 != nullptr)
	{
		// UE_LOG(LogTemp, Warning, TEXT("[DestroyWeaponOnKilled] Weapon1"));
		Weapon1->Destroy();
		Weapon1 = nullptr;
	}
	if (Weapon2 != nullptr)
	{
		// UE_LOG(LogTemp, Warning, TEXT("[DestroyWeaponOnKilled] Weapon2"));
		Weapon2->Destroy();
		Weapon2 = nullptr;
	}
	if (Weapon3 != nullptr)
	{
		// UE_LOG(LogTemp, Warning, TEXT("[DestroyWeaponOnKilled] Weapon3"));
		Weapon3->Destroy();
		Weapon3 = nullptr;
	}
}

void AGR2_ReworkCharacter::Server_DestroyWeapons()
{
	DestroyWeapons();
}

void AGR2_ReworkCharacter::Multi_DestroyWeapons_Implementation()
{
	DestroyWeapons();
}

void AGR2_ReworkCharacter::OnDeathServer_Implementation(bool bIsInitialSpawn)
{
	UE_LOG(LogTemp, Warning, TEXT("[Server] Player has been killed"));
	
	AController* CurrentController = GetController();

	if (CurrentController == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Server] Cannot get killed player controller"));
		return;
	}

	// Update Team's Score
	if (GetLocalRole() == ROLE_Authority && !bIsInitialSpawn)
	{
		GetWorld()->GetGameState<AGR2_ReworkGameState_Map1>()->Server_UpdateScore(GetController());
	}

	// Destroy weapon actors
	Server_DestroyWeapons();
	Multi_DestroyWeapons();
	
	// Destroy current player
	Destroy();

	if (const UWorld* World = GetWorld())
	{
		AGR2_ReworkGameMode_Map1* GameMode = Cast<AGR2_ReworkGameMode_Map1>(World->GetAuthGameMode());
		if (bIsInitialSpawn)
		{
			GameMode->RestartPlayer(CurrentController);
		} else
		{
			GameMode->RestartPlayerTimer(CurrentController);
		}
	}
}

void AGR2_ReworkCharacter::OnDeathUpdateUI_Implementation()
{
	// Implemented in Blueprints
}

void AGR2_ReworkCharacter::Client_DisplayChooseTeamWidget_Implementation()
{
	// UE_LOG(LogTemp, Warning, TEXT("[Client] Client_DisplayChooseTeamWidget"))
	
	DisplayChooseTeamWidget();
}

void AGR2_ReworkCharacter::DisplayChooseTeamWidget_Implementation()
{
	// Implemented in Blueprints
}

void AGR2_ReworkCharacter::OnRep_CurrentHealth()
{
	OnHealthUpdate();
}

void AGR2_ReworkCharacter::OnRep_CurrentWeapon()
{
	OnCurrentWeaponSet(CurrentWeapon);
}

void AGR2_ReworkCharacter::SetWeaponOnSpawn_Implementation()
{
	// Implemented in Blueprints
}

void AGR2_ReworkCharacter::SetCurrentHealth(float healthValue)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		CurrentHealth = FMath::Clamp(healthValue, 0.f, MaxHealth);
	}
}

float AGR2_ReworkCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	// UE_LOG(LogTemp, Warning, TEXT("TakeDamage"));
	
	/** Check if hitting allies */
	const ETeam DamageDealerTeam = static_cast<AGR2_ReworkCharacter*>(DamageCauser)->GetPlayerState<AGR2_ReworkPlayerState>()->Team;

	const AGR2_ReworkPlayerState* HitPlayerState = GetPlayerState<AGR2_ReworkPlayerState>();
	if (HitPlayerState == nullptr) { return 0; }
	
	const ETeam HitPlayerTeam = GetPlayerState<AGR2_ReworkPlayerState>()->Team;
	if (DamageDealerTeam == HitPlayerTeam)
	{
		// UE_LOG(LogTemp, Warning, TEXT("Hitting allies"));
		return 0;
	}
	
	SetCurrentHealth(GetCurrentHealth() - DamageAmount);

	LastDamageDealer = static_cast<AGR2_ReworkCharacter*>(DamageCauser);

	SlowDownOnHit();
	
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

void AGR2_ReworkCharacter::SetColor(bool bIsRed)
{
	// BP_SetColor(bIsRed);
	Server_SetColor(bIsRed);
}

void AGR2_ReworkCharacter::BP_SetColor_Implementation(bool bIsRed)
{
	// Implemented in Blueprints
}

void AGR2_ReworkCharacter::Multi_SetColor_Implementation(bool bIsRed)
{
	// if (GetLocalRole() == ROLE_SimulatedProxy)
	// {
	// 	BP_SetColor(bIsRed);
	// }
}

void AGR2_ReworkCharacter::Server_SetColor_Implementation(bool bIsRed)
{
	// Multi_SetColor(bIsRed);
	BP_SetColor(bIsRed);
}

void AGR2_ReworkCharacter::SlowDownOnHit()
{
	MovementSpeedMultiplier = OnHitMovementSpeedMultiplier;

	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_SlowEffectTimer);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_SlowEffectTimer, this, &AGR2_ReworkCharacter::FinishSlowdown, OnHitEffectTime, true);
}

void AGR2_ReworkCharacter::FinishSlowdown()
{
	MovementSpeedMultiplier = 1;
	
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_SlowEffectTimer);
}

void AGR2_ReworkCharacter::Server_PlayFireSound_Implementation(USoundBase* FFireSound)
{
	// UE_LOG(LogTemp, Warning, TEXT("[PlaySoundAt] Call to Server"));
	
	Multi_PlayFireSound(FFireSound);
}

void AGR2_ReworkCharacter::Multi_PlayFireSound_Implementation(USoundBase* FFireSound)
{
	// UE_LOG(LogTemp, Warning, TEXT("[PlaySoundAt] Multicast to Clients"));
	// UE_LOG(LogTemp, Warning, TEXT("[PlaySoundAt] Location: %f, %f, %f"), CurrentWeapon->GetActorLocation().X, CurrentWeapon->GetActorLocation().Y, CurrentWeapon->GetActorLocation().Z);
	if (GetLocalRole() == ROLE_SimulatedProxy)
	{
		// UE_LOG(LogTemp, Warning, TEXT("%s"), *GetName());
		CurrentWeapon->WeaponComponent->WeaponFXHandler->SpawnSoundFXAt(CurrentWeapon->WeaponComponent, FFireSound, CurrentWeapon->GetActorLocation());
	}
}

void AGR2_ReworkCharacter::Server_SpawnMuzzleFlashFX_Implementation()
{
	Multi_SpawnMuzzleFlashFX();
}

void AGR2_ReworkCharacter::Multi_SpawnMuzzleFlashFX_Implementation()
{
	if (GetLocalRole() == ROLE_SimulatedProxy)
	{
		CurrentWeapon->WeaponComponent->WeaponFXHandler->SpawnMuzzleFlashFX(CurrentWeapon->WeaponComponent, CurrentWeapon);
	}
}

void AGR2_ReworkCharacter::Server_SpawnTrailFX_Implementation()
{
	Multi_SpawnTrailFX();
}

void AGR2_ReworkCharacter::Multi_SpawnTrailFX_Implementation()
{
	if (GetLocalRole() == ROLE_SimulatedProxy)
	{
		CurrentWeapon->WeaponComponent->WeaponFXHandler->SpawnTrailFX(CurrentWeapon->WeaponComponent, CurrentWeapon, CurrentWeapon->WeaponComponent->HitResult, CurrentWeapon->WeaponComponent->RayEnd, CurrentWeapon->GetActorRotation());
	}
}

void AGR2_ReworkCharacter::Server_SpawnImpactFX_Implementation()
{
	Multi_SpawnImpactFX();
}

void AGR2_ReworkCharacter::Multi_SpawnImpactFX_Implementation()
{
	if (GetLocalRole() == ROLE_SimulatedProxy)
	{
		CurrentWeapon->WeaponComponent->WeaponFXHandler->SpawnImpactFX(CurrentWeapon->WeaponComponent, CurrentWeapon, CurrentWeapon->WeaponComponent->HitResult);
	}
}

void AGR2_ReworkCharacter::RestartPlayerOnBeginMatch()
{
	// UE_LOG(LogTemp, Warning, TEXT("AGR2_ReworkCharacter::RestartPlayerOnBeginMatch"));
	CharacterHUD->RemoveFromParent();
	OnDeathServer(true);
}

void AGR2_ReworkCharacter::SetPlayerColor(const FString& Color)
{
	// TODO: Change player color based on their team

	UE_LOG(LogTemp, Warning, TEXT("[Character] Change player color based on team"));
	return;
}

void AGR2_ReworkCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
	bIsMoveAble = GetPlayerState<AGR2_ReworkPlayerState>()->Team != None;
}

void AGR2_ReworkCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	const FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr && bIsMoveAble)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y * MovementSpeedMultiplier);
		AddMovementInput(GetActorRightVector(), MovementVector.X * MovementSpeedMultiplier);
	}
}

void AGR2_ReworkCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	const FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr && bIsMoveAble)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X * LOOK_SENSITIVITY);
		AddControllerPitchInput(LookAxisVector.Y * LOOK_SENSITIVITY);
	}
}

void AGR2_ReworkCharacter::StartCrouch()
{
	// UE_LOG(LogTemp, Warning, TEXT("StartCrouch"));
	Crouch();
	bCrouchButtonDown = true;
}

void AGR2_ReworkCharacter::StopCrouch()
{
	// UE_LOG(LogTemp, Warning, TEXT("StopCrouch"));
	UnCrouch();
	bCrouchButtonDown = false;
}

void AGR2_ReworkCharacter::OnPrimaryWeaponChoose()
{
	if (Weapon1 == nullptr) { return; }
	if (CurrentWeapon->WeaponType != Primary && bIsMoveAble)
	{
		OnCurrentWeaponSet(Weapon1);
	}
}

void AGR2_ReworkCharacter::OnSecondaryWeaponChoose()
{
	if (Weapon2 == nullptr) { return; }
	if (CurrentWeapon->WeaponType != Secondary && bIsMoveAble)
	{
		OnCurrentWeaponSet(Weapon2);
	}
}

void AGR2_ReworkCharacter::StartBurst()
{
	if (CurrentWeapon != nullptr && bIsMoveAble)
	{
		CurrentWeapon->StartBurst();
	}
}

void AGR2_ReworkCharacter::StopBurst()
{
	if (CurrentWeapon != nullptr)
	{
		CurrentWeapon->StopBurst();
	}
}

void AGR2_ReworkCharacter::OnReloadWeapon()
{
	if (CurrentWeapon != nullptr && bIsMoveAble)
	{
		CurrentWeapon->ReloadWeapon();
	}
}

void AGR2_ReworkCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate these things
	DOREPLIFETIME(AGR2_ReworkCharacter, Mesh3P);
	DOREPLIFETIME(AGR2_ReworkCharacter, CurrentHealth);
	DOREPLIFETIME(AGR2_ReworkCharacter, CurrentWeapon);
	DOREPLIFETIME(AGR2_ReworkCharacter, Weapon1);
	DOREPLIFETIME(AGR2_ReworkCharacter, Weapon2);
	DOREPLIFETIME(AGR2_ReworkCharacter, Weapon3);
}

void AGR2_ReworkCharacter::SetHasRifle(bool bNewHasRifle)
{
	bHasRifle = bNewHasRifle;
}

bool AGR2_ReworkCharacter::GetHasRifle()
{
	return bHasRifle;
}

void AGR2_ReworkCharacter::DealDamage(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser)
{
	Server_OnDealDamage(HitResult, Damage, HitFrom, DamageCauser);
}

bool AGR2_ReworkCharacter::Server_OnDealDamage_Validate(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser)
{
	return true;
}

void AGR2_ReworkCharacter::Server_OnDealDamage_Implementation(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser)
{	
	UGameplayStatics::ApplyPointDamage(HitResult.GetActor(), Damage, HitFrom, HitResult, DamageCauser->GetController(), DamageCauser, UDamageType::StaticClass());
}

void AGR2_ReworkCharacter::OnCurrentWeaponSet_Implementation(AGR2_ReworkWeapon* WeaponToSet)
{
	//TODO: Change current Weapon and visibility
	if (CurrentWeapon != nullptr)
	{
		CurrentWeapon->SetVisibility(false);
		StopBurst();
		SetCurrentWeapon(WeaponToSet);
		CurrentWeapon->SetVisibility(true);
		CurrentWeapon->UpdateAmmoUI();
	} else
	{
#if PLATFORM_WINDOWS
		LOG("[Character][OnCurrentWeaponSet] Null CurrentWeapon");
#endif
	}
}
