// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackState.h"

#include "EnemyBehavior.h"
#include "Enemy.h"

void UAttackState::Handle(AEnemyBehavior* EnemyBehavior)
{
	// handle patrol of the enemy
	UE_LOG(LogTemp, Warning, TEXT("Enemy Attacking"));
}


