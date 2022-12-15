// Fill out your copyright notice in the Description page of Project Settings.


#include "VisitorPattern.h"

#include "Shield.h"
#include "Fireball.h"
#include "PowerUp.h"

// Sets default values
AVisitorPattern::AVisitorPattern()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PowerUp = CreateDefaultSubobject<UPowerUp>(TEXT("Power Up Component"));
	Shield = CreateDefaultSubobject<UShield>(TEXT("Shield Component"));
	Fireball = CreateDefaultSubobject<UFireball>(TEXT("Fireball Component"));
}

// Called when the game starts or when spawned
void AVisitorPattern::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVisitorPattern::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVisitorPattern::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Use Power", IE_Pressed, this, &AVisitorPattern::UpgradePower);
}

void AVisitorPattern::UpgradePower()
{
	if (FMath::RandBool() == true)
	{
		PowerUp->Visit(Fireball);
	}
	else
	{
		PowerUp->Visit(Shield);
	}
}

