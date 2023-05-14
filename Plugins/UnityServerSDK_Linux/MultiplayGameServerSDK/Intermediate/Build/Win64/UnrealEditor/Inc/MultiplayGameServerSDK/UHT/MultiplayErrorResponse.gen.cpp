// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayGameServerSDK/Public/MultiplayErrorResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayErrorResponse() {}
// Cross Module References
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayErrorResponse();
	UPackage* Z_Construct_UPackage__Script_MultiplayGameServerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayErrorResponse;
class UScriptStruct* FMultiplayErrorResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayErrorResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayErrorResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayErrorResponse, Z_Construct_UPackage__Script_MultiplayGameServerSDK(), TEXT("MultiplayErrorResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayErrorResponse.OuterSingleton;
}
template<> MULTIPLAYGAMESERVERSDK_API UScriptStruct* StaticStruct<FMultiplayErrorResponse>()
{
	return FMultiplayErrorResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Detail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayErrorResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayErrorResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Multiplay | Errors" },
		{ "Comment", "/* MUST use the same status code in the actual HTTP response. */" },
		{ "ModuleRelativePath", "Public/MultiplayErrorResponse.h" },
		{ "ToolTip", "MUST use the same status code in the actual HTTP response." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayErrorResponse, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Detail_MetaData[] = {
		{ "Category", "Multiplay | Errors" },
		{ "Comment", "/* A human-readable explanation specific to this occurrence of the problem. Ought to focus on helping the client correct the problem, rather than giving debugging information. */" },
		{ "ModuleRelativePath", "Public/MultiplayErrorResponse.h" },
		{ "ToolTip", "A human-readable explanation specific to this occurrence of the problem. Ought to focus on helping the client correct the problem, rather than giving debugging information." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayErrorResponse, Detail), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Detail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Detail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Multiplay | Errors" },
		{ "Comment", "/* SHOULD be the same as the recommended HTTP status phrase for that code. */" },
		{ "ModuleRelativePath", "Public/MultiplayErrorResponse.h" },
		{ "ToolTip", "SHOULD be the same as the recommended HTTP status phrase for that code." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayErrorResponse, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Title_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Detail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewProp_Title,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK,
		nullptr,
		&NewStructOps,
		"MultiplayErrorResponse",
		sizeof(FMultiplayErrorResponse),
		alignof(FMultiplayErrorResponse),
		Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayErrorResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayErrorResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayErrorResponse.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayErrorResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayErrorResponse_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayErrorResponse_h_Statics::ScriptStructInfo[] = {
		{ FMultiplayErrorResponse::StaticStruct, Z_Construct_UScriptStruct_FMultiplayErrorResponse_Statics::NewStructOps, TEXT("MultiplayErrorResponse"), &Z_Registration_Info_UScriptStruct_MultiplayErrorResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayErrorResponse), 1246445119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayErrorResponse_h_264367811(TEXT("/Script/MultiplayGameServerSDK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayErrorResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayErrorResponse_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
