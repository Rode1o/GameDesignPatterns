// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUp.h"
#include "VisitorElement.h"
#include "Fireball.h"
#include "Shield.h"

// Sets default values for this component's properties
UPowerUp::UPowerUp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPowerUp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPowerUp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPowerUp::Visit(IVisitorElement* Element)
{
	if (Cast<UFireball>(Element))
	{
		Cast<UFireball>(Element)->Upgrade();
	}

	if (Cast<UShield>(Element))
	{
		Cast<UShield>(Element)->Upgrade();
	}
}

