// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ModularWeaponData.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

#include "ModularWeaponItem.generated.h"

/**
 * 
 */



UCLASS()
class MAGINVOX_API AModularWeaponItem : public AActor
{
	GENERATED_BODY()

	
	
public:
	AModularWeaponItem();

	UFUNCTION(BlueprintCallable, Category = "ModWeapons")
	bool Initalize();
	UFUNCTION(BlueprintCallable, Category = "ModWeapons")
	bool ParseWeaponCodeAndCreateWeapon();
	UFUNCTION(BlueprintCallable, Category = "ModWeapons")
	void RandomizeWeaponCode();
	UFUNCTION(BlueprintCallable, Category = "ModWeapons")
	bool UpdateMaterials();
	UFUNCTION(BlueprintCallable, Category = "ModWeapons")
	void OnRepWeaponCode();
	
	//Modular Weapon
	UPROPERTY(EditAnywhere)
	FString WeaponCode = "sword:b0_g1_h2_p4:iron_steel_bndg_dark";
	UPROPERTY(EditAnywhere)
	bool GenerateRandomWeapon = true;
	UPROPERTY(EditAnywhere)
	bool GenerateOnActorConstruction = true;
	UPROPERTY(EditAnywhere)
	float RandomGenerationOptionalPartsWeight = 1.0f;
	UPROPERTY(EditAnywhere)
		bool RandomizeType = true;
	UPROPERTY(EditAnywhere)
		bool RandomizeParts = true;
	UPROPERTY(EditAnywhere)
	bool RandomizeMaterials = true;

private:
	USceneComponent* Scene;
	TArray<UStaticMeshComponent*> WeaponMeshComponents;
	TArray<MaterialSet> MaterialParameterPresets;

	bool WeaponLocalSet = false;

	void Randomize();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	

};
