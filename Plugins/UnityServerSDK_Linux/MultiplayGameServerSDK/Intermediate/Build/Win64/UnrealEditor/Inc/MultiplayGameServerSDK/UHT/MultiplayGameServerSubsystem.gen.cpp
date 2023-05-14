// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayGameServerSDK/Public/MultiplayGameServerSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "MultiplayGameServerSDK/Public/MultiplayAllocation.h"
#include "MultiplayGameServerSDK/Public/MultiplayDeallocation.h"
#include "MultiplayGameServerSDK/Public/MultiplayErrorResponse.h"
#include "MultiplayGameServerSDK/Public/MultiplayPayloadAllocationErrorResponse.h"
#include "MultiplayGameServerSDK/Public/MultiplayPayloadTokenResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayGameServerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MULTIPLAYGAMESERVERSDK_API UClass* Z_Construct_UClass_UMultiplayGameServerSubsystem();
	MULTIPLAYGAMESERVERSDK_API UClass* Z_Construct_UClass_UMultiplayGameServerSubsystem_NoRegister();
	MULTIPLAYGAMESERVERSDK_API UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature();
	MULTIPLAYGAMESERVERSDK_API UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature();
	MULTIPLAYGAMESERVERSDK_API UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature();
	MULTIPLAYGAMESERVERSDK_API UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature();
	MULTIPLAYGAMESERVERSDK_API UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature();
	MULTIPLAYGAMESERVERSDK_API UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature();
	MULTIPLAYGAMESERVERSDK_API UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature();
	MULTIPLAYGAMESERVERSDK_API UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature();
	MULTIPLAYGAMESERVERSDK_API UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature();
	MULTIPLAYGAMESERVERSDK_API UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature();
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayAllocation();
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayDeallocation();
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayErrorResponse();
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse();
	MULTIPLAYGAMESERVERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse();
	UPackage* Z_Construct_UPackage__Script_MultiplayGameServerSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics
	{
		struct _Script_MultiplayGameServerSDK_eventAllocateDelegate_Parms
		{
			FMultiplayAllocation Allocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Allocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::NewProp_Allocation = { "Allocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiplayGameServerSDK_eventAllocateDelegate_Parms, Allocation), Z_Construct_UScriptStruct_FMultiplayAllocation, METADATA_PARAMS(nullptr, 0) }; // 3439519519
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::NewProp_Allocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK, nullptr, "AllocateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::_Script_MultiplayGameServerSDK_eventAllocateDelegate_Parms), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics
	{
		struct _Script_MultiplayGameServerSDK_eventDeallocateDelegate_Parms
		{
			FMultiplayDeallocation Deallocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Deallocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::NewProp_Deallocation = { "Deallocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiplayGameServerSDK_eventDeallocateDelegate_Parms, Deallocation), Z_Construct_UScriptStruct_FMultiplayDeallocation, METADATA_PARAMS(nullptr, 0) }; // 1024510129
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::NewProp_Deallocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK, nullptr, "DeallocateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::_Script_MultiplayGameServerSDK_eventDeallocateDelegate_Parms), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK, nullptr, "ReadyServerSuccessDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics
	{
		struct _Script_MultiplayGameServerSDK_eventReadyServerFailureDelegate_Parms
		{
			FMultiplayErrorResponse ErrorResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::NewProp_ErrorResponse = { "ErrorResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiplayGameServerSDK_eventReadyServerFailureDelegate_Parms, ErrorResponse), Z_Construct_UScriptStruct_FMultiplayErrorResponse, METADATA_PARAMS(nullptr, 0) }; // 1246445119
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::NewProp_ErrorResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK, nullptr, "ReadyServerFailureDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::_Script_MultiplayGameServerSDK_eventReadyServerFailureDelegate_Parms), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK, nullptr, "UnreadyServerSuccessDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics
	{
		struct _Script_MultiplayGameServerSDK_eventUnreadyServerFailureDelegate_Parms
		{
			FMultiplayErrorResponse ErrorResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::NewProp_ErrorResponse = { "ErrorResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiplayGameServerSDK_eventUnreadyServerFailureDelegate_Parms, ErrorResponse), Z_Construct_UScriptStruct_FMultiplayErrorResponse, METADATA_PARAMS(nullptr, 0) }; // 1246445119
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::NewProp_ErrorResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK, nullptr, "UnreadyServerFailureDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::_Script_MultiplayGameServerSDK_eventUnreadyServerFailureDelegate_Parms), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_MultiplayGameServerSDK_eventPayloadAllocationSuccessDelegate_Parms
		{
			FString Payload;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiplayGameServerSDK_eventPayloadAllocationSuccessDelegate_Parms, Payload), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK, nullptr, "PayloadAllocationSuccessDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::_Script_MultiplayGameServerSDK_eventPayloadAllocationSuccessDelegate_Parms), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics
	{
		struct _Script_MultiplayGameServerSDK_eventPayloadAllocationFailureDelegate_Parms
		{
			FMultiplayPayloadAllocationErrorResponse ErrorResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::NewProp_ErrorResponse = { "ErrorResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiplayGameServerSDK_eventPayloadAllocationFailureDelegate_Parms, ErrorResponse), Z_Construct_UScriptStruct_FMultiplayPayloadAllocationErrorResponse, METADATA_PARAMS(nullptr, 0) }; // 3256018961
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::NewProp_ErrorResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK, nullptr, "PayloadAllocationFailureDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::_Script_MultiplayGameServerSDK_eventPayloadAllocationFailureDelegate_Parms), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_MultiplayGameServerSDK_eventPayloadTokenSuccessDelegate_Parms
		{
			FMultiplayPayloadTokenResponse TokenResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TokenResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::NewProp_TokenResponse = { "TokenResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiplayGameServerSDK_eventPayloadTokenSuccessDelegate_Parms, TokenResponse), Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse, METADATA_PARAMS(nullptr, 0) }; // 2089432776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::NewProp_TokenResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK, nullptr, "PayloadTokenSuccessDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::_Script_MultiplayGameServerSDK_eventPayloadTokenSuccessDelegate_Parms), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics
	{
		struct _Script_MultiplayGameServerSDK_eventPayloadTokenFailureDelegate_Parms
		{
			FMultiplayPayloadTokenResponse ErrorResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::NewProp_ErrorResponse = { "ErrorResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiplayGameServerSDK_eventPayloadTokenFailureDelegate_Parms, ErrorResponse), Z_Construct_UScriptStruct_FMultiplayPayloadTokenResponse, METADATA_PARAMS(nullptr, 0) }; // 2089432776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::NewProp_ErrorResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK, nullptr, "PayloadTokenFailureDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::_Script_MultiplayGameServerSDK_eventPayloadTokenFailureDelegate_Parms), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMultiplayGameServerSubsystem::execGetPayloadToken)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPayloadToken(FPayloadTokenSuccessDelegate(Z_Param_OnSuccess),FPayloadTokenFailureDelegate(Z_Param_OnFailure));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayGameServerSubsystem::execGetPayloadAllocation)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPayloadAllocation(FPayloadAllocationSuccessDelegate(Z_Param_OnSuccess),FPayloadAllocationFailureDelegate(Z_Param_OnFailure));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayGameServerSubsystem::execUnsubscribeToServerEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribeToServerEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayGameServerSubsystem::execSubscribeToServerEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeToServerEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayGameServerSubsystem::execUnreadyServer)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnreadyServer(FUnreadyServerSuccessDelegate(Z_Param_OnSuccess),FUnreadyServerFailureDelegate(Z_Param_OnFailure));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayGameServerSubsystem::execReadyServerForPlayers)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadyServerForPlayers(FReadyServerSuccessDelegate(Z_Param_OnSuccess),FReadyServerFailureDelegate(Z_Param_OnFailure));
		P_NATIVE_END;
	}
	void UMultiplayGameServerSubsystem::StaticRegisterNativesUMultiplayGameServerSubsystem()
	{
		UClass* Class = UMultiplayGameServerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPayloadAllocation", &UMultiplayGameServerSubsystem::execGetPayloadAllocation },
			{ "GetPayloadToken", &UMultiplayGameServerSubsystem::execGetPayloadToken },
			{ "ReadyServerForPlayers", &UMultiplayGameServerSubsystem::execReadyServerForPlayers },
			{ "SubscribeToServerEvents", &UMultiplayGameServerSubsystem::execSubscribeToServerEvents },
			{ "UnreadyServer", &UMultiplayGameServerSubsystem::execUnreadyServer },
			{ "UnsubscribeToServerEvents", &UMultiplayGameServerSubsystem::execUnsubscribeToServerEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics
	{
		struct MultiplayGameServerSubsystem_eventGetPayloadAllocation_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnFailure;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayGameServerSubsystem_eventGetPayloadAllocation_Parms, OnSuccess), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3792486661
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayGameServerSubsystem_eventGetPayloadAllocation_Parms, OnFailure), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4280390415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::NewProp_OnFailure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | GameServer" },
		{ "Comment", "/**\n\x09 * @brief Retrieves the allocation payload.\n\x09 * @param OnSuccess This delegate will be invoked if the operation completes successfully.\n\x09 * @param OnFailure This delegate will be invoked if the operation is unsuccessful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "@brief Retrieves the allocation payload.\n@param OnSuccess This delegate will be invoked if the operation completes successfully.\n@param OnFailure This delegate will be invoked if the operation is unsuccessful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayGameServerSubsystem, nullptr, "GetPayloadAllocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::MultiplayGameServerSubsystem_eventGetPayloadAllocation_Parms), Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics
	{
		struct MultiplayGameServerSubsystem_eventGetPayloadToken_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnFailure;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayGameServerSubsystem_eventGetPayloadToken_Parms, OnSuccess), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2329375806
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayGameServerSubsystem_eventGetPayloadToken_Parms, OnFailure), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3600257545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::NewProp_OnFailure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | GameServer" },
		{ "Comment", "/**\n\x09 * @brief Retrieves a JWT token for payloads.\n\x09 * @param OnSuccess This delegate will be invoked if the operation completes successfully.\n\x09 * @param OnFailure This delegate will be invoked if the operation is unsuccessful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "@brief Retrieves a JWT token for payloads.\n@param OnSuccess This delegate will be invoked if the operation completes successfully.\n@param OnFailure This delegate will be invoked if the operation is unsuccessful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayGameServerSubsystem, nullptr, "GetPayloadToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::MultiplayGameServerSubsystem_eventGetPayloadToken_Parms), Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics
	{
		struct MultiplayGameServerSubsystem_eventReadyServerForPlayers_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnFailure;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayGameServerSubsystem_eventReadyServerForPlayers_Parms, OnSuccess), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3517063544
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayGameServerSubsystem_eventReadyServerForPlayers_Parms, OnFailure), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3931647513
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::NewProp_OnFailure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | GameServer" },
		{ "Comment", "/**\n\x09 * @brief Marks the server as ready for players. The client invokes this method when it is ready to start accepting connections. \n\x09 * @param OnSuccess This delegate will be invoked if the operation completes successfully.\n\x09 * @param OnFailure This delegate will be invoked if the operation is unsuccessful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "@brief Marks the server as ready for players. The client invokes this method when it is ready to start accepting connections.\n@param OnSuccess This delegate will be invoked if the operation completes successfully.\n@param OnFailure This delegate will be invoked if the operation is unsuccessful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayGameServerSubsystem, nullptr, "ReadyServerForPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::MultiplayGameServerSubsystem_eventReadyServerForPlayers_Parms), Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayGameServerSubsystem_SubscribeToServerEvents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayGameServerSubsystem_SubscribeToServerEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | GameServer" },
		{ "Comment", "/**\n\x09 * @brief Establishes a connection to the Multiplay SDK daemon and subscribes to allocation messages.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "@brief Establishes a connection to the Multiplay SDK daemon and subscribes to allocation messages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_SubscribeToServerEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayGameServerSubsystem, nullptr, "SubscribeToServerEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayGameServerSubsystem_SubscribeToServerEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayGameServerSubsystem_SubscribeToServerEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayGameServerSubsystem_SubscribeToServerEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayGameServerSubsystem_SubscribeToServerEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics
	{
		struct MultiplayGameServerSubsystem_eventUnreadyServer_Parms
		{
			FScriptDelegate OnSuccess;
			FScriptDelegate OnFailure;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayGameServerSubsystem_eventUnreadyServer_Parms, OnSuccess), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4094976265
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayGameServerSubsystem_eventUnreadyServer_Parms, OnFailure), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1219861852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::NewProp_OnFailure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | GameServer" },
		{ "Comment", "/**\n\x09 * @brief Marks the server as not ready for players. The client invokes this method when wants to stop accepting connections.\n\x09 * @param OnSuccess This delegate will be invoked if the operation completes successfully.\n\x09 * @param OnFailure This delegate will be invoked if the operation is unsuccessful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "@brief Marks the server as not ready for players. The client invokes this method when wants to stop accepting connections.\n@param OnSuccess This delegate will be invoked if the operation completes successfully.\n@param OnFailure This delegate will be invoked if the operation is unsuccessful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayGameServerSubsystem, nullptr, "UnreadyServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::MultiplayGameServerSubsystem_eventUnreadyServer_Parms), Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnsubscribeToServerEvents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnsubscribeToServerEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | GameServer" },
		{ "Comment", "/**\n\x09 * @brief Cleans up connection to the Multiplay SDK daemon and unsubscribe from allocation messages.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "@brief Cleans up connection to the Multiplay SDK daemon and unsubscribe from allocation messages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnsubscribeToServerEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayGameServerSubsystem, nullptr, "UnsubscribeToServerEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnsubscribeToServerEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnsubscribeToServerEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnsubscribeToServerEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnsubscribeToServerEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiplayGameServerSubsystem);
	UClass* Z_Construct_UClass_UMultiplayGameServerSubsystem_NoRegister()
	{
		return UMultiplayGameServerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAllocate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllocate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeallocate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeallocate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadyServerSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnReadyServerSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadyServerFailure_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnReadyServerFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnreadyServerSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnUnreadyServerSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnreadyServerFailure_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnUnreadyServerFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPayloadAllocationSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPayloadAllocationSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPayloadAllocationFailure_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPayloadAllocationFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPayloadTokenSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPayloadTokenSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPayloadTokenFailure_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPayloadTokenFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadAllocation, "GetPayloadAllocation" }, // 344511368
		{ &Z_Construct_UFunction_UMultiplayGameServerSubsystem_GetPayloadToken, "GetPayloadToken" }, // 3669622144
		{ &Z_Construct_UFunction_UMultiplayGameServerSubsystem_ReadyServerForPlayers, "ReadyServerForPlayers" }, // 2979060230
		{ &Z_Construct_UFunction_UMultiplayGameServerSubsystem_SubscribeToServerEvents, "SubscribeToServerEvents" }, // 3491326018
		{ &Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnreadyServer, "UnreadyServer" }, // 1793989498
		{ &Z_Construct_UFunction_UMultiplayGameServerSubsystem_UnsubscribeToServerEvents, "UnsubscribeToServerEvents" }, // 75769877
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * @brief Subsystem responsible for communicating with the Multiplay SDK daemon. \n  */" },
		{ "IncludePath", "MultiplayGameServerSubsystem.h" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "@brief Subsystem responsible for communicating with the Multiplay SDK daemon." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnAllocate_MetaData[] = {
		{ "Category", "Multiplay | GameServer" },
		{ "Comment", "/**\n     * Delegate that is invoked when this server has been allocated.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "Delegate that is invoked when this server has been allocated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnAllocate = { "OnAllocate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayGameServerSubsystem, OnAllocate), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnAllocate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnAllocate_MetaData)) }; // 784504816
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnDeallocate_MetaData[] = {
		{ "Category", "Multiplay | GameServer" },
		{ "Comment", "/**\n     * Delegate that is invoked when this server has been deallocated.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "Delegate that is invoked when this server has been deallocated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnDeallocate = { "OnDeallocate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayGameServerSubsystem, OnDeallocate), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnDeallocate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnDeallocate_MetaData)) }; // 3619767742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnReadyServerSuccess_MetaData[] = {
		{ "Comment", "/**\n     * Holds a reference to the delegate that will be invoked when ReadyServer is successful.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "Holds a reference to the delegate that will be invoked when ReadyServer is successful." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnReadyServerSuccess = { "OnReadyServerSuccess", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayGameServerSubsystem, OnReadyServerSuccess), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnReadyServerSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnReadyServerSuccess_MetaData)) }; // 3517063544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnReadyServerFailure_MetaData[] = {
		{ "Comment", "/**\n     * Holds a reference to the delegate that will be invoked when ReadyServer is unsuccessful.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "Holds a reference to the delegate that will be invoked when ReadyServer is unsuccessful." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnReadyServerFailure = { "OnReadyServerFailure", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayGameServerSubsystem, OnReadyServerFailure), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnReadyServerFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnReadyServerFailure_MetaData)) }; // 3931647513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnUnreadyServerSuccess_MetaData[] = {
		{ "Comment", "/**\n     * Holds a reference to the delegate that will be invoked when UnreadyServer is successful.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "Holds a reference to the delegate that will be invoked when UnreadyServer is successful." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnUnreadyServerSuccess = { "OnUnreadyServerSuccess", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayGameServerSubsystem, OnUnreadyServerSuccess), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnUnreadyServerSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnUnreadyServerSuccess_MetaData)) }; // 4094976265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnUnreadyServerFailure_MetaData[] = {
		{ "Comment", "/**\n     * Holds a reference to the delegate that will be invoked when UnreadyServer is unsuccessful.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "Holds a reference to the delegate that will be invoked when UnreadyServer is unsuccessful." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnUnreadyServerFailure = { "OnUnreadyServerFailure", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayGameServerSubsystem, OnUnreadyServerFailure), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnUnreadyServerFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnUnreadyServerFailure_MetaData)) }; // 1219861852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadAllocationSuccess_MetaData[] = {
		{ "Comment", "/**\n     * Holds a reference to the delegate that will be invoked when PayloadAllocation is successful.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "Holds a reference to the delegate that will be invoked when PayloadAllocation is successful." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadAllocationSuccess = { "OnPayloadAllocationSuccess", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayGameServerSubsystem, OnPayloadAllocationSuccess), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadAllocationSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadAllocationSuccess_MetaData)) }; // 3792486661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadAllocationFailure_MetaData[] = {
		{ "Comment", "/**\n     * Holds a reference to the delegate that will be invoked when PayloadAllocation is unsuccessful.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "Holds a reference to the delegate that will be invoked when PayloadAllocation is unsuccessful." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadAllocationFailure = { "OnPayloadAllocationFailure", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayGameServerSubsystem, OnPayloadAllocationFailure), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadAllocationFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadAllocationFailure_MetaData)) }; // 4280390415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadTokenSuccess_MetaData[] = {
		{ "Comment", "/**\n     * Holds a reference to the delegate that will be invoked when PayloadToken is successful.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "Holds a reference to the delegate that will be invoked when PayloadToken is successful." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadTokenSuccess = { "OnPayloadTokenSuccess", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayGameServerSubsystem, OnPayloadTokenSuccess), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadTokenSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadTokenSuccess_MetaData)) }; // 2329375806
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadTokenFailure_MetaData[] = {
		{ "Comment", "/**\n     * Holds a reference to the delegate that will be invoked when PayloadToken is unsuccessful.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayGameServerSubsystem.h" },
		{ "ToolTip", "Holds a reference to the delegate that will be invoked when PayloadToken is unsuccessful." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadTokenFailure = { "OnPayloadTokenFailure", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayGameServerSubsystem, OnPayloadTokenFailure), Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadTokenFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadTokenFailure_MetaData)) }; // 3600257545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnAllocate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnDeallocate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnReadyServerSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnReadyServerFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnUnreadyServerSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnUnreadyServerFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadAllocationSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadAllocationFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadTokenSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::NewProp_OnPayloadTokenFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayGameServerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::ClassParams = {
		&UMultiplayGameServerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiplayGameServerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMultiplayGameServerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayGameServerSubsystem.OuterSingleton, Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiplayGameServerSubsystem.OuterSingleton;
	}
	template<> MULTIPLAYGAMESERVERSDK_API UClass* StaticClass<UMultiplayGameServerSubsystem>()
	{
		return UMultiplayGameServerSubsystem::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayGameServerSubsystem, UMultiplayGameServerSubsystem::StaticClass, TEXT("UMultiplayGameServerSubsystem"), &Z_Registration_Info_UClass_UMultiplayGameServerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayGameServerSubsystem), 671979255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_2957420376(TEXT("/Script/MultiplayGameServerSDK"),
		Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
