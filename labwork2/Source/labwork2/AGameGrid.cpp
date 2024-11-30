// Fill out your copyright notice in the Description page of Project Settings.


#include "AGameGrid.h"

// Sets default values
AAGameGrid::AAGameGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAGameGrid::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAGameGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

