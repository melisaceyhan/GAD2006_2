// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NetBaseCharacter.h"
#include "Camera/Cameracomponent.h"
#include "Gameframework/SpringArmComponent.h"
#include "NetAvatar.generated.h"

/**
 *
 */
UCLASS()
class ANetAvatar : public ANetBaseCharacter
{
	GENERATED_BODY()

public:

	ANetAvatar();

	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_UpdateMovementParams)
	bool bHoldingRunKey;

	UPROPERTY(BlueprintReadWrite)
	float MovementScale;

	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	UFUNCTION(Server, Reliable)
	void ServerStartRunning();

	UFUNCTION(Server, Reliable)
	void ServerStopRunning();

private:
	UFUNCTION()
	void OnRep_UpdateMovementParams();

	void MoveForward(float Amount);
	void MoveRight(float Amount);
	void RunPressed();
	void RunReleased();

};