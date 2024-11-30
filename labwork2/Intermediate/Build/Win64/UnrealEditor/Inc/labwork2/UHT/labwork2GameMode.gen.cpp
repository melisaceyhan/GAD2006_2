// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "labwork2/labwork2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelabwork2GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LABWORK2_API UClass* Z_Construct_UClass_Alabwork2GameMode();
LABWORK2_API UClass* Z_Construct_UClass_Alabwork2GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_labwork2();
// End Cross Module References

// Begin Class Alabwork2GameMode
void Alabwork2GameMode::StaticRegisterNativesAlabwork2GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Alabwork2GameMode);
UClass* Z_Construct_UClass_Alabwork2GameMode_NoRegister()
{
	return Alabwork2GameMode::StaticClass();
}
struct Z_Construct_UClass_Alabwork2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "labwork2GameMode.h" },
		{ "ModuleRelativePath", "labwork2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Alabwork2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Alabwork2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_labwork2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Alabwork2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Alabwork2GameMode_Statics::ClassParams = {
	&Alabwork2GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alabwork2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Alabwork2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Alabwork2GameMode()
{
	if (!Z_Registration_Info_UClass_Alabwork2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Alabwork2GameMode.OuterSingleton, Z_Construct_UClass_Alabwork2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Alabwork2GameMode.OuterSingleton;
}
template<> LABWORK2_API UClass* StaticClass<Alabwork2GameMode>()
{
	return Alabwork2GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Alabwork2GameMode);
Alabwork2GameMode::~Alabwork2GameMode() {}
// End Class Alabwork2GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_labwork2GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Alabwork2GameMode, Alabwork2GameMode::StaticClass, TEXT("Alabwork2GameMode"), &Z_Registration_Info_UClass_Alabwork2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Alabwork2GameMode), 484339889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_labwork2GameMode_h_1163653939(TEXT("/Script/labwork2"),
	Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_labwork2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_labwork2GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
