// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayGameServerSDK/Public/MultiplayDeallocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayDeallocation() {}
// Cross Module References
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayDeallocation();
	UPackage* Z_Construct_UPackage__Script_MultiplayGameServerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayDeallocation;
class UScriptStruct* FMultiplayDeallocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayDeallocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayDeallocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayDeallocation, Z_Construct_UPackage__Script_MultiplayGameServerSDK(), TEXT("MultiplayDeallocation"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayDeallocation.OuterSingleton;
}
template<> MULTIPLAYGAMESERVERSDK_API UScriptStruct* StaticStruct<FMultiplayDeallocation>()
{
	return FMultiplayDeallocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerId_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ServerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllocationId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Multiplay deallocation for the server.\n */" },
		{ "ModuleRelativePath", "Public/MultiplayDeallocation.h" },
		{ "ToolTip", "The Multiplay deallocation for the server." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayDeallocation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_EventId_MetaData[] = {
		{ "Category", "Multiplay | Deallocation" },
		{ "Comment", "/**\n     * The event ID for the deallocation.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayDeallocation.h" },
		{ "ToolTip", "The event ID for the deallocation." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayDeallocation, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_EventId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_ServerId_MetaData[] = {
		{ "Category", "Multiplay | Deallocation" },
		{ "Comment", "/**\n     * The server ID for the deallocation.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayDeallocation.h" },
		{ "ToolTip", "The server ID for the deallocation." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_ServerId = { "ServerId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayDeallocation, ServerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_ServerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_ServerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_AllocationId_MetaData[] = {
		{ "Category", "Multiplay | Deallocation" },
		{ "Comment", "/**\n     * The ID for the deallocation.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayDeallocation.h" },
		{ "ToolTip", "The ID for the deallocation." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_AllocationId = { "AllocationId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayDeallocation, AllocationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_AllocationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_AllocationId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_EventId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_ServerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewProp_AllocationId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK,
		nullptr,
		&NewStructOps,
		"MultiplayDeallocation",
		sizeof(FMultiplayDeallocation),
		alignof(FMultiplayDeallocation),
		Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayDeallocation()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayDeallocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayDeallocation.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayDeallocation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayDeallocation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayDeallocation_h_Statics::ScriptStructInfo[] = {
		{ FMultiplayDeallocation::StaticStruct, Z_Construct_UScriptStruct_FMultiplayDeallocation_Statics::NewStructOps, TEXT("MultiplayDeallocation"), &Z_Registration_Info_UScriptStruct_MultiplayDeallocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayDeallocation), 1024510129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayDeallocation_h_831719354(TEXT("/Script/MultiplayGameServerSDK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayDeallocation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayDeallocation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
