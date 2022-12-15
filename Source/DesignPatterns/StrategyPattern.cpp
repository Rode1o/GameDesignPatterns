// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyPattern.h"

#include "FreezePower.h"
#include "SlowTimePower.h"
#include "TelekinessisPower.h"

#include "DelayedDecorator.h"

// Sets default values
AStrategyPattern::AStrategyPattern()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FreezePower = CreateDefaultSubobject<UFreezePower>(TEXT("Freeze Power Component"));
	SlowTimePower = CreateDefaultSubobject<USlowTimePower>(TEXT("Slow Time Power Component"));
	TelekinessisPower = CreateDefaultSubobject<UTelekinessisPower>(TEXT("Telekinessis Power Component"));

	DelayedPower = CreateDefaultSubobject<UDelayedDecorator>(TEXT("Delayed Power Component"));
}

// Called when the game starts or when spawned
void AStrategyPattern::BeginPlay()
{
	Super::BeginPlay();
	
	DelayedPower->SetPower(SlowTimePower);
}

// Called every frame
void AStrategyPattern::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStrategyPattern::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Use Power", IE_Pressed, this, &AStrategyPattern::ExecutePower);

}

void AStrategyPattern::ExecutePower()
{
	//FreezePower->Execute();
	//SlowTimePower->Execute();
	//TelekinessisPower->Execute();
	DelayedPower->Execute();
}

