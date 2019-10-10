// Fill out your copyright notice in the Description page of Project Settings.


#include "CSpineboy.h"
#include "SpineSkeletonAnimationComponent.h"
#include "SpineSkeletonRendererComponent.h"

// Sets default values
ACSpineboy::ACSpineboy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACSpineboy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACSpineboy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACSpineboy::StopSpineTick()
{
	SetActorEnableCollision(false);

	FindComponentByClass<USpineSkeletonAnimationComponent>()->SetComponentTickEnabled(false);
	FindComponentByClass<USpineSkeletonRendererComponent>()->SetComponentTickEnabled(false);
}

void ACSpineboy::StartSpineTick()
{
	SetActorEnableCollision(true);

	FindComponentByClass<USpineSkeletonAnimationComponent>()->SetComponentTickEnabled(true);
	FindComponentByClass<USpineSkeletonRendererComponent>()->SetComponentTickEnabled(true);
}

