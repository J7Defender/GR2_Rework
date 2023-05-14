// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayGameServerSDK/Public/MultiplayPayloadTokenResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayPayloadTokenResponse() {}
// Cross Module References
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse();
	UPackage* Z_Construct_UPackage__Script_MultiplayGameServerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayPayloadTokenResponse;
class UScriptStruct* FMultiplayPayloadTokenResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayPayloadTokenResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayPayloadTokenResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse, Z_Construct_UPackage__Script_MultiplayGameServerSDK(), TEXT("MultiplayPayloadTokenResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayPayloadTokenResponse.OuterSingleton;
}
template<> MULTIPLAYGAMESERVERSDK_API UScriptStruct* StaticStruct<FMultiplayPayloadTokenResponse>()
{
	return FMultiplayPayloadTokenResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayPayloadTokenResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayPayloadTokenResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "Multiplay | PayloadToken" },
		{ "Comment", "/* JWT Token string associated to payload requests */" },
		{ "ModuleRelativePath", "Public/MultiplayPayloadTokenResponse.h" },
		{ "ToolTip", "JWT Token string associated to payload requests" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayPayloadTokenResponse, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "Multiplay | PayloadToken" },
		{ "Comment", "/* Internal multiplay error occurred retrieving the JWT */" },
		{ "ModuleRelativePath", "Public/MultiplayPayloadTokenResponse.h" },
		{ "ToolTip", "Internal multiplay error occurred retrieving the JWT" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayPayloadTokenResponse, Error), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewProp_Error_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewProp_Token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewProp_Error,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK,
		nullptr,
		&NewStructOps,
		"MultiplayPayloadTokenResponse",
		sizeof(FMultiplayPayloadTokenResponse),
		alignof(FMultiplayPayloadTokenResponse),
		Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayPayloadTokenResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayPayloadTokenResponse.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayPayloadTokenResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayPayloadTokenResponse_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayPayloadTokenResponse_h_Statics::ScriptStructInfo[] = {
		{ FMultiplayPayloadTokenResponse::StaticStruct, Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse_Statics::NewStructOps, TEXT("MultiplayPayloadTokenResponse"), &Z_Registration_Info_UScriptStruct_MultiplayPayloadTokenResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayPayloadTokenResponse), 2089432776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayPayloadTokenResponse_h_1456886320(TEXT("/Script/MultiplayGameServerSDK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayPayloadTokenResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayPayloadTokenResponse_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
