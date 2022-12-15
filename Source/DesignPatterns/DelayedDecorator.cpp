// Fill out your copyright notice in the Description page of Project Settings.


#include "DelayedDecorator.h"
#include "FreezePower.h"
#include "SlowTimePower.h"
#include "TelekinessisPower.h"

// Sets default values for this component's properties
UDelayedDecorator::UDelayedDecorator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDelayedDecorator::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDelayedDecorator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDelayedDecorator::SetPower(IPower* CurrentPower)
{
	//reset powers
	FreezePower = NULL;
	SlowTimePower = NULL;
	TelekinessisPower = NULL;

	FreezePower = Cast<UFreezePower>(CurrentPower);
	SlowTimePower = Cast<USlowTimePower>(CurrentPower);
	TelekinessisPower = Cast<UTelekinessisPower>(CurrentPower);
}

void UDelayedDecorator::Execute()
{
	UE_LOG(LogTemp, Warning, TEXT("Delaying The Power First"));
	
	if (FreezePower)
	{
		FreezePower->Execute();
	}

	if (SlowTimePower)
	{
		SlowTimePower->Execute();
	}

	if (TelekinessisPower)
	{
		TelekinessisPower->Execute();
	}

}

