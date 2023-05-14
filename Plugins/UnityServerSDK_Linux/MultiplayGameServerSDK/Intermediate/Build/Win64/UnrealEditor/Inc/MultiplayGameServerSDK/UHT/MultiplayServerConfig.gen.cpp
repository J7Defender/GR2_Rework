// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayGameServerSDK/Public/MultiplayServerConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayServerConfig() {}
// Cross Module References
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayServerConfig();
	UPackage* Z_Construct_UPackage__Script_MultiplayGameServerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayServerConfig;
class UScriptStruct* FMultiplayServerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayServerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayServerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayServerConfig, Z_Construct_UPackage__Script_MultiplayGameServerSDK(), TEXT("MultiplayServerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayServerConfig.OuterSingleton;
}
template<> MULTIPLAYGAMESERVERSDK_API UScriptStruct* StaticStruct<FMultiplayServerConfig>()
{
	return FMultiplayServerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerId_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ServerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllocationId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerLogDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerLogDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The server configuration for the current session.\n */" },
		{ "ModuleRelativePath", "Public/MultiplayServerConfig.h" },
		{ "ToolTip", "The server configuration for the current session." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayServerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_ServerId_MetaData[] = {
		{ "Category", "Multiplay | ServerConfig" },
		{ "Comment", "/**\n     * The server ID.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerConfig.h" },
		{ "ToolTip", "The server ID." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_ServerId = { "ServerId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayServerConfig, ServerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_ServerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_ServerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_AllocationId_MetaData[] = {
		{ "Category", "Multiplay | ServerConfig" },
		{ "Comment", "/**\n     * The allocation ID.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerConfig.h" },
		{ "ToolTip", "The allocation ID." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_AllocationId = { "AllocationId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayServerConfig, AllocationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_AllocationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_AllocationId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_QueryPort_MetaData[] = {
		{ "Category", "Multiplay | ServerConfig" },
		{ "Comment", "/**\n     * The Server Query Protocol Port.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerConfig.h" },
		{ "ToolTip", "The Server Query Protocol Port." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayServerConfig, QueryPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_QueryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_QueryPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Multiplay | ServerConfig" },
		{ "Comment", "/**\n     *  The connection port for the session.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerConfig.h" },
		{ "ToolTip", "The connection port for the session." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayServerConfig, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_ServerLogDirectory_MetaData[] = {
		{ "Category", "Multiplay | ServerConfig" },
		{ "Comment", "/**\n     * The directory logs will be written to.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerConfig.h" },
		{ "ToolTip", "The directory logs will be written to." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_ServerLogDirectory = { "ServerLogDirectory", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayServerConfig, ServerLogDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_ServerLogDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_ServerLogDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_ServerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_AllocationId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_QueryPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewProp_ServerLogDirectory,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK,
		nullptr,
		&NewStructOps,
		"MultiplayServerConfig",
		sizeof(FMultiplayServerConfig),
		alignof(FMultiplayServerConfig),
		Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayServerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayServerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayServerConfig.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayServerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerConfig_h_Statics::ScriptStructInfo[] = {
		{ FMultiplayServerConfig::StaticStruct, Z_Construct_UScriptStruct_FMultiplayServerConfig_Statics::NewStructOps, TEXT("MultiplayServerConfig"), &Z_Registration_Info_UScriptStruct_MultiplayServerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayServerConfig), 2924518429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerConfig_h_114998219(TEXT("/Script/MultiplayGameServerSDK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
