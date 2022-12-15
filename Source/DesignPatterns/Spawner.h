// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Bullet.h"

#include "Spawner.generated.h"

UCLASS()
class DESIGNPATTERNS_API ASpawner : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABullet> Bullet;

	TArray<class ABullet*> BulletPool;

	void ShootBullet();

	bool BulletSpawned;

	FVector SpawnLoc;

};
