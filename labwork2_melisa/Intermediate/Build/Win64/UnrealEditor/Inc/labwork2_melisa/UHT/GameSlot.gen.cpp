// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "labwork2_melisa/Private/GameSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSlot() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
LABWORK2_MELISA_API UClass* Z_Construct_UClass_AGameSlot();
LABWORK2_MELISA_API UClass* Z_Construct_UClass_AGameSlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_labwork2_melisa();
// End Cross Module References

// Begin Class AGameSlot
void AGameSlot::StaticRegisterNativesAGameSlot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameSlot);
UClass* Z_Construct_UClass_AGameSlot_NoRegister()
{
	return AGameSlot::StaticClass();
}
struct Z_Construct_UClass_AGameSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameSlot.h" },
		{ "ModuleRelativePath", "Private/GameSlot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_labwork2_melisa,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameSlot_Statics::ClassParams = {
	&AGameSlot::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameSlot()
{
	if (!Z_Registration_Info_UClass_AGameSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameSlot.OuterSingleton, Z_Construct_UClass_AGameSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameSlot.OuterSingleton;
}
template<> LABWORK2_MELISA_API UClass* StaticClass<AGameSlot>()
{
	return AGameSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameSlot);
AGameSlot::~AGameSlot() {}
// End Class AGameSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_melisa_Source_labwork2_melisa_Private_GameSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameSlot, AGameSlot::StaticClass, TEXT("AGameSlot"), &Z_Registration_Info_UClass_AGameSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameSlot), 4097458989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_melisa_Source_labwork2_melisa_Private_GameSlot_h_975445671(TEXT("/Script/labwork2_melisa"),
	Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_melisa_Source_labwork2_melisa_Private_GameSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_melisa_Source_labwork2_melisa_Private_GameSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
