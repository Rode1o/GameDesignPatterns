// Fill out your copyright notice in the Description page of Project Settings.


#include "SingletonTest.h"

#include "Kismet/GameplayStatics.h"
#include "MyGameInstance.h"

// Sets default values
ASingletonTest::ASingletonTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASingletonTest::BeginPlay()
{
	Super::BeginPlay();
	
	FTimerHandle timerHandler;
	GetWorld()->GetTimerManager().SetTimer(timerHandler, this, 
		&ASingletonTest::GetGameInstanceAndPrintMessage,
		4.0f, false);

}

// Called every frame
void ASingletonTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASingletonTest::GetGameInstanceAndPrintMessage()
{
	CustomGameInstace = 
		Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	CustomGameInstace->messageForPrinting = "Printed From Singleton Test";
	CustomGameInstace->PrintFromCPP();
}

