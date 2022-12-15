// Fill out your copyright notice in the Description page of Project Settings.


#include "Fireball.h"

// Sets default values for this component's properties
UFireball::UFireball()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFireball::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFireball::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UFireball::Upgrade()
{
	DamageAmount += 10;
	UE_LOG(LogTemp, Warning, TEXT("Damage Amount is: %d"), DamageAmount);
}

