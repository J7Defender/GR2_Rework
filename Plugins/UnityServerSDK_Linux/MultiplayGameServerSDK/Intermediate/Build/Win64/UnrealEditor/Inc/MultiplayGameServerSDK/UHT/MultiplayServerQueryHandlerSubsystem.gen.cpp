// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayGameServerSDK/Public/MultiplayServerQueryHandlerSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayServerQueryHandlerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MULTIPLAYGAMESERVERSDK_API UClass* Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem();
	MULTIPLAYGAMESERVERSDK_API UClass* Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiplayGameServerSDK();
// End Cross Module References
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execSetPort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPort(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execGetPort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execSetMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMap(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execGetMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execSetBuildId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBuildId(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execGetBuildId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBuildId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execSetGameType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameType(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execGetGameType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGameType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execSetServerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetServerName(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execGetServerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execSetMaxPlayers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxPlayers(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execGetMaxPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execSetCurrentPlayers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentPlayers(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execDecrementCurrentPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementCurrentPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execIncrementCurrentPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementCurrentPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execGetCurrentPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiplayServerQueryHandlerSubsystem::execConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Connect();
		P_NATIVE_END;
	}
	void UMultiplayServerQueryHandlerSubsystem::StaticRegisterNativesUMultiplayServerQueryHandlerSubsystem()
	{
		UClass* Class = UMultiplayServerQueryHandlerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UMultiplayServerQueryHandlerSubsystem::execConnect },
			{ "DecrementCurrentPlayers", &UMultiplayServerQueryHandlerSubsystem::execDecrementCurrentPlayers },
			{ "Disconnect", &UMultiplayServerQueryHandlerSubsystem::execDisconnect },
			{ "GetBuildId", &UMultiplayServerQueryHandlerSubsystem::execGetBuildId },
			{ "GetCurrentPlayers", &UMultiplayServerQueryHandlerSubsystem::execGetCurrentPlayers },
			{ "GetGameType", &UMultiplayServerQueryHandlerSubsystem::execGetGameType },
			{ "GetMap", &UMultiplayServerQueryHandlerSubsystem::execGetMap },
			{ "GetMaxPlayers", &UMultiplayServerQueryHandlerSubsystem::execGetMaxPlayers },
			{ "GetPort", &UMultiplayServerQueryHandlerSubsystem::execGetPort },
			{ "GetServerName", &UMultiplayServerQueryHandlerSubsystem::execGetServerName },
			{ "IncrementCurrentPlayers", &UMultiplayServerQueryHandlerSubsystem::execIncrementCurrentPlayers },
			{ "IsConnected", &UMultiplayServerQueryHandlerSubsystem::execIsConnected },
			{ "SetBuildId", &UMultiplayServerQueryHandlerSubsystem::execSetBuildId },
			{ "SetCurrentPlayers", &UMultiplayServerQueryHandlerSubsystem::execSetCurrentPlayers },
			{ "SetGameType", &UMultiplayServerQueryHandlerSubsystem::execSetGameType },
			{ "SetMap", &UMultiplayServerQueryHandlerSubsystem::execSetMap },
			{ "SetMaxPlayers", &UMultiplayServerQueryHandlerSubsystem::execSetMaxPlayers },
			{ "SetPort", &UMultiplayServerQueryHandlerSubsystem::execSetPort },
			{ "SetServerName", &UMultiplayServerQueryHandlerSubsystem::execSetServerName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventConnect_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MultiplayServerQueryHandlerSubsystem_eventConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiplayServerQueryHandlerSubsystem_eventConnect_Parms), &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Start listening for Multiplay server queries.\n\x09 * @return A bool indicating whether the query port was bound.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Start listening for Multiplay server queries.\n@return A bool indicating whether the query port was bound." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "Connect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::MultiplayServerQueryHandlerSubsystem_eventConnect_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_DecrementCurrentPlayers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_DecrementCurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Atomically decrement the current number of players connected to the server.\n\x09 * \n\x09 * This method should be invoked whenever a player leaves the match.\n\x09 * \n     * The current players value is represented using a uint16 in the server query protocol.\n     * The maximum representable value for the current number of players is 65535.\n\x09 * \n\x09 * See SetCurrentPlayers() as an alternative for overwriting the current value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Atomically decrement the current number of players connected to the server.\n\nThis method should be invoked whenever a player leaves the match.\n\nThe current players value is represented using a uint16 in the server query protocol.\nThe maximum representable value for the current number of players is 65535.\n\nSee SetCurrentPlayers() as an alternative for overwriting the current value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_DecrementCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "DecrementCurrentPlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_DecrementCurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_DecrementCurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_DecrementCurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_DecrementCurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Disconnect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Stop listening for Multiplay server queries. \n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Stop listening for Multiplay server queries." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "Disconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventGetBuildId_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventGetBuildId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Gets the build ID of the server.\n\x09 * @return The server's build ID.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Gets the build ID of the server.\n@return The server's build ID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "GetBuildId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::MultiplayServerQueryHandlerSubsystem_eventGetBuildId_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventGetCurrentPlayers_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventGetCurrentPlayers_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief\x09Gets the current number of players connected to the server.\n\x09 * \n\x09 * The current players value is represented using a uint16 in the server query protocol.\n     * The maximum representable value for the current number of players is 65535.\n\x09 * \n\x09 * @return The current number of players connected to the server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief       Gets the current number of players connected to the server.\n\nThe current players value is represented using a uint16 in the server query protocol.\nThe maximum representable value for the current number of players is 65535.\n\n@return The current number of players connected to the server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "GetCurrentPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::MultiplayServerQueryHandlerSubsystem_eventGetCurrentPlayers_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventGetGameType_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventGetGameType_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Gets the game type that the server is currently being allocated for.\n\x09 * @return The server's game type name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Gets the game type that the server is currently being allocated for.\n@return The server's game type name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "GetGameType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::MultiplayServerQueryHandlerSubsystem_eventGetGameType_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventGetMap_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventGetMap_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Gets the map the server is currently on.\n\x09 * @return The name of the server's current map.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Gets the map the server is currently on.\n@return The name of the server's current map." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "GetMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::MultiplayServerQueryHandlerSubsystem_eventGetMap_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventGetMaxPlayers_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventGetMaxPlayers_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Gets the maximum number of players allowed on the server.\n\x09 * @return The maximum number of players allowed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Gets the maximum number of players allowed on the server.\n@return The maximum number of players allowed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "GetMaxPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::MultiplayServerQueryHandlerSubsystem_eventGetMaxPlayers_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventGetPort_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventGetPort_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Gets the SQP port that the server is listening on.\n\x09 * @return The server's port.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Gets the SQP port that the server is listening on.\n@return The server's port." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "GetPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::MultiplayServerQueryHandlerSubsystem_eventGetPort_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventGetServerName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventGetServerName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Gets the server's name. \n\x09 * @return The server's name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Gets the server's name.\n@return The server's name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "GetServerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::MultiplayServerQueryHandlerSubsystem_eventGetServerName_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IncrementCurrentPlayers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IncrementCurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Atomically increment the current number of players connected to the server.\n\x09 * \n\x09 * This method should be invoked whenever a player joins the match.\n\x09 * \n     * The current players value is represented using a uint16 in the server query protocol.\n     * The maximum representable value for the current number of players is 65535.\n\x09 * \n\x09 * See SetCurrentPlayers() as an alternative for overwriting the current value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Atomically increment the current number of players connected to the server.\n\nThis method should be invoked whenever a player joins the match.\n\nThe current players value is represented using a uint16 in the server query protocol.\nThe maximum representable value for the current number of players is 65535.\n\nSee SetCurrentPlayers() as an alternative for overwriting the current value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IncrementCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "IncrementCurrentPlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IncrementCurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IncrementCurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IncrementCurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IncrementCurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MultiplayServerQueryHandlerSubsystem_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MultiplayServerQueryHandlerSubsystem_eventIsConnected_Parms), &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Indicates whether the server is actively listening for server query requests.\n\x09 * @return A bool indicating whether the server is actively listening for server query requests.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Indicates whether the server is actively listening for server query requests.\n@return A bool indicating whether the server is actively listening for server query requests." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "IsConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::MultiplayServerQueryHandlerSubsystem_eventIsConnected_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventSetBuildId_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventSetBuildId_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Sets the server's build ID.\n\x09 *        Note: Must be under 255 characters. Wide characters are not supported.\n\x09 * @param Value The server's build ID.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Sets the server's build ID.\n       Note: Must be under 255 characters. Wide characters are not supported.\n@param Value The server's build ID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "SetBuildId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::MultiplayServerQueryHandlerSubsystem_eventSetBuildId_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventSetCurrentPlayers_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventSetCurrentPlayers_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Sets the current number of players connected to the server.\n\x09 * \n\x09 * This method should be invoked whenever a player joins the match or leaves the match.\n\x09 * \n\x09 * The current players value is represented using a uint16 in the server query protocol.\n\x09 * The maximum representable value for the current number of players is 65535.\n\x09 * \n\x09 * See IncrementCurrentPlayers() and DecrementCurrentPlayers() for atomic alternatives to SetCurrentPlayers(int32).\n\x09 * \n\x09 * @param Value The current number of players.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Sets the current number of players connected to the server.\n\nThis method should be invoked whenever a player joins the match or leaves the match.\n\nThe current players value is represented using a uint16 in the server query protocol.\nThe maximum representable value for the current number of players is 65535.\n\nSee IncrementCurrentPlayers() and DecrementCurrentPlayers() for atomic alternatives to SetCurrentPlayers(int32).\n\n@param Value The current number of players." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "SetCurrentPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::MultiplayServerQueryHandlerSubsystem_eventSetCurrentPlayers_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventSetGameType_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventSetGameType_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Sets the server's game type.\n\x09 *        Note: Must be under 255 characters.\n\x09 * @param Value The server's game type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Sets the server's game type.\n       Note: Must be under 255 characters.\n@param Value The server's game type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "SetGameType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::MultiplayServerQueryHandlerSubsystem_eventSetGameType_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventSetMap_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventSetMap_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Sets the server's map.\n\x09 *        Note: Must be under 255 characters.\n\x09 * @param Value The server's map.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Sets the server's map.\n       Note: Must be under 255 characters.\n@param Value The server's map." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "SetMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::MultiplayServerQueryHandlerSubsystem_eventSetMap_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventSetMaxPlayers_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventSetMaxPlayers_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Sets the maximum amount of players allowed on the server.\n\x09 *        Note: Only values up to 65535 (max uint16) are supported.\n\x09 * @param Value The maximum number of players.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Sets the maximum amount of players allowed on the server.\n       Note: Only values up to 65535 (max uint16) are supported.\n@param Value The maximum number of players." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "SetMaxPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::MultiplayServerQueryHandlerSubsystem_eventSetMaxPlayers_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventSetPort_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventSetPort_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Sets the server's SQP port that it listens on.\n\x09 *        Note: Only values up to 65535 (max uint16) are supported.\n\x09 * @param Value The server's port.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Sets the server's SQP port that it listens on.\n       Note: Only values up to 65535 (max uint16) are supported.\n@param Value The server's port." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "SetPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::MultiplayServerQueryHandlerSubsystem_eventSetPort_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics
	{
		struct MultiplayServerQueryHandlerSubsystem_eventSetServerName_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MultiplayServerQueryHandlerSubsystem_eventSetServerName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n\x09 * @brief Sets the server's name. \n\x09 *        Note: Must be under 255 characters.\n\x09 * @param Value The server's name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Sets the server's name.\n       Note: Must be under 255 characters.\n@param Value The server's name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, nullptr, "SetServerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::MultiplayServerQueryHandlerSubsystem_eventSetServerName_Parms), Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiplayServerQueryHandlerSubsystem);
	UClass* Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_NoRegister()
	{
		return UMultiplayServerQueryHandlerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayGameServerSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Connect, "Connect" }, // 3188100415
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_DecrementCurrentPlayers, "DecrementCurrentPlayers" }, // 3698532447
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_Disconnect, "Disconnect" }, // 2329238031
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetBuildId, "GetBuildId" }, // 1660305235
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetCurrentPlayers, "GetCurrentPlayers" }, // 1268592334
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetGameType, "GetGameType" }, // 2311376032
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMap, "GetMap" }, // 2690999552
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetMaxPlayers, "GetMaxPlayers" }, // 2364142670
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetPort, "GetPort" }, // 484767297
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_GetServerName, "GetServerName" }, // 1645680082
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IncrementCurrentPlayers, "IncrementCurrentPlayers" }, // 2567009942
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_IsConnected, "IsConnected" }, // 1081294002
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetBuildId, "SetBuildId" }, // 3665990825
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetCurrentPlayers, "SetCurrentPlayers" }, // 3079634262
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetGameType, "SetGameType" }, // 117489627
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMap, "SetMap" }, // 2121442783
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetMaxPlayers, "SetMaxPlayers" }, // 3909073141
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetPort, "SetPort" }, // 2029423638
		{ &Z_Construct_UFunction_UMultiplayServerQueryHandlerSubsystem_SetServerName, "SetServerName" }, // 4118370174
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n  * @brief Subsystem responsible for handling Multiplay server queries. \n  */" },
		{ "IncludePath", "MultiplayServerQueryHandlerSubsystem.h" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "@brief Subsystem responsible for handling Multiplay server queries." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_CurrentPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetCurrentPlayers" },
		{ "BlueprintSetter", "SetCurrentPlayers" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n     * Contains the number of players on the server.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "Contains the number of players on the server." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_CurrentPlayers = { "CurrentPlayers", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayServerQueryHandlerSubsystem, CurrentPlayers), METADATA_PARAMS(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_CurrentPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_CurrentPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetMaxPlayers" },
		{ "BlueprintSetter", "SetMaxPlayers" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n     * Contains the maximum number of players the server supports.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "Contains the maximum number of players the server supports." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayServerQueryHandlerSubsystem, MaxPlayers), METADATA_PARAMS(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_ServerName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetServerName" },
		{ "BlueprintSetter", "SetServerName" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n     * Contains the name of the server.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "Contains the name of the server." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayServerQueryHandlerSubsystem, ServerName), METADATA_PARAMS(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_ServerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_GameType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetGameType" },
		{ "BlueprintSetter", "SetGameType" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n     * Contains the type of game on the server.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "Contains the type of game on the server." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_GameType = { "GameType", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayServerQueryHandlerSubsystem, GameType), METADATA_PARAMS(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_GameType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_GameType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_BuildId_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetBuildId" },
		{ "BlueprintSetter", "SetBuildId" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n     * Contains the version number or build ID of the server.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "Contains the version number or build ID of the server." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayServerQueryHandlerSubsystem, BuildId), METADATA_PARAMS(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_BuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_BuildId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_Map_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetMap" },
		{ "BlueprintSetter", "SetMap" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n     * Contains the map the server currently has loaded.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "Contains the map the server currently has loaded." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayServerQueryHandlerSubsystem, Map), METADATA_PARAMS(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetPort" },
		{ "BlueprintSetter", "SetPort" },
		{ "Category", "Multiplay | ServerQuery" },
		{ "Comment", "/**\n     * Contains the game port the server has exposed.\n     */" },
		{ "ModuleRelativePath", "Public/MultiplayServerQueryHandlerSubsystem.h" },
		{ "ToolTip", "Contains the game port the server has exposed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiplayServerQueryHandlerSubsystem, Port), METADATA_PARAMS(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_Port_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_CurrentPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_MaxPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_ServerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_GameType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_BuildId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::NewProp_Port,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayServerQueryHandlerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::ClassParams = {
		&UMultiplayServerQueryHandlerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMultiplayServerQueryHandlerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayServerQueryHandlerSubsystem.OuterSingleton, Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiplayServerQueryHandlerSubsystem.OuterSingleton;
	}
	template<> MULTIPLAYGAMESERVERSDK_API UClass* StaticClass<UMultiplayServerQueryHandlerSubsystem>()
	{
		return UMultiplayServerQueryHandlerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayServerQueryHandlerSubsystem);
	UMultiplayServerQueryHandlerSubsystem::~UMultiplayServerQueryHandlerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem, UMultiplayServerQueryHandlerSubsystem::StaticClass, TEXT("UMultiplayServerQueryHandlerSubsystem"), &Z_Registration_Info_UClass_UMultiplayServerQueryHandlerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayServerQueryHandlerSubsystem), 944846459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_2554347686(TEXT("/Script/MultiplayGameServerSDK"),
		Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
