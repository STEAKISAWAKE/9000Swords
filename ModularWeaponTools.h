// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularWeaponData.h"

/**
 * 
 */
class MAGINVOX_API UModularWeaponTools
{
public:
	UModularWeaponTools();
	~UModularWeaponTools();

	//WeaponData

public:

	static TArray<WeaponPart> getWeaponParts();
	static TArray<MaterialSet> getMaterialSets();
	static TArray<WeaponType> getWeaponTypes();

	//End WeaponData


	static void DecompileWeaponCode(FString& WeaponType, TArray<FString>& WeaponParts, TArray<FString>& WeaponMaterials, FString WeaponCode);

	static TArray<FString> GetPartsFromWeaponCode(FString WeaponCode);

	static TArray<FString> GetMaterialsFromWeaponCode(FString WeaponCode);

	static FString GetTypeFromWeaponCode(FString WeaponCode);

	static int GetNumOfPartCategoriesForWeaponType(bool RequiredParts, bool OptionalParts, FString WeaponTypeString);

	static TArray<MaterialSlot> GetMaterialSlotsOfWeaponType(FString WeaponTypeString);

	static int GetNumMaterialSlotsOfWeaponType(FString WeaponType);

	static TArray<WeaponPart> FilterWeaponPartsByType(TArray<WeaponPart> WeaponParts, FString WeaponTypeString, bool ExcludeOptionalParts, float OptionalPartsWeight);

	static FString RandomizeWeaponCodeAdvanced(FString WeaponCode, float OptionalPartsWeight, bool RandomType, bool RandomParts, bool RandomMaterials);

	static FString RandomWeaponType();

	static TArray<FString> AvailableWeaponTypes();

	static FString RandomWeaponPart(WeaponPart part);

	static void RandomMaterialSetOfSlot(MaterialSet& set, FString& materialShortName, MaterialSlot slot);

	static void GetMaterialSetsOfSlot(TArray<MaterialSet>& sets, TArray<FString>& filtered, MaterialSlot Slot);


};
