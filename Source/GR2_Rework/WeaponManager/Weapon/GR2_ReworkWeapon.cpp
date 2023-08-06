// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkWeapon.h"

#include "../Components/TP_WeaponComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AGR2_ReworkWeapon::AGR2_ReworkWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

AGR2_ReworkWeapon::~AGR2_ReworkWeapon()
{
}

void AGR2_ReworkWeapon::UpdateReloadUI_Implementation()
{
	// Implemented in Blueprint
}

// Called when the game starts or when spawned
void AGR2_ReworkWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGR2_ReworkWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AGR2_ReworkWeapon::FinishReloading()
{
	UE_LOG(LogTemp, Warning, TEXT("AGR2_ReworkWeapon::FinishReloading"));
	bIsReloading = false;
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_HandleReload);

	// Update HUD after reload
	UpdateAmmoUI();
	UpdateReloadUI();
}

void AGR2_ReworkWeapon::ReloadWeapon_Implementation()
{
	if (bIsReloading == false)
	{
		if (CurrentAmmo == ClipMaxAmmo || RemainingAmmo == 0)
		{
			return;
		}
		
		bIsReloading = true;
		
		const int AvailableAmmoToLoad = FMath::Min(ClipMaxAmmo, RemainingAmmo);

		UE_LOG(LogTemp, Warning, TEXT("Current Ammo: %d"), CurrentAmmo);
		UE_LOG(LogTemp, Warning, TEXT("Available Ammo To Load: %d"), AvailableAmmoToLoad);

		int AmmoToLoad;
		
		if (AvailableAmmoToLoad < ClipMaxAmmo)
		{
			AmmoToLoad = FMath::Min(ClipMaxAmmo - CurrentAmmo, AvailableAmmoToLoad);
			CurrentAmmo += AmmoToLoad;
			RemainingAmmo -= AmmoToLoad;
		} else
		{
			AmmoToLoad = AvailableAmmoToLoad - CurrentAmmo;
			CurrentAmmo = AvailableAmmoToLoad;
			RemainingAmmo -= AmmoToLoad;
		}
		UE_LOG(LogTemp, Warning, TEXT("Ammo After Load: %d"), CurrentAmmo);
		UE_LOG(LogTemp, Warning, TEXT("Ammo To Load: %d"), AmmoToLoad);
		UE_LOG(LogTemp, Warning, TEXT("Remaining Ammo: %d"), RemainingAmmo);

		UpdateReloadUI();

		GetWorld()->GetTimerManager().SetTimer(TimerHandle_HandleReload, this, &AGR2_ReworkWeapon::FinishReloading, ReloadTime, true);
	}
}

void AGR2_ReworkWeapon::StartBurst_Implementation()
{
	WeaponComponent->StartBurst();
}

void AGR2_ReworkWeapon::StopBurst_Implementation()
{
	WeaponComponent->StopBurst();
}

void AGR2_ReworkWeapon::SetVisibility_Implementation(bool bVisibility)
{
	WeaponComponent->SetVisibility(bVisibility);
}

void AGR2_ReworkWeapon::OnRep_CurrentAmmoChanged()
{
	UpdateAmmoUI();
}

void AGR2_ReworkWeapon::OnRep_RemainingAmmoChanged()
{
	UpdateAmmoUI();
}

void AGR2_ReworkWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate these things
	DOREPLIFETIME(AGR2_ReworkWeapon, CurrentAmmo);
	DOREPLIFETIME(AGR2_ReworkWeapon, RemainingAmmo);
}