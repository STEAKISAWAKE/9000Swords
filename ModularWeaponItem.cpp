// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularWeaponItem.h"
#include "ModularWeaponTools.h"
#include "Engine/Engine.h"

void AModularWeaponItem::Randomize() {
	RandomizeWeaponCode();
	Initalize();
}

void AModularWeaponItem::BeginPlay() {
	Super::BeginPlay();
	if (!GenerateOnActorConstruction) {
		Initalize();
	}
}

void AModularWeaponItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AModularWeaponItem::AModularWeaponItem() {
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;

	if (GenerateOnActorConstruction) {
		if (GenerateRandomWeapon) {
			Randomize();
		}
		else {
			if (Initalize()) {
				if (GEngine)
					GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Successfully created weapon."));
			}
			else {
				if (GEngine)
					GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Failed to create weapon!"));
			}
		}
	}

}


bool AModularWeaponItem::Initalize() {
	for (int c = 0; c < WeaponMeshComponents.Num(); c++) {
		WeaponMeshComponents[c]->DestroyComponent();
	}

	WeaponMeshComponents.Empty();
	
	return ParseWeaponCodeAndCreateWeapon();
}

bool AModularWeaponItem::ParseWeaponCodeAndCreateWeapon()
{
	TArray<FString> WeaponParts;
	FString WeaponTypeString;
	bool NoErrors = true;
	bool PartFound = false;
	bool TypeFound = false;
	TArray<FString> WeaponMaterials;
	TArray<WeaponPart> FilteredWeaponParts;
	TArray<MaterialSet> MaterialsTemp;
	FString LocalCurrentMatSet;
	TArray<MaterialSlot> MaterialSlotTypes;
	TArray<MaterialParameterNames> MaterialSlotParameterNames;
	bool MaterialFound = false;
	
	TArray<MaterialSet> LocalMaterialSets;
	TArray<WeaponPart> LocalWeaponParts;
	TArray<WeaponType> LocalWeaponTypes;

	LocalWeaponTypes = UModularWeaponTools::getWeaponTypes();
	LocalMaterialSets = UModularWeaponTools::getMaterialSets();
	LocalWeaponParts = UModularWeaponTools::getWeaponParts();

	UModularWeaponTools::DecompileWeaponCode(WeaponTypeString, WeaponParts, WeaponMaterials, WeaponCode);

	//Check to see if the input string has required number of parts
	if (WeaponParts.Num() >= UModularWeaponTools::GetNumOfPartCategoriesForWeaponType(true, false, WeaponTypeString)) {
		if (WeaponMaterials.Num() == UModularWeaponTools::GetNumMaterialSlotsOfWeaponType(WeaponTypeString)) {
			//Sequence 0
			FilteredWeaponParts = UModularWeaponTools::FilterWeaponPartsByType(LocalWeaponParts, WeaponTypeString, false, RandomGenerationOptionalPartsWeight);
			if (WeaponMaterials.Num() == UModularWeaponTools::GetMaterialSlotsOfWeaponType(WeaponTypeString).Num()) {
				//Add Mesh Components
				for (int p = 0; p < WeaponParts.Num(); p++) {
					PartFound = false;

					for (int a = 0; a < FilteredWeaponParts.Num(); a = a+1) {
						if (WeaponParts[a].StartsWith(FilteredWeaponParts[a].PartPrefix, ESearchCase::IgnoreCase)) {
							//Sequence 0

							UStaticMeshComponent* MeshComponent = NewObject<UStaticMeshComponent>(Scene, UStaticMeshComponent::StaticClass(), FName(*FString(FString("SwordStaticMesh") + FString::FromInt(WeaponMeshComponents.Num() + 1))));
							MeshComponent->RegisterComponentWithWorld(GetWorld());
							FString staticMeshElemStr = WeaponParts[p].RightChop(FilteredWeaponParts[a].PartPrefix.Len());
							int staticMeshElem = FCString::Atoi(*staticMeshElemStr);
							MeshComponent->SetRelativeTransform(GetActorTransform(), false, nullptr, ETeleportType::None);
							MeshComponent->SetStaticMesh(FilteredWeaponParts[p].StaticMeshes[staticMeshElem]);
							MeshComponent->SetupAttachment(Scene, FName("None"));
							MeshComponent->SetRelativeRotation(FQuat(0, 0, 90, 1));
							WeaponMeshComponents.AddUnique(MeshComponent);

							//Sequence 1
							PartFound = true;  
							break;

						}
					}
					if (!PartFound) {
						NoErrors = false;
						//Failed to find a weapon part.
						//if (GEngine)
						//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ERROR: in ModularWeapon actor \"" + this->GetName() + "\":Weapon part for SubString \"" + WeaponParts[p] + "\" not found!"));
					}

				}

				if (!NoErrors) {
					//Error: weapon type not found
					//if (GEngine)
					//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ERROR: in ModularWeapon actor \"" + this->GetName() + "\":Weapon type \"" + WeaponTypeString + "\" not found!"));
				}

			}

			//Sequence 1
			//Assign Materials according to schema
			MaterialParameterPresets.Empty();

			//Sequence 0
			TypeFound = false;
			for (int t = 0; t < LocalWeaponTypes.Num(); t++) {
				if (WeaponTypeString == LocalWeaponTypes[t].WeaponTypeName) {
					MaterialSlotTypes = LocalWeaponTypes[t].MaterialSlotTypes;
					TypeFound = true;
					break;
				}
			}

			if (!TypeFound) {
				NoErrors = false;
				//Weapon type not found in weapon data "WeaponTypes" array!
				if (GEngine)
					GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ERROR: in ModularWeapon actor \"" + this->GetName() + "\":Weapon Type \"" + WeaponTypeString + "\" not found in WeaponData \"WeaponTypes\"!"));
			}

			//Sequence 1
			for (int m = 0; m < WeaponMaterials.Num(); m++) {
				LocalCurrentMatSet = WeaponMaterials[m];
				MaterialFound = false;

				for (int s = 0; s < LocalMaterialSets.Num(); s++) {
					if (LocalCurrentMatSet == LocalMaterialSets[s].MaterialUniqueShortName && LocalMaterialSets[s].MaterialType == MaterialSlotTypes[m]) {
						//MaterialParameterPresets[m] = LocalMaterialSets[s];
						if (MaterialParameterPresets.Num() - 1 < m)
							MaterialParameterPresets.SetNum(m + 1, false);//This might be able to replace SetArrayEmem
						MaterialParameterPresets[m] = LocalMaterialSets[s];

						MaterialFound = true;
						break;
					}
				}

				if (!MaterialFound) {
					NoErrors = false;
					//Material was not found in WeaponData's MaterialTypes array!
					if (GEngine)
						GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ERROR: in ModularWeapon actor \"" + this->GetName() + "\":Material \"" + LocalCurrentMatSet + "\" not found!"));
				}

			}

			UpdateMaterials();

		}
		else {
			NoErrors = false;
			//WeaponCode FString too short! Material preset names.
			//if (GEngine)
			//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ERROR: in ModularWeapon actor \"" + this->GetName() + "\":WeaponCode String too short! Needs to contain exactly \"" + FString::FromInt(UModularWeaponTools::GetNumMaterialSlotsOfWeaponType(WeaponTypeString)) + "\" material preset names, deliminated by '_'!"));
		}
	}
	else {
		NoErrors = false;
		//WeaponCode String too short! Weapon parts and ids.
		//if (GEngine)
			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ERROR: in ModularWeapon actor \"" + this->GetName() + "\":WeaponCode String too short! Needs to contain exactly \"" + FString::FromInt(UModularWeaponTools::GetNumOfPartCategoriesForWeaponType(true, false, WeaponTypeString)) + "\" weapon parts and IDs, deliminated by '_'!"));
	}

	return NoErrors;
}

void AModularWeaponItem::RandomizeWeaponCode()
{
	WeaponCode = UModularWeaponTools::RandomizeWeaponCodeAdvanced(WeaponCode, RandomGenerationOptionalPartsWeight, RandomizeType, RandomizeParts, RandomizeMaterials);
	return;
}

bool AModularWeaponItem::UpdateMaterials()
{

	TArray<UMaterialInstanceDynamic*> LocalDMIs;
	TArray<MaterialParameterNames> LocalMaterialSlotParameterNames;
	TArray<WeaponType> LocalWeaponTypes;

	//Sequence 1
	LocalWeaponTypes = UModularWeaponTools::getWeaponTypes();

	//Get material parameter names from data and store them
	for (int t = 0; t < LocalWeaponTypes.Num(); t++) {
		if (UModularWeaponTools::GetTypeFromWeaponCode(WeaponCode) == LocalWeaponTypes[t].WeaponTypeName) {
			LocalMaterialSlotParameterNames = LocalWeaponTypes[t].MaterialSlotParameterNames;
			break;
		}
	}

	for (int m = 0; m < WeaponMeshComponents.Num(); m++) {

		UMaterialInstanceDynamic* inst = Cast<UMaterialInstanceDynamic>(WeaponMeshComponents[m]->GetMaterial(0));

		if (inst) {
			if (LocalDMIs.Num() - 1 < m)
				LocalDMIs.SetNum(m + 1, false);
			LocalDMIs[m] = inst;
		}
		else {
			if (LocalDMIs.Num() - 1 < m)
				LocalDMIs.SetNum(m + 1, false);
			LocalDMIs[m] = WeaponMeshComponents[m]->CreateAndSetMaterialInstanceDynamic(0);
		}

		for (int p = 0; p < MaterialParameterPresets.Num(); p++) {
			LocalDMIs[m]->SetVectorParameterValue(LocalMaterialSlotParameterNames[p].BaseColor_ParamName, MaterialParameterPresets[p].BaseColor);
			LocalDMIs[m]->SetScalarParameterValue(LocalMaterialSlotParameterNames[p].RoughnessBias_ParamName, MaterialParameterPresets[p].RoughnessBias);
			LocalDMIs[m]->SetScalarParameterValue(LocalMaterialSlotParameterNames[p].Metallic_ParamName, MaterialParameterPresets[p].MetalicValue);
			LocalDMIs[m]->SetScalarParameterValue(LocalMaterialSlotParameterNames[p].EmissivePower_ParamName, MaterialParameterPresets[p].EmissivePower);
		}

	}

	//Sequence 2
	return true;
}

void AModularWeaponItem::OnRepWeaponCode()
{
}
