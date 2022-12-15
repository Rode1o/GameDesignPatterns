// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "EnemyState.h"

#include "AttackState.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UAttackState : public UObject, public IEnemyState
{
	GENERATED_BODY()

public:
	void Handle(class AEnemyBehavior* EnemyBehavior);

};
