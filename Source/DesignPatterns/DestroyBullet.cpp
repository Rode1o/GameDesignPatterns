// Fill out your copyright notice in the Description page of Project Settings.


#include "DestroyBullet.h"
#include "Components/BoxComponent.h"

// Sets default values
ADestroyBullet::ADestroyBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = BoxCollision;
}

// Called when the game starts or when spawned
void ADestroyBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADestroyBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

