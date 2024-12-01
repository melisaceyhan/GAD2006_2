// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labwork2/Public/TBPLayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTBPLayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
LABWORK2_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
LABWORK2_API UClass* Z_Construct_UClass_ATBPLayerController();
LABWORK2_API UClass* Z_Construct_UClass_ATBPLayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Labwork2();
// End Cross Module References

// Begin Class ATBPLayerController
void ATBPLayerController::StaticRegisterNativesATBPLayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATBPLayerController);
UClass* Z_Construct_UClass_ATBPLayerController_NoRegister()
{
	return ATBPLayerController::StaticClass();
}
struct Z_Construct_UClass_ATBPLayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TBPLayerController.h" },
		{ "ModuleRelativePath", "Public/TBPLayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameManager_MetaData[] = {
		{ "Category", "TBPLayerController" },
		{ "ModuleRelativePath", "Public/TBPLayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATBPLayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATBPLayerController_Statics::NewProp_GameManager = { "GameManager", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATBPLayerController, GameManager), Z_Construct_UClass_AGameManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameManager_MetaData), NewProp_GameManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATBPLayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATBPLayerController_Statics::NewProp_GameManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATBPLayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATBPLayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATBPLayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATBPLayerController_Statics::ClassParams = {
	&ATBPLayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATBPLayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATBPLayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATBPLayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATBPLayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATBPLayerController()
{
	if (!Z_Registration_Info_UClass_ATBPLayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATBPLayerController.OuterSingleton, Z_Construct_UClass_ATBPLayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATBPLayerController.OuterSingleton;
}
template<> LABWORK2_API UClass* StaticClass<ATBPLayerController>()
{
	return ATBPLayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATBPLayerController);
ATBPLayerController::~ATBPLayerController() {}
// End Class ATBPLayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_melis_Downloads_GAD2006_main__1__GAD2006_main_Labwork2_Source_Labwork2_Public_TBPLayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATBPLayerController, ATBPLayerController::StaticClass, TEXT("ATBPLayerController"), &Z_Registration_Info_UClass_ATBPLayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATBPLayerController), 4192911034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melis_Downloads_GAD2006_main__1__GAD2006_main_Labwork2_Source_Labwork2_Public_TBPLayerController_h_967274403(TEXT("/Script/Labwork2"),
	Z_CompiledInDeferFile_FID_Users_melis_Downloads_GAD2006_main__1__GAD2006_main_Labwork2_Source_Labwork2_Public_TBPLayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melis_Downloads_GAD2006_main__1__GAD2006_main_Labwork2_Source_Labwork2_Public_TBPLayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
