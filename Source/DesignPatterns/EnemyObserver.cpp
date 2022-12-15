// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyObserver.h"

// Sets default values
AEnemyObserver::AEnemyObserver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyObserver::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle timerHandler;
	GetWorld()->GetTimerManager().SetTimer(timerHandler, this,
		&AEnemyObserver::CallEnemyDiedDispatcher,
		Timer, false);
}

void AEnemyObserver::CallEnemyDiedDispatcher()
{
	// if someone has subscribed to the dispatcher
	EnemyDied.Broadcast(MessageForPrinting);
}

// Called every frame
void AEnemyObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

