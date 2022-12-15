// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePatternExample.h"

// Sets default values
AStatePatternExample::AStatePatternExample()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStatePatternExample::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStatePatternExample::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (EnemyState)
	{
	case EnemyStateTest::PATROL:
		Patrol();
		break;

	case EnemyStateTest::CHASE:
		Chase();
		break;
	
	case EnemyStateTest::ATTACK:
		Attack();
		break;
	}

}

void AStatePatternExample::Patrol()
{
	if (FVector::Dist(TargetLocation, GetActorLocation()) > ChaseDistance)
	{
		// patrol
	}
	else
	{
		EnemyState = EnemyStateTest::CHASE;
	}
}

void AStatePatternExample::Chase()
{
	if (FVector::Dist(TargetLocation, GetActorLocation()) <= ChaseDistance
		&& FVector::Dist(TargetLocation, GetActorLocation()) > AttackDistance)
	{
		// chase player
	}
	else if(FVector::Dist(TargetLocation, GetActorLocation()) < AttackDistance)
	{
		EnemyState = EnemyStateTest::ATTACK;
	}
	else
	{
		EnemyState = EnemyStateTest::PATROL;
	}
}

void AStatePatternExample::Attack()
{
	if (FVector::Dist(TargetLocation, GetActorLocation()) < AttackDistance)
	{
		// attack
	}
	else
	{
		EnemyState = EnemyStateTest::CHASE;
	}
}

