// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayGameServerSDK/Public/MultiplayPayloadAllocationErrorResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayPayloadAllocationErrorResponse() {}
// Cross Module References
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse();
	UPackage* Z_Construct_UPackage__Script_MultiplayGameServerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiplayPayloadAllocationErrorResponse;
class UScriptStruct* FMultiplayPayloadAllocationErrorResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiplayPayloadAllocationErrorResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiplayPayloadAllocationErrorResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse, Z_Construct_UPackage__Script_MultiplayGameServerSDK(), TEXT("MultiplayPayloadAllocationErrorResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MultiplayPayloadAllocationErrorResponse.OuterSingleton;
}
template<> MULTIPLAYGAMESERVERSDK_API UScriptStruct* StaticStruct<FMultiplayPayloadAllocationErrorResponse>()
{
	return FMultiplayPayloadAllocationErrorResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static void NewProp_Error_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayPayloadAllocationErrorResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayPayloadAllocationErrorResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "Multiplay | Errors" },
		{ "Comment", "/* the call went through successfully */" },
		{ "ModuleRelativePath", "Public/MultiplayPayloadAllocationErrorResponse.h" },
		{ "ToolTip", "the call went through successfully" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FMultiplayPayloadAllocationErrorResponse*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMultiplayPayloadAllocationErrorResponse), &Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "Multiplay | Errors" },
		{ "Comment", "/* there exists an error */" },
		{ "ModuleRelativePath", "Public/MultiplayPayloadAllocationErrorResponse.h" },
		{ "ToolTip", "there exists an error" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Error_SetBit(void* Obj)
	{
		((FMultiplayPayloadAllocationErrorResponse*)Obj)->Error = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMultiplayPayloadAllocationErrorResponse), &Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Error_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "Category", "Multiplay | Errors" },
		{ "Comment", "/* code of the error */" },
		{ "ModuleRelativePath", "Public/MultiplayPayloadAllocationErrorResponse.h" },
		{ "ToolTip", "code of the error" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayPayloadAllocationErrorResponse, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Multiplay | Errors" },
		{ "Comment", "/* a message describing the error */" },
		{ "ModuleRelativePath", "Public/MultiplayPayloadAllocationErrorResponse.h" },
		{ "ToolTip", "a message describing the error" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiplayPayloadAllocationErrorResponse, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewProp_ErrorMessage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK,
		nullptr,
		&NewStructOps,
		"MultiplayPayloadAllocationErrorResponse",
		sizeof(FMultiplayPayloadAllocationErrorResponse),
		alignof(FMultiplayPayloadAllocationErrorResponse),
		Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiplayPayloadAllocationErrorResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiplayPayloadAllocationErrorResponse.InnerSingleton, Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiplayPayloadAllocationErrorResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayPayloadAllocationErrorResponse_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayPayloadAllocationErrorResponse_h_Statics::ScriptStructInfo[] = {
		{ FMultiplayPayloadAllocationErrorResponse::StaticStruct, Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse_Statics::NewStructOps, TEXT("MultiplayPayloadAllocationErrorResponse"), &Z_Registration_Info_UScriptStruct_MultiplayPayloadAllocationErrorResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiplayPayloadAllocationErrorResponse), 3256018961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayPayloadAllocationErrorResponse_h_2954695778(TEXT("/Script/MultiplayGameServerSDK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayPayloadAllocationErrorResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayPayloadAllocationErrorResponse_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
