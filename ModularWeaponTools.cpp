// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularWeaponTools.h"
#include "ConstructorHelpers.h"

UModularWeaponTools::UModularWeaponTools()
{
}

UModularWeaponTools::~UModularWeaponTools()
{
}

TArray<WeaponPart> UModularWeaponTools::getWeaponParts()
{
	TArray<WeaponPart> Parts;

	//Part0
	WeaponPart part0;
	part0.WeaponTypeName = "sword";
	part0.PartPrefix = "b";

	UStaticMesh* Mesh99 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Blades/Sword_Blade_01.Sword_Blade_01'")));

	UStaticMesh* Mesh00 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Blades/Sword_Blade_01.Sword_Blade_01'")));

	UStaticMesh* Mesh01 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Blades/Sword_Blade_02.Sword_Blade_02'")));

	UStaticMesh* Mesh02 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Blades/Sword_Blade_03.Sword_Blade_03'")));

	UStaticMesh* Mesh03 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Blades/Sword_Blade_04.Sword_Blade_04'")));

	UStaticMesh* Mesh04 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Blades/Sword_Blade_05.Sword_Blade_05'")));

	UStaticMesh* Mesh05 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Blades/Sword_Blade_06.Sword_Blade_06'")));

	UStaticMesh* Mesh06 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Blades/Sword_Blade_07.Sword_Blade_07'")));

	UStaticMesh* Mesh07 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Blades/Sword_Blade_08.Sword_Blade_08'")));

	part0.StaticMeshes.Add(Mesh00);
	part0.StaticMeshes.Add(Mesh01);
	part0.StaticMeshes.Add(Mesh02);
	part0.StaticMeshes.Add(Mesh03);
	part0.StaticMeshes.Add(Mesh04);
	part0.StaticMeshes.Add(Mesh05);
	part0.StaticMeshes.Add(Mesh06);
	part0.StaticMeshes.Add(Mesh07);
	part0.Optional = false;

	Parts.Add(part0);
	//End Part0

	//Part1
	WeaponPart part1;
	part1.WeaponTypeName = "sword";
	part1.PartPrefix = "g";

	
	UStaticMesh* Mesh10 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_01.Sword_Crossguard_01'")));

	UStaticMesh* Mesh11 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_02.Sword_Crossguard_02'")));

	UStaticMesh* Mesh12 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_03.Sword_Crossguard_03'")));

	UStaticMesh* Mesh13 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_04.Sword_Crossguard_04'")));

	UStaticMesh* Mesh14 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_05.Sword_Crossguard_05'")));

	UStaticMesh* Mesh15 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_06.Sword_Crossguard_06'")));

	UStaticMesh* Mesh16 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_07.Sword_Crossguard_07'")));
	
	UStaticMesh* Mesh17 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_08.Sword_Crossguard_08'")));

	UStaticMesh* Mesh18 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_09.Sword_Crossguard_09'")));

	UStaticMesh* Mesh19 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_010.Sword_Crossguard_010'")));

	UStaticMesh* Mesh110 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Crossguards/Sword_Crossguard_011.Sword_Crossguard_011'")));

	part1.StaticMeshes.Add(Mesh10);
	part1.StaticMeshes.Add(Mesh11);
	part1.StaticMeshes.Add(Mesh12);
	part1.StaticMeshes.Add(Mesh13);
	part1.StaticMeshes.Add(Mesh14);
	part1.StaticMeshes.Add(Mesh15);
	part1.StaticMeshes.Add(Mesh16);
	part1.StaticMeshes.Add(Mesh18);
	part1.StaticMeshes.Add(Mesh19);
	part1.StaticMeshes.Add(Mesh110);

	part1.Optional = false;
	Parts.Add(part1);
	//End Part1

	// Part2
	WeaponPart part2;
	part2.WeaponTypeName = "sword";
	part2.PartPrefix = "h";
	
	UStaticMesh* Mesh20 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_01.Sword_Hilt_01'")));
	
	UStaticMesh* Mesh21 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_02.Sword_Hilt_02'")));
	
	UStaticMesh* Mesh22 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_03.Sword_Hilt_03'")));
	
	UStaticMesh* Mesh23 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_04.Sword_Hilt_04'")));

	UStaticMesh* Mesh24 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_05.Sword_Hilt_05'")));

	UStaticMesh* Mesh25 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_06.Sword_Hilt_06'")));

	UStaticMesh* Mesh26 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_07.Sword_Hilt_07'")));
	
	UStaticMesh* Mesh27 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_08.Sword_Hilt_08'")));	

	UStaticMesh* Mesh28 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_09.Sword_Hilt_09'")));

	UStaticMesh* Mesh29 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_010.Sword_Hilt_010'")));

	UStaticMesh* Mesh210 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Hilts/Sword_Hilt_011.Sword_Hilt_011'")));

	part2.StaticMeshes.Add(Mesh20);
	part2.StaticMeshes.Add(Mesh21);
	part2.StaticMeshes.Add(Mesh22);
	part2.StaticMeshes.Add(Mesh23);
	part2.StaticMeshes.Add(Mesh24);
	part2.StaticMeshes.Add(Mesh25);
	part2.StaticMeshes.Add(Mesh26);
	part2.StaticMeshes.Add(Mesh28);
	part2.StaticMeshes.Add(Mesh29);
	part2.StaticMeshes.Add(Mesh210);

	part2.Optional = false;
	Parts.Add(part2);
	//End Part2

	// Part2
	WeaponPart part3;
	part3.WeaponTypeName = "sword";
	part3.PartPrefix = "p";

	
	UStaticMesh* Mesh30 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_01.Sword_Pommel_01'")));

	
	UStaticMesh* Mesh31 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_02.Sword_Pommel_02'")));

	
	UStaticMesh* Mesh32 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_03.Sword_Pommel_03'")));

	
	UStaticMesh* Mesh33 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_04.Sword_Pommel_04'")));

	
	UStaticMesh* Mesh34 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_05.Sword_Pommel_05'")));

	
	UStaticMesh* Mesh35 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_06.Sword_Pommel_06'")));

	
	UStaticMesh* Mesh36 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_07.Sword_Pommel_07'")));

	
	UStaticMesh* Mesh37 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_08.Sword_Pommel_08'")));

	
	UStaticMesh* Mesh38 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_09.Sword_Pommel_09'")));

	
	UStaticMesh* Mesh39 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_010.Sword_Pommel_010'")));

	
	UStaticMesh* Mesh310 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_011.Sword_Pommel_011'")));

	
	UStaticMesh* Mesh311 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_012.Sword_Pommel_012'")));


	UStaticMesh* Mesh312 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_013.Sword_Pommel_013'")));

	
	UStaticMesh* Mesh313 = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/Models/Swords/Pommels/Sword_Pommel_014.Sword_Pommel_014'")));

	part3.StaticMeshes.Add(Mesh30);
	part3.StaticMeshes.Add(Mesh31);
	part3.StaticMeshes.Add(Mesh32);
	part3.StaticMeshes.Add(Mesh33);
	part3.StaticMeshes.Add(Mesh34);
	part3.StaticMeshes.Add(Mesh35);
	part3.StaticMeshes.Add(Mesh36);
	part3.StaticMeshes.Add(Mesh38);
	part3.StaticMeshes.Add(Mesh39);
	part3.StaticMeshes.Add(Mesh310);
	part3.StaticMeshes.Add(Mesh311);
	part3.StaticMeshes.Add(Mesh312);
	part3.StaticMeshes.Add(Mesh313);

	part3.Optional = false;
	Parts.Add(part3);
	//End Part3


	return Parts;
}

TArray<MaterialSet> UModularWeaponTools::getMaterialSets()
{
	TArray<MaterialSet> Mats;

	MaterialSet MatSet0;
	MatSet0.MaterialName = "Iron";
	MatSet0.MaterialType = MaterialSlot::Main;
	MatSet0.MaterialUniqueShortName = "iron";
	MatSet0.BaseColor = FLinearColor(0.202725, 0.224521, 0.265, 1.0);
	MatSet0.RoughnessBias = 0.1;
	MatSet0.MetalicValue = 1.0;
	MatSet0.EmissivePower = 0;
	Mats.Add(MatSet0);

	MaterialSet MatSet1;
	MatSet1.MaterialName = "Dull Iron";
	MatSet1.MaterialType = MaterialSlot::Main;
	MatSet1.MaterialUniqueShortName = "dulliron";
	MatSet1.BaseColor = FLinearColor(0.194625, 0.205256, 0.225, 1.0);
	MatSet1.RoughnessBias = 0.2;
	MatSet1.MetalicValue = 1.0;
	MatSet1.EmissivePower = 0;
	Mats.Add(MatSet1);

	MaterialSet MatSet2;
	MatSet2.MaterialName = "Old Iron";
	MatSet2.MaterialType = MaterialSlot::Main;
	MatSet2.MaterialUniqueShortName = "oldiron";
	MatSet2.BaseColor = FLinearColor(0.1, 0.088852, 0.0848, 1.0);
	MatSet2.RoughnessBias = 0.28;
	MatSet2.MetalicValue = 1.0;
	MatSet2.EmissivePower = 0;
	Mats.Add(MatSet2);

	MaterialSet MatSet3;
	MatSet3.MaterialName = "Steel";
	MatSet3.MaterialType = MaterialSlot::Main;
	MatSet3.MaterialUniqueShortName = "steel";
	MatSet3.BaseColor = FLinearColor(0.75356, 0.74902, 0.792157, 1.0);
	MatSet3.RoughnessBias = 0.11;
	MatSet3.MetalicValue = 1.0;
	MatSet3.EmissivePower = 0;
	Mats.Add(MatSet3);

	MaterialSet MatSet4;
	MatSet4.MaterialName = "Polished Steel";
	MatSet4.MaterialType = MaterialSlot::Main;
	MatSet4.MaterialUniqueShortName = "steel2";
	MatSet4.BaseColor = FLinearColor(0.86693, 0.832079, 0.88, 1.0);
	MatSet4.RoughnessBias = -0.05;
	MatSet4.MetalicValue = 1.0;
	MatSet4.EmissivePower = 0;
	Mats.Add(MatSet4);

	MaterialSet MatSet5;
	MatSet5.MaterialName = "Dull Steel";
	MatSet5.MaterialType = MaterialSlot::Main;
	MatSet5.MaterialUniqueShortName = "steel3";
	MatSet5.BaseColor = FLinearColor(0.86693, 0.832079, 0.88, 1.0);
	MatSet5.RoughnessBias = 0.22;
	MatSet5.MetalicValue = 1.0;
	MatSet5.EmissivePower = 0;
	Mats.Add(MatSet5);

	MaterialSet MatSet6;
	MatSet6.MaterialName = "Brass";
	MatSet6.MaterialType = MaterialSlot::Main;
	MatSet6.MaterialUniqueShortName = "brass";
	MatSet6.BaseColor = FLinearColor(0.845, 0.706581, 0.48165, 1.0);
	MatSet6.RoughnessBias = 0.0;
	MatSet6.MetalicValue = 1.0;
	MatSet6.EmissivePower = 0;
	Mats.Add(MatSet6);

	MaterialSet MatSet7;
	MatSet7.MaterialName = "Copper";
	MatSet7.MaterialType = MaterialSlot::Main;
	MatSet7.MaterialUniqueShortName = "copper";
	MatSet7.BaseColor = FLinearColor(0.690196, 0.462131, 0.358902, 1.0);
	MatSet7.RoughnessBias = 0.0;
	MatSet7.MetalicValue = 1.0;
	MatSet7.EmissivePower = 0;
	Mats.Add(MatSet7);

	MaterialSet MatSet8;
	MatSet8.MaterialName = "Bronze";
	MatSet8.MaterialType = MaterialSlot::Main;
	MatSet8.MaterialUniqueShortName = "bronze";
	MatSet8.BaseColor = FLinearColor(0.575, 0.411125, 0.31625, 1.0);
	MatSet8.RoughnessBias = 0.1;
	MatSet8.MetalicValue = 1.0;
	MatSet8.EmissivePower = 0;
	Mats.Add(MatSet8);

	MaterialSet MatSet9;
	MatSet9.MaterialName = "Gold";
	MatSet9.MaterialType = MaterialSlot::Main;
	MatSet9.MaterialUniqueShortName = "gold";
	MatSet9.BaseColor = FLinearColor(0.890196, 0.678495, 0.284863, 1.0);
	MatSet9.RoughnessBias = 0.0;
	MatSet9.MetalicValue = 1.0;
	MatSet9.EmissivePower = 0;
	Mats.Add(MatSet9);

	MaterialSet MatSet10;
	MatSet10.MaterialName = "Bloodmetal";
	MatSet10.MaterialType = MaterialSlot::Main;
	MatSet10.MaterialUniqueShortName = "blood";
	MatSet10.BaseColor = FLinearColor(0.202725, 0.224521, 0.265, 1.0);
	MatSet10.RoughnessBias = 0.1;
	MatSet10.MetalicValue = 1.0;
	MatSet10.EmissivePower = 0;
	Mats.Add(MatSet10);

	MaterialSet MatSet11;
	MatSet11.MaterialName = "Mihtril";
	MatSet11.MaterialType = MaterialSlot::Main;
	MatSet11.MaterialUniqueShortName = "mithril";
	MatSet11.BaseColor = FLinearColor(0.635, 0.845811, 1.0, 1.0);
	MatSet11.RoughnessBias = 0.0;
	MatSet11.MetalicValue = 1.0;
	MatSet11.EmissivePower = 0;
	Mats.Add(MatSet11);

	MaterialSet MatSet12;
	MatSet12.MaterialName = "Obsidian";
	MatSet12.MaterialType = MaterialSlot::Main;
	MatSet12.MaterialUniqueShortName = "obsidian";
	MatSet12.BaseColor = FLinearColor(0.007, 0.007, 0.007, 1.0);
	MatSet12.RoughnessBias = 0.1;
	MatSet12.MetalicValue = 0.8;
	MatSet12.EmissivePower = 0;
	Mats.Add(MatSet12);

	MaterialSet MatSet13;
	MatSet13.MaterialName = "Dragon Scale";
	MatSet13.MaterialType = MaterialSlot::Main;
	MatSet13.MaterialUniqueShortName = "dragon";
	MatSet13.BaseColor = FLinearColor(0.062966, 0.07, 0.04865, 1.0);
	MatSet13.RoughnessBias = 0.0;
	MatSet13.MetalicValue = 1.0;
	MatSet13.EmissivePower = 0;
	Mats.Add(MatSet13);

	MaterialSet MatSet14;
	MatSet14.MaterialName = "Jade";
	MatSet14.MaterialType = MaterialSlot::Main;
	MatSet14.MaterialUniqueShortName = "jade";
	MatSet14.BaseColor = FLinearColor(0.494, 0.76, 0.569568, 1.0);
	MatSet14.RoughnessBias = 0.0;
	MatSet14.MetalicValue = 1.0;
	MatSet14.EmissivePower = 0;
	Mats.Add(MatSet14);

	MaterialSet MatSet15;
	MatSet15.MaterialName = "Black Leather";
	MatSet15.MaterialType = MaterialSlot::Deco;
	MatSet15.MaterialUniqueShortName = "leathblack";
	MatSet15.BaseColor = FLinearColor(0.015, 0.015, 0.0145, 1.0);
	MatSet15.RoughnessBias = 0.0;
	MatSet15.MetalicValue = 0.0;
	MatSet15.EmissivePower = 0;
	Mats.Add(MatSet15);

	MaterialSet MatSet16;
	MatSet16.MaterialName = "Red Leather";
	MatSet16.MaterialType = MaterialSlot::Deco;
	MatSet16.MaterialUniqueShortName = "leathred";
	MatSet16.BaseColor = FLinearColor(0.09, 0.007076, 0.00495, 1.0);
	MatSet16.RoughnessBias = 0.0;
	MatSet16.MetalicValue = 0.0;
	MatSet16.EmissivePower = 0;
	Mats.Add(MatSet16);

	MaterialSet MatSet17;
	MatSet17.MaterialName = "Brown Leather";
	MatSet17.MaterialType = MaterialSlot::Deco;
	MatSet17.MaterialUniqueShortName = "leathbrn";
	MatSet17.BaseColor = FLinearColor(0.035000,0.017967,0.009450,1.000000);
	MatSet17.RoughnessBias = -0.1;
	MatSet17.MetalicValue = 0.0;
	MatSet17.EmissivePower = 0;
	Mats.Add(MatSet17);

	MaterialSet MatSet18;
	MatSet18.MaterialName = "bandages";
	MatSet18.MaterialType = MaterialSlot::Deco;
	MatSet18.MaterialUniqueShortName = "bndg";
	MatSet18.BaseColor = FLinearColor(0.420000, 0.336000, 0.262500, 1.000000);
	MatSet18.RoughnessBias = 0.088496;
	MatSet18.MetalicValue = 0.0;
	MatSet18.EmissivePower = 0;
	Mats.Add(MatSet18);

	MaterialSet MatSet19;
	MatSet19.MaterialName = "Linnen";
	MatSet19.MaterialType = MaterialSlot::Deco;
	MatSet19.MaterialUniqueShortName = "linnen";
	MatSet19.BaseColor = FLinearColor(0.365, 0.346707, 0.329595, 1.0);
	MatSet19.RoughnessBias = 0.318584;
	MatSet19.MetalicValue = 0.0;
	MatSet19.EmissivePower = 0;
	Mats.Add(MatSet19);

	MaterialSet MatSet20;
	MatSet20.MaterialName = "Kitty";
	MatSet20.MaterialType = MaterialSlot::Deco;
	MatSet20.MaterialUniqueShortName = "kitty";
	MatSet20.BaseColor = FLinearColor(0.18, 0.1035, 0.123994, 1.0);
	MatSet20.RoughnessBias = 0.0;
	MatSet20.MetalicValue = 0.0;
	MatSet20.EmissivePower = 0;
	Mats.Add(MatSet20);

	MaterialSet MatSet21;
	MatSet21.MaterialName = "Celtic";
	MatSet21.MaterialType = MaterialSlot::Deco;
	MatSet21.MaterialUniqueShortName = "celtic";
	MatSet21.BaseColor = FLinearColor(0.0225, 0.032476, 0.09, 1.0);
	MatSet21.RoughnessBias = 0.3;
	MatSet21.MetalicValue = 0.0;
	MatSet21.EmissivePower = 0;
	Mats.Add(MatSet21);

	MaterialSet MatSet22;
	MatSet22.MaterialName = "Arcane";
	MatSet22.MaterialType = MaterialSlot::Energy;
	MatSet22.MaterialUniqueShortName = "dark";
	MatSet22.BaseColor = FLinearColor(0.202725, 0.224521, 0.265, 1.0);
	MatSet22.RoughnessBias = 0.0;
	MatSet22.MetalicValue = 0.0;
	MatSet22.EmissivePower = 15.0;
	Mats.Add(MatSet22);

	MaterialSet MatSet23;
	MatSet23.MaterialName = "Air";
	MatSet23.MaterialType = MaterialSlot::Energy;
	MatSet23.MaterialUniqueShortName = "blue";
	MatSet23.BaseColor = FLinearColor(0.26, 0.620217, 1.0, 1.0);
	MatSet23.RoughnessBias = 0.0;
	MatSet23.MetalicValue = 0.0;
	MatSet23.EmissivePower = 15.0;
	Mats.Add(MatSet23);

	MaterialSet MatSet24;
	MatSet24.MaterialName = "Nature";
	MatSet24.MaterialType = MaterialSlot::Main;
	MatSet24.MaterialUniqueShortName = "green";
	MatSet24.BaseColor = FLinearColor(0.466123, 1.0, 0.142912, 1.0);
	MatSet24.RoughnessBias = 0.0;
	MatSet24.MetalicValue = 0.0;
	MatSet24.EmissivePower = 15.0;
	Mats.Add(MatSet24);

	MaterialSet MatSet25;
	MatSet25.MaterialName = "Dawn";
	MatSet25.MaterialType = MaterialSlot::Energy;
	MatSet25.MaterialUniqueShortName = "orange";
	MatSet25.BaseColor = FLinearColor(0.78, 0.266760, 0.0468, 1.0);
	MatSet25.RoughnessBias = 0.0;
	MatSet25.MetalicValue = 0.0;
	MatSet25.EmissivePower = 15.0;
	Mats.Add(MatSet25);

	MaterialSet MatSet26;
	MatSet26.MaterialName = "Violet";
	MatSet26.MaterialType = MaterialSlot::Energy;
	MatSet26.MaterialUniqueShortName = "violet";
	MatSet26.BaseColor = FLinearColor(0.373292, 0.232, 0.725, 1.0);
	MatSet26.RoughnessBias = 0.0;
	MatSet26.MetalicValue = 0.0;
	MatSet26.EmissivePower = 15.0;
	Mats.Add(MatSet26);

	MaterialSet MatSet27;
	MatSet27.MaterialName = "Flame";
	MatSet27.MaterialType = MaterialSlot::Energy;
	MatSet27.MaterialUniqueShortName = "red";
	MatSet27.BaseColor = FLinearColor(1.0, 0.046167, 0.03, 1.0);
	MatSet27.RoughnessBias = 0.0;
	MatSet27.MetalicValue = 0.0;
	MatSet27.EmissivePower = 15.0;
	Mats.Add(MatSet27);

	MaterialSet MatSet28;
	MatSet28.MaterialName = "Heart";
	MatSet28.MaterialType = MaterialSlot::Energy;
	MatSet28.MaterialUniqueShortName = "magenta";
	MatSet28.BaseColor = FLinearColor(1.0, 0.11, 0.52428, 1.0);
	MatSet28.RoughnessBias = 0.0;
	MatSet28.MetalicValue = 0.0;
	MatSet28.EmissivePower = 15.0;
	Mats.Add(MatSet28);

	MaterialSet MatSet29;
	MatSet29.MaterialName = "Ocean";
	MatSet29.MaterialType = MaterialSlot::Energy;
	MatSet29.MaterialUniqueShortName = "teal";
	MatSet29.BaseColor = FLinearColor(0.143774, 0.941663, 0.96, 1.0);
	MatSet29.RoughnessBias = 0.0;
	MatSet29.MetalicValue = 0.0;
	MatSet29.EmissivePower = 15.0;
	Mats.Add(MatSet29);

	MaterialSet MatSet30;
	MatSet30.MaterialName = "Dark";
	MatSet30.MaterialType = MaterialSlot::Energy;
	MatSet30.MaterialUniqueShortName = "purple";
	MatSet30.BaseColor = FLinearColor(0.062596, 0.026046, 0.2, 1.0);
	MatSet30.RoughnessBias = 0.0;
	MatSet30.MetalicValue = 0.0;
	MatSet30.EmissivePower = 15.0;
	Mats.Add(MatSet30);


	return Mats;
}

TArray<WeaponType> UModularWeaponTools::getWeaponTypes()
{
	TArray<WeaponType> typesWeapons;
	WeaponType Type0;
	Type0.WeaponTypeName = "sword";
	TArray<MaterialSlot> types;
	types.Add(MaterialSlot::Main);
	types.Add(MaterialSlot::Main);
	types.Add(MaterialSlot::Deco);
	types.Add(MaterialSlot::Energy);
	Type0.MaterialSlotTypes = types;

	TArray<MaterialParameterNames> matParamNames;
	MaterialParameterNames name1;
	name1.BaseColor_ParamName = "MainColor";
	name1.RoughnessBias_ParamName = "MainRoughnessBias";
	name1.Metallic_ParamName = "MainMetallic";
	name1.EmissivePower_ParamName = "MainEmissivePower";
	matParamNames.Add(name1);

	MaterialParameterNames name2;
	name2.BaseColor_ParamName = "SecondaryColor";
	name2.RoughnessBias_ParamName = "SecondaryRoughnessBias";
	name2.Metallic_ParamName = "SecondaryMetallic";
	name2.EmissivePower_ParamName = "SecondaryEmissivePower";
	matParamNames.Add(name2);

	MaterialParameterNames name3;
	name3.BaseColor_ParamName = "DecoColor";
	name3.RoughnessBias_ParamName = "DecoRoughnessBias";
	name3.Metallic_ParamName = "DecoMetallic";
	name3.EmissivePower_ParamName = "DecoEmissivePower";
	matParamNames.Add(name3);

	MaterialParameterNames name4;
	name4.BaseColor_ParamName = "EnergyColor";
	name4.RoughnessBias_ParamName = "EnergyRoughnessBias";
	name4.Metallic_ParamName = "EnergyMetallic";
	name4.EmissivePower_ParamName = "EnergyLevel";
	matParamNames.Add(name4);

	Type0.MaterialSlotParameterNames = matParamNames;
	typesWeapons.Add(Type0);

	return typesWeapons;
}

void UModularWeaponTools::DecompileWeaponCode(FString& WeaponType, TArray<FString>& WeaponParts, TArray<FString>& WeaponMaterials, FString WeaponCode)
{

	WeaponParts = GetPartsFromWeaponCode(WeaponCode);
	WeaponMaterials = GetMaterialsFromWeaponCode(WeaponCode);
	WeaponType = GetTypeFromWeaponCode(WeaponCode);


}

TArray<FString> UModularWeaponTools::GetPartsFromWeaponCode(FString WeaponCode)
{
	TArray<FString> OutputWeaponParts;

	TArray<FString> Parsed1;

	WeaponCode.ParseIntoArray(Parsed1, TEXT(":"), true);
	Parsed1[1].ParseIntoArray(OutputWeaponParts, TEXT("_"), true);
	
	return OutputWeaponParts;
}

TArray<FString> UModularWeaponTools::GetMaterialsFromWeaponCode(FString WeaponCode)
{
	TArray<FString> FoundMatsArray;

	TArray<FString> Parsed1;

	WeaponCode.ParseIntoArray(Parsed1, TEXT(":"), true);
	Parsed1[2].ParseIntoArray(FoundMatsArray, TEXT("_"), true);

	return FoundMatsArray;
}

FString UModularWeaponTools::GetTypeFromWeaponCode(FString WeaponCode)
{
	TArray<FString> WeaponType;

	WeaponCode.ParseIntoArray(WeaponType, TEXT(":"), true);
	return WeaponType[0];
}

int UModularWeaponTools::GetNumOfPartCategoriesForWeaponType(bool RequiredParts, bool OptionalParts, FString WeaponTypeString)
{
	int AmountFound = 0;
	TArray<WeaponPart> LocalWeaponParts;

	//Set local WeaponParts
	LocalWeaponParts = getWeaponParts();

	for (int p = 0; p < LocalWeaponParts.Num(); p++) {
		if (WeaponTypeString == LocalWeaponParts[p].WeaponTypeName) {
			//Sequence 1
			if (RequiredParts && !LocalWeaponParts[p].Optional) {
				AmountFound++;
			}
			//Sequence 2
			if (LocalWeaponParts[p].Optional && OptionalParts) {
				AmountFound++;
			}
		}
	}

	return AmountFound;
}

TArray<MaterialSlot> UModularWeaponTools::GetMaterialSlotsOfWeaponType(FString WeaponTypeString) {
	TArray<MaterialSlot> MaterialSlots;
	TArray<WeaponType> LocalWeaponTypes;

	LocalWeaponTypes = getWeaponTypes();

	for (int t = 0; t < LocalWeaponTypes.Num(); t++) {
		if (WeaponTypeString == LocalWeaponTypes[t].WeaponTypeName) {
			MaterialSlots = LocalWeaponTypes[t].MaterialSlotTypes;
			break;
		}
	}

	return MaterialSlots;
}

int UModularWeaponTools::GetNumMaterialSlotsOfWeaponType(FString WeaponType) {

	return GetMaterialSlotsOfWeaponType(WeaponType).Num();
}

TArray<WeaponPart> UModularWeaponTools::FilterWeaponPartsByType(TArray<WeaponPart> WeaponParts, FString WeaponTypeString, bool ExcludeOptionalParts, float OptionalPartsWeight) {
	TArray<WeaponPart> PartsArray;
	TArray<WeaponPart> IncomingPartsArray;

	IncomingPartsArray = WeaponParts;

	for (int p = 0; p < IncomingPartsArray.Num(); p++) {
		if (ExcludeOptionalParts) {
			if (IncomingPartsArray[p].WeaponTypeName == WeaponTypeString && !IncomingPartsArray[p].Optional) {
				PartsArray.Add(IncomingPartsArray[p]);
			}
		}
		else {
			if (IncomingPartsArray[p].WeaponTypeName == WeaponTypeString && !IncomingPartsArray[p].Optional) {
				PartsArray.Add(IncomingPartsArray[p]);
			}
			else {
				if (IncomingPartsArray[p].Optional && OptionalPartsWeight >= FMath::RandRange(0, 1)) {
					PartsArray.Add(IncomingPartsArray[p]);
				}
			}
		}
	}

	return PartsArray;

}

FString UModularWeaponTools::RandomizeWeaponCodeAdvanced(FString WeaponCode, float OptionalPartsWeight, bool RandomType, bool RandomParts, bool RandomMaterials) {
	TArray<WeaponPart> FilteredWeaponPartsArray;
	FString OutputString;
	FString NewWeaponType;
	TArray<WeaponPart> UnfilteredWeaponPartsArray;
	
	if (RandomType) {
		OutputString = RandomWeaponType();
	}
	else {
		OutputString = GetTypeFromWeaponCode(WeaponCode);
	}

	NewWeaponType = OutputString;

	//For Random Parts
	if (RandomParts) {
		UnfilteredWeaponPartsArray = getWeaponParts();
		FilteredWeaponPartsArray = FilterWeaponPartsByType(UnfilteredWeaponPartsArray, NewWeaponType, false, OptionalPartsWeight);

		for (int f = 0; f < FilteredWeaponPartsArray.Num(); f++) {
			FString deliminator;

			if (f == 0) {
				deliminator = ":";
			}
			else {
				deliminator = "_";
			}

			OutputString = OutputString + deliminator + RandomWeaponPart(FilteredWeaponPartsArray[f]);

		}

	}
	//Read Parts from Code
	else {
		for (int p = 0; p < GetPartsFromWeaponCode(WeaponCode).Num(); p++) {
			FString deliminator;

			if (p == 0) {
				deliminator = ":";
			}
			else {
				deliminator = "_";
			}

			OutputString = OutputString + deliminator + GetPartsFromWeaponCode(WeaponCode)[p];
		}
	}

	//For Random Materials
	if (RandomMaterials) {
		for (int s = 0; s < GetMaterialSlotsOfWeaponType(NewWeaponType).Num(); s++) {
			FString deliminator;

			if (s == 0) {
				deliminator = ":";
			}
			else {
				deliminator = "_";
			}
			
			FString  MatShortName; MaterialSet set;
			RandomMaterialSetOfSlot(set, MatShortName, GetMaterialSlotsOfWeaponType(NewWeaponType)[s]);

			OutputString = OutputString + deliminator + MatShortName;
		}
	}
	else {
		for (int m = 0; m < GetMaterialsFromWeaponCode(WeaponCode).Num(); m++) {
			FString deliminator;

			if (m == 0) {
				deliminator = ":";
			}
			else {
				deliminator = "_";
			}

			OutputString = OutputString + deliminator + GetMaterialsFromWeaponCode(WeaponCode)[m];
		}
	}
	
	return OutputString;
}

FString UModularWeaponTools::RandomWeaponType() {
	return AvailableWeaponTypes()[FMath::FRandRange(0, AvailableWeaponTypes().Num())];
}

TArray<FString> UModularWeaponTools::AvailableWeaponTypes() {
	TArray<FString> FoundTypes;
	TArray<WeaponPart> LocalWeaponParts;

	LocalWeaponParts.Empty();

	LocalWeaponParts = getWeaponParts();

	for (int p = 0; p < LocalWeaponParts.Num(); p++) {
		if (!FoundTypes.Contains(LocalWeaponParts[p].WeaponTypeName.ToLower())) {
			FoundTypes.AddUnique(LocalWeaponParts[p].WeaponTypeName.ToLower());
		}
	}

	return FoundTypes;

}

FString UModularWeaponTools::RandomWeaponPart(WeaponPart part) {
	return FString(part.PartPrefix + FString::FromInt(FMath::RandRange(0, part.StaticMeshes.Num() - 1)));
}

void UModularWeaponTools::RandomMaterialSetOfSlot(MaterialSet& set, FString& materialShortName, MaterialSlot slot) {

	TArray<MaterialSet> MaterialSets;

	TArray<FString> unusedstring;

	GetMaterialSetsOfSlot(MaterialSets, unusedstring, slot);

	int randNum = FMath::RandRange(0, MaterialSets.Num() - 1);
	set = MaterialSets[randNum];
	materialShortName = MaterialSets[randNum].MaterialUniqueShortName;
}

void UModularWeaponTools::GetMaterialSetsOfSlot(TArray<MaterialSet>& sets, TArray<FString>& filtered, MaterialSlot Slot) {
	TArray<MaterialSet> FilteredMaterials;
	TArray<FString> FilteredMaterialStrings;
	TArray<MaterialSet> UnfilteredMaterials;

	UnfilteredMaterials = getMaterialSets();

	for (int m = 0; m < UnfilteredMaterials.Num(); m++) {
		if (UnfilteredMaterials[m].MaterialType == Slot) {
			FilteredMaterials.Add(UnfilteredMaterials[m]);
			FilteredMaterialStrings.Add(UnfilteredMaterials[m].MaterialUniqueShortName);
		}
	}

	sets = FilteredMaterials;
	filtered = FilteredMaterialStrings;

}