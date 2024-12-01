// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "labwork2_melisa/Private/GameGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameGrid() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
LABWORK2_MELISA_API UClass* Z_Construct_UClass_AGameGrid();
LABWORK2_MELISA_API UClass* Z_Construct_UClass_AGameGrid_NoRegister();
LABWORK2_MELISA_API UClass* Z_Construct_UClass_AGameSlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_labwork2_melisa();
// End Cross Module References

// Begin Class AGameGrid
void AGameGrid::StaticRegisterNativesAGameGrid()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameGrid);
UClass* Z_Construct_UClass_AGameGrid_NoRegister()
{
	return AGameGrid::StaticClass();
}
struct Z_Construct_UClass_AGameGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameGrid.h" },
		{ "ModuleRelativePath", "Private/GameGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSlotClass_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "ModuleRelativePath", "Private/GameGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowsNum_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "ModuleRelativePath", "Private/GameGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColsNum_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "ModuleRelativePath", "Private/GameGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridActors_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/GameGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameSlotClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RowsNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ColsNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GameSlotClass = { "GameSlotClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGrid, GameSlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSlotClass_MetaData), NewProp_GameSlotClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_RowsNum = { "RowsNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGrid, RowsNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowsNum_MetaData), NewProp_RowsNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_ColsNum = { "ColsNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGrid, ColsNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColsNum_MetaData), NewProp_ColsNum_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GridActors_Inner = { "GridActors", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GridActors = { "GridActors", nullptr, (EPropertyFlags)0x0010008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGrid, GridActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridActors_MetaData), NewProp_GridActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GameSlotClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_RowsNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_ColsNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GridActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GridActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_labwork2_melisa,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameGrid_Statics::ClassParams = {
	&AGameGrid::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameGrid()
{
	if (!Z_Registration_Info_UClass_AGameGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameGrid.OuterSingleton, Z_Construct_UClass_AGameGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameGrid.OuterSingleton;
}
template<> LABWORK2_MELISA_API UClass* StaticClass<AGameGrid>()
{
	return AGameGrid::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameGrid);
AGameGrid::~AGameGrid() {}
// End Class AGameGrid

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_melisa_Source_labwork2_melisa_Private_GameGrid_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameGrid, AGameGrid::StaticClass, TEXT("AGameGrid"), &Z_Registration_Info_UClass_AGameGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameGrid), 786137031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_melisa_Source_labwork2_melisa_Private_GameGrid_h_493834102(TEXT("/Script/labwork2_melisa"),
	Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_melisa_Source_labwork2_melisa_Private_GameGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_melisa_Source_labwork2_melisa_Private_GameGrid_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
