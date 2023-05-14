// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayGameServerSDK_init() {}
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
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayGameServerSDK;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayGameServerSDK()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayGameServerSDK.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayGameServerSDK_AllocateDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayGameServerSDK_DeallocateDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationFailureDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadAllocationSuccessDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenFailureDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayGameServerSDK_PayloadTokenSuccessDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerFailureDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayGameServerSDK_ReadyServerSuccessDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerFailureDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayGameServerSDK_UnreadyServerSuccessDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayGameServerSDK",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF2A64824,
				0xC575FB4E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayGameServerSDK.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayGameServerSDK.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayGameServerSDK(Z_Construct_UPackage__Script_MultiplayGameServerSDK, TEXT("/Script/MultiplayGameServerSDK"), Z_Registration_Info_UPackage__Script_MultiplayGameServerSDK, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF2A64824, 0xC575FB4E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
