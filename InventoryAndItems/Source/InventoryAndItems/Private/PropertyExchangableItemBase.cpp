// Fill out your copyright notice in the Description page of Project Settings.

#include "PropertyExchangableItemBase.h"

// Sets default values
APropertyExchangableItemBase::APropertyExchangableItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//	Create the inventory item component
	InventoryItem = CreateDefaultSubobject<UInventoryItemComponent>(FName("InventoryItemComponent"));
}

// Called when the game starts or when spawned
void APropertyExchangableItemBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APropertyExchangableItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

