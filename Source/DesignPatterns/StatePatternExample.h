// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "EnemyStateTest.h"

#include "StatePatternExample.generated.h"

UCLASS()
class DESIGNPATTERNS_API AStatePatternExample : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStatePatternExample();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite)
		EnemyStateTest EnemyState = EnemyStateTest::PATROL;

	FVector TargetLocation;
	
	float ChaseDistance;
	float AttackDistance;

	void Patrol();
	void Chase();
	void Attack();

};
