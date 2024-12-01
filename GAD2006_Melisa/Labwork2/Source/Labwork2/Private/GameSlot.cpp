// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSlot.h"
#include "TBPLayerController.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "UnitBase.h"

// Sets default values
AGameSlot::AGameSlot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box -> SetupAttachment(RootComponent);
	Box -> SetBoxExtent(FVector(50,50,2));
	Box -> SetCollisionResponseToAllChannels(ECR_Block); // Blocks everything

	// We directly import the shape as a static mesh, not a component.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DefaultSlothMesh(TEXT("/Engine/BasicShapes/Plane"));

	Plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
	Plane -> SetupAttachment(RootComponent);
	Plane -> SetStaticMesh(DefaultSlothMesh.Object);
}

void AGameSlot::SetState(EGridState NewState) /* Always took an error that told me "you can't use ConstructorHelper outside of constructor.
												So, I commented this part. But I wrote the assignment code according to this,
												so if somehow I can make ConstructorHelpers happen, the existing code will still work.
												*/
{
	/* 
	GridState = NewState;

	
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>
		DefaultSlotMaterial(TEXT("/Script/Engine.Material'/Game/Materials/MAT_GridSlot.MAT_GridSlot'")); 
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>
		DefaultSlotMaterial_H(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Materials/MAT_GridSlot_Highlighted.MAT_GridSlot_Highlighted'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>
		DefaultSlotMaterial_O(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Materials/MAT_GridSlot_Offensive.MAT_GridSlot_Offensive'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>
		DefaultSlotMaterial_S(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Materials/MAT_GridSlot_Supportive.MAT_GridSlot_Supportive'"));

	switch (NewState)
	{
		case GS_Default:
			Plane -> SetMaterial(0, DefaultSlotMaterial.Object);
			break;
		case GS_Highlighted:
			Plane -> SetMaterial(0, DefaultSlotMaterial_H.Object);
			break;
		case GS_Offensive:
			Plane -> SetMaterial(0, DefaultSlotMaterial_O.Object);
			break;
		case GS_Supportive:
			Plane -> SetMaterial(0, DefaultSlotMaterial_S.Object);
			break;
	}
	*/
}

void AGameSlot::SpawnUnitHere(TSubclassOf<AUnitBase> UnitClass)
{
	FVector Location = GetActorLocation();
	AUnitBase* NewUnit = Cast<AUnitBase>(GWorld -> SpawnActor(UnitClass, &Location));
	if(NewUnit) NewUnit -> AssignToSlot(this);
}


// Called when the game starts or when spawned
void AGameSlot::BeginPlay()
{
	Super::BeginPlay();
	OnClicked.AddUniqueDynamic(this, &AGameSlot::OnGridClicked);
}

void AGameSlot::OnGridClicked(AActor* TouchedActor, FKey ButtonPressed)
{
	if(auto PlayerController = GWorld -> GetFirstPlayerController<ATBPLayerController>())
	{
		PlayerController -> OnActorClicked(this, ButtonPressed);
	}
}

// Called every frame
void AGameSlot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

