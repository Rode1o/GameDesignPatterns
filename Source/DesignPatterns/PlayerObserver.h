// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerObserver.generated.h"

UCLASS()
class DESIGNPATTERNS_API APlayerObserver : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerObserver();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// functions that respond to broadcasts
	// NEED to be UFUNCTION()
	UFUNCTION()
	void OnEnemyDied(FString message);
	
};
