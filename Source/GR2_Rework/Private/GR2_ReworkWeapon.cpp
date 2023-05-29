// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkWeapon.h"

// Sets default values
AGR2_ReworkWeapon::AGR2_ReworkWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMesh"));
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