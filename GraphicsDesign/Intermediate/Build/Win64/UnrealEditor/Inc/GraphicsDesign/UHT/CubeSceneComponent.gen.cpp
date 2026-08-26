// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsDesign/CubeSceneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeSceneComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GRAPHICSDESIGN_API UClass* Z_Construct_UClass_UCubeSceneComponent();
GRAPHICSDESIGN_API UClass* Z_Construct_UClass_UCubeSceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GraphicsDesign();
// End Cross Module References

// Begin Class UCubeSceneComponent
void UCubeSceneComponent::StaticRegisterNativesUCubeSceneComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeSceneComponent);
UClass* Z_Construct_UClass_UCubeSceneComponent_NoRegister()
{
	return UCubeSceneComponent::StaticClass();
}
struct Z_Construct_UClass_UCubeSceneComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Material Swapper" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CubeSceneComponent.h" },
		{ "ModuleRelativePath", "CubeSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshMaterialIndex_MetaData[] = {
		{ "Category", "CubeSceneComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of material slot to change */" },
#endif
		{ "ModuleRelativePath", "CubeSceneComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of material slot to change" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "CubeSceneComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of materials to cycle through */" },
#endif
		{ "ModuleRelativePath", "CubeSceneComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of materials to cycle through" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapInterval_MetaData[] = {
		{ "Category", "CubeSceneComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time in seconds between each material change */" },
#endif
		{ "ModuleRelativePath", "CubeSceneComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time in seconds between each material change" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshComponent_MetaData[] = {
		{ "ModuleRelativePath", "CubeSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMeshMaterialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwapInterval;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeSceneComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCubeSceneComponent_Statics::NewProp_TargetMeshMaterialIndex = { "TargetMeshMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeSceneComponent, TargetMeshMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshMaterialIndex_MetaData), NewProp_TargetMeshMaterialIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubeSceneComponent_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCubeSceneComponent_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeSceneComponent, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeSceneComponent_Statics::NewProp_SwapInterval = { "SwapInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeSceneComponent, SwapInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapInterval_MetaData), NewProp_SwapInterval_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCubeSceneComponent_Statics::NewProp_TargetMeshComponent = { "TargetMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeSceneComponent, TargetMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshComponent_MetaData), NewProp_TargetMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeSceneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSceneComponent_Statics::NewProp_TargetMeshMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSceneComponent_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSceneComponent_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSceneComponent_Statics::NewProp_SwapInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSceneComponent_Statics::NewProp_TargetMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSceneComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCubeSceneComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GraphicsDesign,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSceneComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeSceneComponent_Statics::ClassParams = {
	&UCubeSceneComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCubeSceneComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSceneComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSceneComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCubeSceneComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCubeSceneComponent()
{
	if (!Z_Registration_Info_UClass_UCubeSceneComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeSceneComponent.OuterSingleton, Z_Construct_UClass_UCubeSceneComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCubeSceneComponent.OuterSingleton;
}
template<> GRAPHICSDESIGN_API UClass* StaticClass<UCubeSceneComponent>()
{
	return UCubeSceneComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeSceneComponent);
UCubeSceneComponent::~UCubeSceneComponent() {}
// End Class UCubeSceneComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s258033_Documents_Unreal_Projects_GraphicsDesign_Source_GraphicsDesign_CubeSceneComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCubeSceneComponent, UCubeSceneComponent::StaticClass, TEXT("UCubeSceneComponent"), &Z_Registration_Info_UClass_UCubeSceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeSceneComponent), 2572960412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s258033_Documents_Unreal_Projects_GraphicsDesign_Source_GraphicsDesign_CubeSceneComponent_h_290803939(TEXT("/Script/GraphicsDesign"),
	Z_CompiledInDeferFile_FID_Users_s258033_Documents_Unreal_Projects_GraphicsDesign_Source_GraphicsDesign_CubeSceneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s258033_Documents_Unreal_Projects_GraphicsDesign_Source_GraphicsDesign_CubeSceneComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
