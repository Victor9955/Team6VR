// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRPlatformSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOvrAssetFileDownloadUpdate;
struct FOvrCowatchingState;
struct FOvrCowatchViewerUpdate;
struct FOvrGroupPresenceJoinIntent;
struct FOvrGroupPresenceLeaveIntent;
struct FOvrHttpTransferUpdate;
struct FOvrLaunchInvitePanelFlowResult;
struct FOvrLivestreamingStatus;
struct FOvrNetSyncConnection;
struct FOvrNetSyncSessionsChangedNotification;
struct FOvrPartyUpdateNotification;
struct FOvrSystemVoipState;
#ifdef OVRPLATFORM_OVRPlatformSubsystem_generated_h
#error "OVRPlatformSubsystem.generated.h already included, missing '#pragma once' in OVRPlatformSubsystem.h"
#endif
#define OVRPLATFORM_OVRPlatformSubsystem_generated_h

#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_25_DELEGATE \
OVRPLATFORM_API void FOvrNotification_AbuseReport_ReportButtonPressed_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_AbuseReport_ReportButtonPressed, const FString& ReportButtonPressed);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_26_DELEGATE \
OVRPLATFORM_API void FOvrNotification_ApplicationLifecycle_LaunchIntentChanged_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_ApplicationLifecycle_LaunchIntentChanged, const FString& LaunchIntentChanged);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_27_DELEGATE \
OVRPLATFORM_API void FOvrNotification_AssetFile_DownloadUpdate_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_AssetFile_DownloadUpdate, FOvrAssetFileDownloadUpdate const& DownloadUpdate);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_28_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Cowatching_ApiNotReady_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Cowatching_ApiNotReady, const FString& ApiNotReady);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_29_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Cowatching_ApiReady_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Cowatching_ApiReady, const FString& ApiReady);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_30_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Cowatching_InSessionChanged_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Cowatching_InSessionChanged, FOvrCowatchingState const& InSessionChanged);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_31_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Cowatching_Initialized_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Cowatching_Initialized, const FString& Initialized);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_32_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Cowatching_PresenterDataChanged_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Cowatching_PresenterDataChanged, const FString& PresenterDataChanged);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_33_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Cowatching_SessionStarted_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Cowatching_SessionStarted, const FString& SessionStarted);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_34_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Cowatching_SessionStopped_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Cowatching_SessionStopped, const FString& SessionStopped);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_35_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Cowatching_ViewersDataChanged_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Cowatching_ViewersDataChanged, FOvrCowatchViewerUpdate const& ViewersDataChanged);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_36_DELEGATE \
OVRPLATFORM_API void FOvrNotification_GroupPresence_InvitationsSent_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_GroupPresence_InvitationsSent, FOvrLaunchInvitePanelFlowResult const& InvitationsSent);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_37_DELEGATE \
OVRPLATFORM_API void FOvrNotification_GroupPresence_JoinIntentReceived_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_GroupPresence_JoinIntentReceived, FOvrGroupPresenceJoinIntent const& JoinIntentReceived);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_38_DELEGATE \
OVRPLATFORM_API void FOvrNotification_GroupPresence_LeaveIntentReceived_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_GroupPresence_LeaveIntentReceived, FOvrGroupPresenceLeaveIntent const& LeaveIntentReceived);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_39_DELEGATE \
OVRPLATFORM_API void FOvrNotification_HTTP_Transfer_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_HTTP_Transfer, FOvrHttpTransferUpdate const& Transfer);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_40_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Livestreaming_StatusChange_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Livestreaming_StatusChange, FOvrLivestreamingStatus const& StatusChange);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_41_DELEGATE \
OVRPLATFORM_API void FOvrNotification_NetSync_ConnectionStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_NetSync_ConnectionStatusChanged, FOvrNetSyncConnection const& ConnectionStatusChanged);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_42_DELEGATE \
OVRPLATFORM_API void FOvrNotification_NetSync_SessionsChanged_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_NetSync_SessionsChanged, FOvrNetSyncSessionsChangedNotification const& SessionsChanged);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_43_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Party_PartyUpdate_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Party_PartyUpdate, FOvrPartyUpdateNotification const& PartyUpdate);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_44_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Voip_MicrophoneAvailabilityStateUpdate_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Voip_MicrophoneAvailabilityStateUpdate, const FString& MicrophoneAvailabilityStateUpdate);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_45_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Voip_SystemVoipState_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Voip_SystemVoipState, FOvrSystemVoipState const& SystemVoipState);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_46_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Vrcamera_GetDataChannelMessageUpdate_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Vrcamera_GetDataChannelMessageUpdate, const FString& GetDataChannelMessageUpdate);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_47_DELEGATE \
OVRPLATFORM_API void FOvrNotification_Vrcamera_GetSurfaceUpdate_DelegateWrapper(const FMulticastScriptDelegate& OvrNotification_Vrcamera_GetSurfaceUpdate, const FString& GetSurfaceUpdate);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartMessagePump);


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrPlatformSubsystem(); \
	friend struct Z_Construct_UClass_UOvrPlatformSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOvrPlatformSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrPlatformSubsystem)


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrPlatformSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrPlatformSubsystem(UOvrPlatformSubsystem&&); \
	UOvrPlatformSubsystem(const UOvrPlatformSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrPlatformSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrPlatformSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOvrPlatformSubsystem) \
	NO_API virtual ~UOvrPlatformSubsystem();


#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_50_PROLOG
#define FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_58_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrPlatformSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
