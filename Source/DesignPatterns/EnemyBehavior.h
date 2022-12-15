// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyBehavior.generated.h"

UCLASS()
class DESIGNPATTERNS_API AEnemyBehavior : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyBehavior();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AEnemy> EnemyBP;

	class AEnemy* Enemy;

	class UPatrolState* PatrolState;
	class UChaseState* ChaseState;
	class UAttackState* AttackState;

};
