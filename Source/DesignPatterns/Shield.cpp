// Fill out your copyright notice in the Description page of Project Settings.


#include "Shield.h"

// Sets default values for this component's properties
UShield::UShield()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UShield::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UShield::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UShield::Upgrade()
{
	Strength += 15;
	UE_LOG(LogTemp, Warning, TEXT("Strenght is: %d"), Strength);
}

