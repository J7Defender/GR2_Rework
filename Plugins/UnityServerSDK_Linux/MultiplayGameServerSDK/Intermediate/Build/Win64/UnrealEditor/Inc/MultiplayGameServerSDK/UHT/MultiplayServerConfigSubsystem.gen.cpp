// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayGameServerSDK/Public/MultiplayServerConfigSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "MultiplayGameServerSDK/Public/MultiplayServerConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayServerConfigSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MULTIPLAYGAMESERVERSDK_API UClass* Z_Construct_UClass_UMultiplayServerConfigSubsystem();
	MULTIPLAYGAMESERVERSDK_API UClass* Z_Construct_UClass_UMultiplayServerConfigSubsystem_NoRegister();
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayServerConfig();
	UPackage* Z_Construct_UPackage__Script_MultiplayGameServerSDK();
// End Cross Module References
	void UMultiplayServerConfigSubsystem::StaticRegisterNativesUMultiplayServerConfigSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiplayServerConfigSubsystem);
	UClass* Z_Construct_UClass_UMultiplayServerConfigSubsystem_NoRegister()
	{
		return UMultiplayServerConfigSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem responsible for retrieving the Multiplay server configuration.\n */" },
		{ "IncludePath", "MultiplayServerConfigSubsystem.h" },
		{ "ModuleRelativePath", "Public/MultiplayServerConfigSubsystem.h" },
		{ "ToolTip", "Subsystem responsible for retrieving the Multiplay server configuration." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::NewProp_ServerConfig_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Multiplay | ServerConfig" },
		{ "Comment", "/**\n     * The server configuration for the current session.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerConfigSubsystem.h" },
		{ "ToolTip", "The server configuration for the current session." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::NewProp_ServerConfig = { "ServerConfig", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayServerConfigSubsystem, ServerConfig), Z_Construct_UScriptStruct_FMultiplayServerConfig, METADATA_PARAMS(Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::NewProp_ServerConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::NewProp_ServerConfig_MetaData)) }; // 2924518429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::NewProp_ServerConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayServerConfigSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::ClassParams = {
		&UMultiplayServerConfigSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiplayServerConfigSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMultiplayServerConfigSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayServerConfigSubsystem.OuterSingleton, Z_Construct_UClass_UMultiplayServerConfigSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiplayServerConfigSubsystem.OuterSingleton;
	}
	template<> MULTIPLAYGAMESERVERSDK_API UClass* StaticClass<UMultiplayServerConfigSubsystem>()
	{
		return UMultiplayServerConfigSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayServerConfigSubsystem);
	UMultiplayServerConfigSubsystem::~UMultiplayServerConfigSubsystem() {}
	struct Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerConfigSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerConfigSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayServerConfigSubsystem, UMultiplayServerConfigSubsystem::StaticClass, TEXT("UMultiplayServerConfigSubsystem"), &Z_Registration_Info_UClass_UMultiplayServerConfigSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayServerConfigSubsystem), 323974554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerConfigSubsystem_h_3748803095(TEXT("/Script/MultiplayGameServerSDK"),
		Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerConfigSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerConfigSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
