// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "labwork2/AGameGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGameGrid() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
LABWORK2_API UClass* Z_Construct_UClass_AAGameGrid();
LABWORK2_API UClass* Z_Construct_UClass_AAGameGrid_NoRegister();
UPackage* Z_Construct_UPackage__Script_labwork2();
// End Cross Module References

// Begin Class AAGameGrid
void AAGameGrid::StaticRegisterNativesAAGameGrid()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAGameGrid);
UClass* Z_Construct_UClass_AAGameGrid_NoRegister()
{
	return AAGameGrid::StaticClass();
}
struct Z_Construct_UClass_AAGameGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AGameGrid.h" },
		{ "ModuleRelativePath", "AGameGrid.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGameGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAGameGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_labwork2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGameGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGameGrid_Statics::ClassParams = {
	&AAGameGrid::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGameGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGameGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAGameGrid()
{
	if (!Z_Registration_Info_UClass_AAGameGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGameGrid.OuterSingleton, Z_Construct_UClass_AAGameGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAGameGrid.OuterSingleton;
}
template<> LABWORK2_API UClass* StaticClass<AAGameGrid>()
{
	return AAGameGrid::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAGameGrid);
AAGameGrid::~AAGameGrid() {}
// End Class AAGameGrid

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_AGameGrid_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAGameGrid, AAGameGrid::StaticClass, TEXT("AAGameGrid"), &Z_Registration_Info_UClass_AAGameGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGameGrid), 1584683722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_AGameGrid_h_3277572637(TEXT("/Script/labwork2"),
	Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_AGameGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_AGameGrid_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
