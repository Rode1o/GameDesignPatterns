// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolState.h"

#include "EnemyBehavior.h"
#include "Enemy.h"


void UPatrolState::Handle(AEnemyBehavior* EnemyBehavior)
{
	// handle patrol of the enemy
	UE_LOG(LogTemp, Warning, TEXT("Enemy Patroling"));
}


