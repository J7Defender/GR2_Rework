// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayGameServerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMultiplayAllocation;
struct FMultiplayDeallocation;
struct FMultiplayErrorResponse;
struct FMultiplayPayloadAllocationErrorResponse;
struct FMultiplayPayloadTokenResponse;
#ifdef MULTIPLAYGAMESERVERSDK_MultiplayGameServerSubsystem_generated_h
#error "MultiplayGameServerSubsystem.generated.h already included, missing '#pragma once' in MultiplayGameServerSubsystem.h"
#endif
#define MULTIPLAYGAMESERVERSDK_MultiplayGameServerSubsystem_generated_h

#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_12_DELEGATE \
struct _Script_MultiplayGameServerSDK_eventAllocateDelegate_Parms \
{ \
	FMultiplayAllocation Allocation; \
}; \
static inline void FAllocateDelegate_DelegateWrapper(const FMulticastScriptDelegate& AllocateDelegate, FMultiplayAllocation Allocation) \
{ \
	_Script_MultiplayGameServerSDK_eventAllocateDelegate_Parms Parms; \
	Parms.Allocation=Allocation; \
	AllocateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_13_DELEGATE \
struct _Script_MultiplayGameServerSDK_eventDeallocateDelegate_Parms \
{ \
	FMultiplayDeallocation Deallocation; \
}; \
static inline void FDeallocateDelegate_DelegateWrapper(const FMulticastScriptDelegate& DeallocateDelegate, FMultiplayDeallocation Deallocation) \
{ \
	_Script_MultiplayGameServerSDK_eventDeallocateDelegate_Parms Parms; \
	Parms.Deallocation=Deallocation; \
	DeallocateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_15_DELEGATE \
static inline void FReadyServerSuccessDelegate_DelegateWrapper(const FScriptDelegate& ReadyServerSuccessDelegate) \
{ \
	ReadyServerSuccessDelegate.ProcessDelegate<UObject>(NULL); \
}


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_16_DELEGATE \
struct _Script_MultiplayGameServerSDK_eventReadyServerFailureDelegate_Parms \
{ \
	FMultiplayErrorResponse ErrorResponse; \
}; \
static inline void FReadyServerFailureDelegate_DelegateWrapper(const FScriptDelegate& ReadyServerFailureDelegate, FMultiplayErrorResponse ErrorResponse) \
{ \
	_Script_MultiplayGameServerSDK_eventReadyServerFailureDelegate_Parms Parms; \
	Parms.ErrorResponse=ErrorResponse; \
	ReadyServerFailureDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_18_DELEGATE \
static inline void FUnreadyServerSuccessDelegate_DelegateWrapper(const FScriptDelegate& UnreadyServerSuccessDelegate) \
{ \
	UnreadyServerSuccessDelegate.ProcessDelegate<UObject>(NULL); \
}


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_19_DELEGATE \
struct _Script_MultiplayGameServerSDK_eventUnreadyServerFailureDelegate_Parms \
{ \
	FMultiplayErrorResponse ErrorResponse; \
}; \
static inline void FUnreadyServerFailureDelegate_DelegateWrapper(const FScriptDelegate& UnreadyServerFailureDelegate, FMultiplayErrorResponse ErrorResponse) \
{ \
	_Script_MultiplayGameServerSDK_eventUnreadyServerFailureDelegate_Parms Parms; \
	Parms.ErrorResponse=ErrorResponse; \
	UnreadyServerFailureDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_21_DELEGATE \
struct _Script_MultiplayGameServerSDK_eventPayloadAllocationSuccessDelegate_Parms \
{ \
	FString Payload; \
}; \
static inline void FPayloadAllocationSuccessDelegate_DelegateWrapper(const FScriptDelegate& PayloadAllocationSuccessDelegate, const FString& Payload) \
{ \
	_Script_MultiplayGameServerSDK_eventPayloadAllocationSuccessDelegate_Parms Parms; \
	Parms.Payload=Payload; \
	PayloadAllocationSuccessDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_22_DELEGATE \
struct _Script_MultiplayGameServerSDK_eventPayloadAllocationFailureDelegate_Parms \
{ \
	FMultiplayPayloadAllocationErrorResponse ErrorResponse; \
}; \
static inline void FPayloadAllocationFailureDelegate_DelegateWrapper(const FScriptDelegate& PayloadAllocationFailureDelegate, FMultiplayPayloadAllocationErrorResponse ErrorResponse) \
{ \
	_Script_MultiplayGameServerSDK_eventPayloadAllocationFailureDelegate_Parms Parms; \
	Parms.ErrorResponse=ErrorResponse; \
	PayloadAllocationFailureDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_24_DELEGATE \
struct _Script_MultiplayGameServerSDK_eventPayloadTokenSuccessDelegate_Parms \
{ \
	FMultiplayPayloadTokenResponse TokenResponse; \
}; \
static inline void FPayloadTokenSuccessDelegate_DelegateWrapper(const FScriptDelegate& PayloadTokenSuccessDelegate, FMultiplayPayloadTokenResponse TokenResponse) \
{ \
	_Script_MultiplayGameServerSDK_eventPayloadTokenSuccessDelegate_Parms Parms; \
	Parms.TokenResponse=TokenResponse; \
	PayloadTokenSuccessDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_25_DELEGATE \
struct _Script_MultiplayGameServerSDK_eventPayloadTokenFailureDelegate_Parms \
{ \
	FMultiplayPayloadTokenResponse ErrorResponse; \
}; \
static inline void FPayloadTokenFailureDelegate_DelegateWrapper(const FScriptDelegate& PayloadTokenFailureDelegate, FMultiplayPayloadTokenResponse ErrorResponse) \
{ \
	_Script_MultiplayGameServerSDK_eventPayloadTokenFailureDelegate_Parms Parms; \
	Parms.ErrorResponse=ErrorResponse; \
	PayloadTokenFailureDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_SPARSE_DATA
#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPayloadToken); \
	DECLARE_FUNCTION(execGetPayloadAllocation); \
	DECLARE_FUNCTION(execUnsubscribeToServerEvents); \
	DECLARE_FUNCTION(execSubscribeToServerEvents); \
	DECLARE_FUNCTION(execUnreadyServer); \
	DECLARE_FUNCTION(execReadyServerForPlayers);


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPayloadToken); \
	DECLARE_FUNCTION(execGetPayloadAllocation); \
	DECLARE_FUNCTION(execUnsubscribeToServerEvents); \
	DECLARE_FUNCTION(execSubscribeToServerEvents); \
	DECLARE_FUNCTION(execUnreadyServer); \
	DECLARE_FUNCTION(execReadyServerForPlayers);


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_ACCESSORS
#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayGameServerSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayGameServerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayGameServerSDK"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayGameServerSubsystem)


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUMultiplayGameServerSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayGameServerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayGameServerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayGameServerSDK"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayGameServerSubsystem)


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiplayGameServerSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiplayGameServerSubsystem) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayGameServerSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayGameServerSubsystem(UMultiplayGameServerSubsystem&&); \
	NO_API UMultiplayGameServerSubsystem(const UMultiplayGameServerSubsystem&); \
public:


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayGameServerSubsystem(UMultiplayGameServerSubsystem&&); \
	NO_API UMultiplayGameServerSubsystem(const UMultiplayGameServerSubsystem&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayGameServerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayGameServerSubsystem)


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_45_PROLOG
#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_SPARSE_DATA \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_RPC_WRAPPERS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_ACCESSORS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_INCLASS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_SPARSE_DATA \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_ACCESSORS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_INCLASS_NO_PURE_DECLS \
	FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYGAMESERVERSDK_API UClass* StaticClass<class UMultiplayGameServerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GR2_Rework_Plugins_UnityServerSDK_Linux_MultiplayGameServerSDK_Source_MultiplayGameServerSDK_Public_MultiplayGameServerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
