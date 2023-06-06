// Copyright Epic Games, Inc. All Rights Reserved.

#include "GR2_ReworkCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"


//////////////////////////////////////////////////////////////////////////
// AGR2_ReworkCharacter

AGR2_ReworkCharacter::AGR2_ReworkCharacter()
{
	// Character doesnt have a rifle at start
	bHasRifle = false;
	
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
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

//////////////////////////////////////////////////////////////////////////// Input

void AGR2_ReworkCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Crouching		
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &AGR2_ReworkCharacter::StartCrouch);
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Completed, this, &AGR2_ReworkCharacter::StopCrouch);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGR2_ReworkCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AGR2_ReworkCharacter::Look);
	}
}

void AGR2_ReworkCharacter::OnHealthUpdate_Implementation()
{	
	if (IsLocallyControlled())
	{
		UE_LOG(LogTemp, Warning, TEXT("Player has %f health remaining"), CurrentHealth);
		FString healthMessage = FString::Printf(TEXT("You now have %f health remaining."), CurrentHealth);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, healthMessage);
		if (CurrentHealth <= 0)
		{
			UE_LOG(LogTemp,Warning, TEXT("Player has been killed"));
			FString deathMessage = FString::Printf(TEXT("You have been killed."));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, deathMessage);
		}
	}

	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("%s now has %f health remaining."), *GetFName().ToString(), CurrentHealth);
	}	
}

void AGR2_ReworkCharacter::OnRep_CurrentHealth()
{
	OnHealthUpdate();
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
	UE_LOG(LogTemp, Warning, TEXT("TakeDamage"));

	SetCurrentHealth(GetCurrentHealth() - DamageAmount);
	
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

void AGR2_ReworkCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void AGR2_ReworkCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AGR2_ReworkCharacter::StartCrouch()
{
	UE_LOG(LogTemp, Warning, TEXT("StartCrouch"));
	Crouch();
}

void AGR2_ReworkCharacter::StopCrouch()
{
	UE_LOG(LogTemp, Warning, TEXT("StopCrouch"));
	UnCrouch();
}

void AGR2_ReworkCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate these things
	DOREPLIFETIME(AGR2_ReworkCharacter, Mesh3P);
	DOREPLIFETIME(AGR2_ReworkCharacter, CurrentHealth);
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
	UE_LOG(LogTemp, Warning, TEXT("Call to Deal Damage Character"));
	
	Server_OnDealDamage(HitResult, Damage, HitFrom, DamageCauser);
}

bool AGR2_ReworkCharacter::Server_OnDealDamage_Validate(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser)
{
	return true;
}

void AGR2_ReworkCharacter::Server_OnDealDamage_Implementation(FHitResult HitResult, int Damage, FVector HitFrom, AGR2_ReworkCharacter* DamageCauser)
{
	UE_LOG(LogTemp, Warning, TEXT("Server Deal Damage from Character"));

	UGameplayStatics::ApplyPointDamage(HitResult.GetActor(), Damage, HitFrom, HitResult, DamageCauser->GetController(), DamageCauser, UDamageType::StaticClass());
}
