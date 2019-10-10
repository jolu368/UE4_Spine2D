// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSpineboy.generated.h"

UCLASS()
class SPINETEST_API ACSpineboy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACSpineboy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "CullingMode")
		void StopSpineTick();

	UFUNCTION(BlueprintCallable, Category = "CullingMode")
		void StartSpineTick();
};
