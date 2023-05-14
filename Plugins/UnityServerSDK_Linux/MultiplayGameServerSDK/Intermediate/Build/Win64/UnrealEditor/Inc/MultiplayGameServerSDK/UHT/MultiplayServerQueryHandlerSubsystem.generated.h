// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayServerQueryHandlerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYGAMESERVERSDK_MultiplayServerQueryHandlerSubsystem_generated_h
#error "MultiplayServerQueryHandlerSubsystem.generated.h already included, missing '#pragma once' in MultiplayServerQueryHandlerSubsystem.h"
#endif
#define MULTIPLAYGAMESERVERSDK_MultiplayServerQueryHandlerSubsystem_generated_h

#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_SPARSE_DATA
#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPort); \
	DECLARE_FUNCTION(execGetPort); \
	DECLARE_FUNCTION(execSetMap); \
	DECLARE_FUNCTION(execGetMap); \
	DECLARE_FUNCTION(execSetBuildId); \
	DECLARE_FUNCTION(execGetBuildId); \
	DECLARE_FUNCTION(execSetGameType); \
	DECLARE_FUNCTION(execGetGameType); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execGetServerName); \
	DECLARE_FUNCTION(execSetMaxPlayers); \
	DECLARE_FUNCTION(execGetMaxPlayers); \
	DECLARE_FUNCTION(execSetCurrentPlayers); \
	DECLARE_FUNCTION(execDecrementCurrentPlayers); \
	DECLARE_FUNCTION(execIncrementCurrentPlayers); \
	DECLARE_FUNCTION(execGetCurrentPlayers); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPort); \
	DECLARE_FUNCTION(execGetPort); \
	DECLARE_FUNCTION(execSetMap); \
	DECLARE_FUNCTION(execGetMap); \
	DECLARE_FUNCTION(execSetBuildId); \
	DECLARE_FUNCTION(execGetBuildId); \
	DECLARE_FUNCTION(execSetGameType); \
	DECLARE_FUNCTION(execGetGameType); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execGetServerName); \
	DECLARE_FUNCTION(execSetMaxPlayers); \
	DECLARE_FUNCTION(execGetMaxPlayers); \
	DECLARE_FUNCTION(execSetCurrentPlayers); \
	DECLARE_FUNCTION(execDecrementCurrentPlayers); \
	DECLARE_FUNCTION(execIncrementCurrentPlayers); \
	DECLARE_FUNCTION(execGetCurrentPlayers); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_ACCESSORS
#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayServerQueryHandlerSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayServerQueryHandlerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayGameServerSDK"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayServerQueryHandlerSubsystem)


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMultiplayServerQueryHandlerSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayServerQueryHandlerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayServerQueryHandlerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayGameServerSDK"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayServerQueryHandlerSubsystem)


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiplayServerQueryHandlerSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiplayServerQueryHandlerSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayServerQueryHandlerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayServerQueryHandlerSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayServerQueryHandlerSubsystem(UMultiplayServerQueryHandlerSubsystem&&); \
	NO_API UMultiplayServerQueryHandlerSubsystem(const UMultiplayServerQueryHandlerSubsystem&); \
public: \
	NO_API virtual ~UMultiplayServerQueryHandlerSubsystem();


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiplayServerQueryHandlerSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayServerQueryHandlerSubsystem(UMultiplayServerQueryHandlerSubsystem&&); \
	NO_API UMultiplayServerQueryHandlerSubsystem(const UMultiplayServerQueryHandlerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayServerQueryHandlerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayServerQueryHandlerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayServerQueryHandlerSubsystem) \
	NO_API virtual ~UMultiplayServerQueryHandlerSubsystem();


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_12_PROLOG
#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_SPARSE_DATA \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_RPC_WRAPPERS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_ACCESSORS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_INCLASS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_SPARSE_DATA \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_ACCESSORS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYGAMESERVERSDK_API UClass* StaticClass<class UMultiplayServerQueryHandlerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayServerQueryHandlerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
