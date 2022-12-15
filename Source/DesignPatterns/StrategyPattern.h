// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "StrategyPattern.generated.h"

UCLASS()
class DESIGNPATTERNS_API AStrategyPattern : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AStrategyPattern();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ExecutePower();

	class UFreezePower* FreezePower;
	class USlowTimePower* SlowTimePower;
	class UTelekinessisPower* TelekinessisPower;

	class UDelayedDecorator* DelayedPower;

};
