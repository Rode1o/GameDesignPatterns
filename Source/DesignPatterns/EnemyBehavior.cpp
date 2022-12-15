// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBehavior.h"

#include "Enemy.h"
#include "PatrolState.h"
#include "ChaseState.h"
#include "AttackState.h"

// Sets default values
AEnemyBehavior::AEnemyBehavior()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyBehavior::BeginPlay()
{
	Super::BeginPlay();
	
	Enemy = 
		GetWorld()->SpawnActor<AEnemy>(EnemyBP, GetActorLocation(), GetActorRotation());

	PatrolState = NewObject<UPatrolState>(UPatrolState::StaticClass());
	ChaseState = NewObject<UChaseState>(UChaseState::StaticClass());
	AttackState = NewObject<UAttackState>(UAttackState::StaticClass());

	PatrolState->Handle(this);
	ChaseState->Handle(this);
	AttackState->Handle(this);

}

// Called every frame
void AEnemyBehavior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

