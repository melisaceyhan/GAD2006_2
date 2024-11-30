// Fill out your copyright notice in the Description page of Project Settings.


#include "AGameSlot.h"

// Sets default values
AAGameSlot::AAGameSlot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAGameSlot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAGameSlot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

