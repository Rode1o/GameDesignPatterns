// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "VisitorElement.h"

#include "Fireball.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DESIGNPATTERNS_API UFireball : public UActorComponent, public IVisitorElement
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFireball();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	int32 DamageAmount;

	void Upgrade();
		
};
