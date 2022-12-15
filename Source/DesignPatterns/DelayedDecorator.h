// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "Power.h"

#include "DelayedDecorator.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DESIGNPATTERNS_API UDelayedDecorator : public UActorComponent, public IPower
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDelayedDecorator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetPower(IPower* CurrentPower);

	class UFreezePower* FreezePower;
	class USlowTimePower* SlowTimePower;
	class UTelekinessisPower* TelekinessisPower;

	void Execute();
};
