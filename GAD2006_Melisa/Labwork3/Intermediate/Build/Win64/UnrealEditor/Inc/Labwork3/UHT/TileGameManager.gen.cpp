// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labwork3/Public/TileGameManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileGameManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LABWORK3_API UClass* Z_Construct_UClass_ATileBase_NoRegister();
LABWORK3_API UClass* Z_Construct_UClass_ATileGameManager();
LABWORK3_API UClass* Z_Construct_UClass_ATileGameManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Labwork3();
// End Cross Module References

// Begin Class ATileGameManager Function UpdateTilePreviewMesh
struct Z_Construct_UFunction_ATileGameManager_UpdateTilePreviewMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TileGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileGameManager_UpdateTilePreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileGameManager, nullptr, "UpdateTilePreviewMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileGameManager_UpdateTilePreviewMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATileGameManager_UpdateTilePreviewMesh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATileGameManager_UpdateTilePreviewMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATileGameManager_UpdateTilePreviewMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATileGameManager::execUpdateTilePreviewMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTilePreviewMesh();
	P_NATIVE_END;
}
// End Class ATileGameManager Function UpdateTilePreviewMesh

// Begin Class ATileGameManager
void ATileGameManager::StaticRegisterNativesATileGameManager()
{
	UClass* Class = ATileGameManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateTilePreviewMesh", &ATileGameManager::execUpdateTilePreviewMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATileGameManager);
UClass* Z_Construct_UClass_ATileGameManager_NoRegister()
{
	return ATileGameManager::StaticClass();
}
struct Z_Construct_UClass_ATileGameManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TileGameManager.h" },
		{ "ModuleRelativePath", "Public/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSelection_MetaData[] = {
		{ "Category", "TileGameManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilePreviewMesh_MetaData[] = {
		{ "Category", "TileGameManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "TileGameManager" },
		{ "ModuleRelativePath", "Public/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[] = {
		{ "Category", "TileGameManager" },
		{ "ModuleRelativePath", "Public/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileTypes_MetaData[] = {
		{ "Category", "TileGameManager" },
		{ "ModuleRelativePath", "Public/TileGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapExtendsInGrids_MetaData[] = {
		{ "Category", "TileGameManager" },
		{ "ModuleRelativePath", "Public/TileGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSelection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TilePreviewMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TileTypes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapExtendsInGrids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATileGameManager_UpdateTilePreviewMesh, "UpdateTilePreviewMesh" }, // 4135827220
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileGameManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridSelection = { "GridSelection", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, GridSelection), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSelection_MetaData), NewProp_GridSelection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_TilePreviewMesh = { "TilePreviewMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, TilePreviewMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilePreviewMesh_MetaData), NewProp_TilePreviewMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, GridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridOffset = { "GridOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, GridOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridOffset_MetaData), NewProp_GridOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_TileTypes_Inner = { "TileTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATileBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_TileTypes = { "TileTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, TileTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileTypes_MetaData), NewProp_TileTypes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATileGameManager_Statics::NewProp_MapExtendsInGrids = { "MapExtendsInGrids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileGameManager, MapExtendsInGrids), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapExtendsInGrids_MetaData), NewProp_MapExtendsInGrids_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileGameManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_TilePreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_GridOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_TileTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_TileTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileGameManager_Statics::NewProp_MapExtendsInGrids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileGameManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATileGameManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileGameManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATileGameManager_Statics::ClassParams = {
	&ATileGameManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATileGameManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATileGameManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATileGameManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATileGameManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATileGameManager()
{
	if (!Z_Registration_Info_UClass_ATileGameManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATileGameManager.OuterSingleton, Z_Construct_UClass_ATileGameManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATileGameManager.OuterSingleton;
}
template<> LABWORK3_API UClass* StaticClass<ATileGameManager>()
{
	return ATileGameManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATileGameManager);
ATileGameManager::~ATileGameManager() {}
// End Class ATileGameManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_melis_Downloads_GAD2006_main_GAD2006_main_Labwork3_Source_Labwork3_Public_TileGameManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATileGameManager, ATileGameManager::StaticClass, TEXT("ATileGameManager"), &Z_Registration_Info_UClass_ATileGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATileGameManager), 3785523727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melis_Downloads_GAD2006_main_GAD2006_main_Labwork3_Source_Labwork3_Public_TileGameManager_h_3956287551(TEXT("/Script/Labwork3"),
	Z_CompiledInDeferFile_FID_Users_melis_Downloads_GAD2006_main_GAD2006_main_Labwork3_Source_Labwork3_Public_TileGameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melis_Downloads_GAD2006_main_GAD2006_main_Labwork3_Source_Labwork3_Public_TileGameManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
