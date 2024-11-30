// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "labwork2/Private/AGameGridd.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGameGridd() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
LABWORK2_API UClass* Z_Construct_UClass_AAGameGridd();
LABWORK2_API UClass* Z_Construct_UClass_AAGameGridd_NoRegister();
UPackage* Z_Construct_UPackage__Script_labwork2();
// End Cross Module References

// Begin Class AAGameGridd
void AAGameGridd::StaticRegisterNativesAAGameGridd()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAGameGridd);
UClass* Z_Construct_UClass_AAGameGridd_NoRegister()
{
	return AAGameGridd::StaticClass();
}
struct Z_Construct_UClass_AAGameGridd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AGameGridd.h" },
		{ "ModuleRelativePath", "Private/AGameGridd.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGameGridd>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAGameGridd_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_labwork2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGameGridd_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGameGridd_Statics::ClassParams = {
	&AAGameGridd::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGameGridd_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGameGridd_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAGameGridd()
{
	if (!Z_Registration_Info_UClass_AAGameGridd.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGameGridd.OuterSingleton, Z_Construct_UClass_AAGameGridd_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAGameGridd.OuterSingleton;
}
template<> LABWORK2_API UClass* StaticClass<AAGameGridd>()
{
	return AAGameGridd::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAGameGridd);
AAGameGridd::~AAGameGridd() {}
// End Class AAGameGridd

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_Private_AGameGridd_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAGameGridd, AAGameGridd::StaticClass, TEXT("AAGameGridd"), &Z_Registration_Info_UClass_AAGameGridd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGameGridd), 393486453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_Private_AGameGridd_h_780962276(TEXT("/Script/labwork2"),
	Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_Private_AGameGridd_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melis_OneDrive_Belgeler_GitHub_GAD2006_2_labwork2_Source_labwork2_Private_AGameGridd_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
