// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsDesign/DissolvingAnimatedSceneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDissolvingAnimatedSceneComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GRAPHICSDESIGN_API UClass* Z_Construct_UClass_UDissolvingAnimatedSceneComponent();
GRAPHICSDESIGN_API UClass* Z_Construct_UClass_UDissolvingAnimatedSceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GraphicsDesign();
// End Cross Module References

// Begin Class UDissolvingAnimatedSceneComponent Function Dissolve
struct Z_Construct_UFunction_UDissolvingAnimatedSceneComponent_Dissolve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DissolvingAnimatedSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDissolvingAnimatedSceneComponent_Dissolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDissolvingAnimatedSceneComponent, nullptr, "Dissolve", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDissolvingAnimatedSceneComponent_Dissolve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDissolvingAnimatedSceneComponent_Dissolve_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDissolvingAnimatedSceneComponent_Dissolve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDissolvingAnimatedSceneComponent_Dissolve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDissolvingAnimatedSceneComponent::execDissolve)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Dissolve();
	P_NATIVE_END;
}
// End Class UDissolvingAnimatedSceneComponent Function Dissolve

// Begin Class UDissolvingAnimatedSceneComponent
void UDissolvingAnimatedSceneComponent::StaticRegisterNativesUDissolvingAnimatedSceneComponent()
{
	UClass* Class = UDissolvingAnimatedSceneComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Dissolve", &UDissolvingAnimatedSceneComponent::execDissolve },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDissolvingAnimatedSceneComponent);
UClass* Z_Construct_UClass_UDissolvingAnimatedSceneComponent_NoRegister()
{
	return UDissolvingAnimatedSceneComponent::StaticClass();
}
struct Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Dissolve Animator" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DissolvingAnimatedSceneComponent.h" },
		{ "ModuleRelativePath", "DissolvingAnimatedSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMaterialIndex_MetaData[] = {
		{ "Category", "DissolvingAnimatedSceneComponent" },
		{ "ModuleRelativePath", "DissolvingAnimatedSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectStrengthParameterName_MetaData[] = {
		{ "Category", "DissolvingAnimatedSceneComponent" },
		{ "ModuleRelativePath", "DissolvingAnimatedSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectStartTime_MetaData[] = {
		{ "Category", "DissolvingAnimatedSceneComponent" },
		{ "ModuleRelativePath", "DissolvingAnimatedSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshComponent_MetaData[] = {
		{ "ModuleRelativePath", "DissolvingAnimatedSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDissolveMaterial_MetaData[] = {
		{ "ModuleRelativePath", "DissolvingAnimatedSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMaterialIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EffectStrengthParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EffectStartTime;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicDissolveMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDissolvingAnimatedSceneComponent_Dissolve, "Dissolve" }, // 469457
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDissolvingAnimatedSceneComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::NewProp_TargetMaterialIndex = { "TargetMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDissolvingAnimatedSceneComponent, TargetMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMaterialIndex_MetaData), NewProp_TargetMaterialIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::NewProp_EffectStrengthParameterName = { "EffectStrengthParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDissolvingAnimatedSceneComponent, EffectStrengthParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectStrengthParameterName_MetaData), NewProp_EffectStrengthParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::NewProp_EffectStartTime = { "EffectStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDissolvingAnimatedSceneComponent, EffectStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectStartTime_MetaData), NewProp_EffectStartTime_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::NewProp_TargetMeshComponent = { "TargetMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDissolvingAnimatedSceneComponent, TargetMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshComponent_MetaData), NewProp_TargetMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::NewProp_DynamicDissolveMaterial = { "DynamicDissolveMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDissolvingAnimatedSceneComponent, DynamicDissolveMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicDissolveMaterial_MetaData), NewProp_DynamicDissolveMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::NewProp_TargetMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::NewProp_EffectStrengthParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::NewProp_EffectStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::NewProp_TargetMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::NewProp_DynamicDissolveMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GraphicsDesign,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::ClassParams = {
	&UDissolvingAnimatedSceneComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDissolvingAnimatedSceneComponent()
{
	if (!Z_Registration_Info_UClass_UDissolvingAnimatedSceneComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDissolvingAnimatedSceneComponent.OuterSingleton, Z_Construct_UClass_UDissolvingAnimatedSceneComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDissolvingAnimatedSceneComponent.OuterSingleton;
}
template<> GRAPHICSDESIGN_API UClass* StaticClass<UDissolvingAnimatedSceneComponent>()
{
	return UDissolvingAnimatedSceneComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDissolvingAnimatedSceneComponent);
UDissolvingAnimatedSceneComponent::~UDissolvingAnimatedSceneComponent() {}
// End Class UDissolvingAnimatedSceneComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s258033_Documents_Unreal_Projects_GraphicsDesign_Source_GraphicsDesign_DissolvingAnimatedSceneComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDissolvingAnimatedSceneComponent, UDissolvingAnimatedSceneComponent::StaticClass, TEXT("UDissolvingAnimatedSceneComponent"), &Z_Registration_Info_UClass_UDissolvingAnimatedSceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDissolvingAnimatedSceneComponent), 3997351005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s258033_Documents_Unreal_Projects_GraphicsDesign_Source_GraphicsDesign_DissolvingAnimatedSceneComponent_h_1292224907(TEXT("/Script/GraphicsDesign"),
	Z_CompiledInDeferFile_FID_Users_s258033_Documents_Unreal_Projects_GraphicsDesign_Source_GraphicsDesign_DissolvingAnimatedSceneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s258033_Documents_Unreal_Projects_GraphicsDesign_Source_GraphicsDesign_DissolvingAnimatedSceneComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
