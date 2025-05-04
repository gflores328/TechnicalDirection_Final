// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomTool_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CustomTool;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CustomTool()
	{
		if (!Z_Registration_Info_UPackage__Script_CustomTool.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CustomTool",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x137097E7,
				0x6A774B5B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CustomTool.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CustomTool.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CustomTool(Z_Construct_UPackage__Script_CustomTool, TEXT("/Script/CustomTool"), Z_Registration_Info_UPackage__Script_CustomTool, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x137097E7, 0x6A774B5B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
