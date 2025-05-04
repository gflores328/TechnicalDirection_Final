// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomTool/Private/StaticMeshOrganizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshOrganizer() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityComboBoxString_NoRegister();
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
CUSTOMTOOL_API UClass* Z_Construct_UClass_UStaticMeshOrganizer();
CUSTOMTOOL_API UClass* Z_Construct_UClass_UStaticMeshOrganizer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UPackage* Z_Construct_UPackage__Script_CustomTool();
// End Cross Module References

// Begin Class UStaticMeshOrganizer Function OnMeshSelected
struct Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics
{
	struct StaticMeshOrganizer_eventOnMeshSelected_Parms
	{
		FString MeshName;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StaticMesh Selector" },
		{ "ModuleRelativePath", "Private/StaticMeshOrganizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOrganizer_eventOnMeshSelected_Parms, MeshName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshOrganizer_eventOnMeshSelected_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshOrganizer, nullptr, "OnMeshSelected", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::StaticMeshOrganizer_eventOnMeshSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::StaticMeshOrganizer_eventOnMeshSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshOrganizer::execOnMeshSelected)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMeshSelected(Z_Param_MeshName,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// End Class UStaticMeshOrganizer Function OnMeshSelected

// Begin Class UStaticMeshOrganizer Function OrganizeActors
struct Z_Construct_UFunction_UStaticMeshOrganizer_OrganizeActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StaticMesh Selector" },
		{ "ModuleRelativePath", "Private/StaticMeshOrganizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshOrganizer_OrganizeActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshOrganizer, nullptr, "OrganizeActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOrganizer_OrganizeActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshOrganizer_OrganizeActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStaticMeshOrganizer_OrganizeActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshOrganizer_OrganizeActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshOrganizer::execOrganizeActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OrganizeActors();
	P_NATIVE_END;
}
// End Class UStaticMeshOrganizer Function OrganizeActors

// Begin Class UStaticMeshOrganizer Function PopulateComboBox
struct Z_Construct_UFunction_UStaticMeshOrganizer_PopulateComboBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StaticMesh Selector" },
		{ "ModuleRelativePath", "Private/StaticMeshOrganizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshOrganizer_PopulateComboBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshOrganizer, nullptr, "PopulateComboBox", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshOrganizer_PopulateComboBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshOrganizer_PopulateComboBox_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStaticMeshOrganizer_PopulateComboBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshOrganizer_PopulateComboBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshOrganizer::execPopulateComboBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopulateComboBox();
	P_NATIVE_END;
}
// End Class UStaticMeshOrganizer Function PopulateComboBox

// Begin Class UStaticMeshOrganizer
void UStaticMeshOrganizer::StaticRegisterNativesUStaticMeshOrganizer()
{
	UClass* Class = UStaticMeshOrganizer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMeshSelected", &UStaticMeshOrganizer::execOnMeshSelected },
		{ "OrganizeActors", &UStaticMeshOrganizer::execOrganizeActors },
		{ "PopulateComboBox", &UStaticMeshOrganizer::execPopulateComboBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshOrganizer);
UClass* Z_Construct_UClass_UStaticMeshOrganizer_NoRegister()
{
	return UStaticMeshOrganizer::StaticClass();
}
struct Z_Construct_UClass_UStaticMeshOrganizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StaticMeshOrganizer.h" },
		{ "ModuleRelativePath", "Private/StaticMeshOrganizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[] = {
		{ "ModuleRelativePath", "Private/StaticMeshOrganizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/StaticMeshOrganizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/StaticMeshOrganizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroupButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComboBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshOrganizer_OnMeshSelected, "OnMeshSelected" }, // 4255212416
		{ &Z_Construct_UFunction_UStaticMeshOrganizer_OrganizeActors, "OrganizeActors" }, // 410529847
		{ &Z_Construct_UFunction_UStaticMeshOrganizer_PopulateComboBox, "PopulateComboBox" }, // 3364355532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshOrganizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshOrganizer_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshOrganizer, TargetMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMesh_MetaData), NewProp_TargetMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshOrganizer_Statics::NewProp_GroupButton = { "GroupButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshOrganizer, GroupButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupButton_MetaData), NewProp_GroupButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshOrganizer_Statics::NewProp_StaticMeshComboBox = { "StaticMeshComboBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshOrganizer, StaticMeshComboBox), Z_Construct_UClass_UEditorUtilityComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComboBox_MetaData), NewProp_StaticMeshComboBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshOrganizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshOrganizer_Statics::NewProp_TargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshOrganizer_Statics::NewProp_GroupButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshOrganizer_Statics::NewProp_StaticMeshComboBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshOrganizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStaticMeshOrganizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshOrganizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshOrganizer_Statics::ClassParams = {
	&UStaticMeshOrganizer::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStaticMeshOrganizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshOrganizer_Statics::PropPointers),
	0,
	0x00A010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshOrganizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaticMeshOrganizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaticMeshOrganizer()
{
	if (!Z_Registration_Info_UClass_UStaticMeshOrganizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshOrganizer.OuterSingleton, Z_Construct_UClass_UStaticMeshOrganizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaticMeshOrganizer.OuterSingleton;
}
template<> CUSTOMTOOL_API UClass* StaticClass<UStaticMeshOrganizer>()
{
	return UStaticMeshOrganizer::StaticClass();
}
UStaticMeshOrganizer::UStaticMeshOrganizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshOrganizer);
UStaticMeshOrganizer::~UStaticMeshOrganizer() {}
// End Class UStaticMeshOrganizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Gabe_Documents_GitHub_TechnicalDirection_Final_TechDirection_Final_Source_CustomTool_Private_StaticMeshOrganizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshOrganizer, UStaticMeshOrganizer::StaticClass, TEXT("UStaticMeshOrganizer"), &Z_Registration_Info_UClass_UStaticMeshOrganizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshOrganizer), 4217100090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Gabe_Documents_GitHub_TechnicalDirection_Final_TechDirection_Final_Source_CustomTool_Private_StaticMeshOrganizer_h_1205952533(TEXT("/Script/CustomTool"),
	Z_CompiledInDeferFile_FID_Users_Gabe_Documents_GitHub_TechnicalDirection_Final_TechDirection_Final_Source_CustomTool_Private_StaticMeshOrganizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Gabe_Documents_GitHub_TechnicalDirection_Final_TechDirection_Final_Source_CustomTool_Private_StaticMeshOrganizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
