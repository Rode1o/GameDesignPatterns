// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VisitorPattern.generated.h"

UCLASS()
class DESIGNPATTERNS_API AVisitorPattern : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVisitorPattern();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	class UPowerUp* PowerUp;
	class UFireball* Fireball;
	class UShield* Shield;

	void UpgradePower();

};
