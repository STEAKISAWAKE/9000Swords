// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Engine/StaticMesh.h>

enum class MaterialSlot { Main, Deco, Energy };

struct MaterialSet {

	FString MaterialName;
	MaterialSlot MaterialType;
	FString MaterialUniqueShortName;
	FLinearColor BaseColor;
	float RoughnessBias;
	float MetalicValue;
	float EmissivePower;

};

struct MaterialParameterNames {
	FName BaseColor_ParamName;
	FName RoughnessBias_ParamName;
	FName Metallic_ParamName;
	FName EmissivePower_ParamName;
};

struct WeaponPart {

	FString WeaponTypeName;
	FString PartPrefix;
	TArray<UStaticMesh*> StaticMeshes;
	bool Optional;

};

struct WeaponType {
	FString WeaponTypeName = "sword";
	TArray<MaterialSlot> MaterialSlotTypes;
	TArray<MaterialParameterNames> MaterialSlotParameterNames;

};