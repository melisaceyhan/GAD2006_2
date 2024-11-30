// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "labwork2/Private/AGameSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGameSlot() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
LABWORK2_API UClass* Z_Construct_UClass_AAGameSlot();
LABWORK2_API UClass* Z_Construct_UClass_AAGameSlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_labwork2();
// End Cross Module References

// Begin Class AAGameSlot
void AAGameSlot::StaticRegisterNativesAAGameSlot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAGameSlot);
UClass* Z_Construct_UClass_AAGameSlot_NoRegister()
{
	return AAGameSlot::StaticClass();
}
struct Z_Construct_UClass_AAGameSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AGameSlot.h" },
		{ "ModuleRelativePath", "Private/AGameSlot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGameSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAGameSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_labwork2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGameSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGameSlot_Statics::ClassParams = {
	&AAGameSlot::StaticClass,
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
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGameSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGameSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAGameSlot()
{
	if (!Z_Registration_Info_UClass_AAGameSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGameSlot.OuterSingleton, Z_Construct_UClass_AAGameSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAGameSlot.OuterSingleton;
}
template<> LABWORK2_API UClass* StaticClass<AAGameSlot>()
{
	return AAGameSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAGameSlot);
AAGameSlot::~AAGameSlot() {}
// End Class AAGameSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_Private_AGameSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAGameSlot, AAGameSlot::StaticClass, TEXT("AAGameSlot"), &Z_Registration_Info_UClass_AAGameSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGameSlot), 1680928366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_Private_AGameSlot_h_76115340(TEXT("/Script/labwork2"),
	Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_Private_AGameSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_Private_AGameSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
