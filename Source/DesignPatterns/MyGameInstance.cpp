// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"


void UMyGameInstance::PrintFromCPP()
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *messageForPrinting);
}






