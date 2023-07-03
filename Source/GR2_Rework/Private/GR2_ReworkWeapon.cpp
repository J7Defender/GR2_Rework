// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkWeapon.h"
#include "GR2_Rework/TP_WeaponComponent.h"

// Sets default values
AGR2_ReworkWeapon::AGR2_ReworkWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
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

void AGR2_ReworkWeapon::StartBurst_Implementation()
{
	WeaponComponent->StartBurst();
}

void AGR2_ReworkWeapon::StopBurst_Implementation()
{
	WeaponComponent->StopBurst();
}

void AGR2_ReworkWeapon::SetVisibility_Implementation(bool visibility)
{
	WeaponComponent->SetVisibility(visibility);
}

