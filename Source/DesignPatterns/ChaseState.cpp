// Fill out your copyright notice in the Description page of Project Settings.


#include "ChaseState.h"

#include "EnemyBehavior.h"
#include "Enemy.h"

void UChaseState::Handle(AEnemyBehavior* EnemyBehavior)
{
	// handle patrol of the enemy
	UE_LOG(LogTemp, Warning, TEXT("Enemy Chasing"));
}
