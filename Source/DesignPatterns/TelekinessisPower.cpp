// Fill out your copyright notice in the Description page of Project Settings.


#include "TelekinessisPower.h"

// Sets default values for this component's properties
UTelekinessisPower::UTelekinessisPower()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTelekinessisPower::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTelekinessisPower::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTelekinessisPower::Execute()
{
	UE_LOG(LogTemp, Warning, TEXT("Throw Objects At The Enemy"));
}
