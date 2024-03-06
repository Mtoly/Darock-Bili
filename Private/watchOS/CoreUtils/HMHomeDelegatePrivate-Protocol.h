//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef HMHomeDelegatePrivate_Protocol_h
#define HMHomeDelegatePrivate_Protocol_h
@import Foundation;

@protocol HMHomeDelegatePrivate <HMHomeDelegate>
@optional
/* instance methods */
- (void)home:(id)home didAddResidentDevice:(id)device;
- (void)home:(id)home didRemoveResidentDevice:(id)device;
- (void)home:(id)home didUpdateLocation:(id)location;
- (void)home:(id)home didUpdateStateForOutgoingInvitations:(id)invitations;
- (void)home:(id)home didUpdateAccesoryInvitationsForUser:(id)user;
- (void)homeDidUpdateApplicationData:(id)data;
- (void)home:(id)home didUpdateApplicationDataForRoom:(id)room;
- (void)home:(id)home didUpdateApplicationDataForServiceGroup:(id)group;
- (void)home:(id)home didUpdateApplicationDataForActionSet:(id)set;
- (void)home:(id)home didUpdateLastExecutionDateForActionSet:(id)set;
- (void)home:(id)home didUpdateAccessControlForUser:(id)user;
- (void)home:(id)home didEnableNotifications:(BOOL)notifications;
- (void)home:(id)home didUpdateAutomaticSoftwareUpdateEnabled:(BOOL)enabled;
- (void)home:(id)home didUpdateMinimumMediaUserPrivilege:(long long)privilege;
- (void)home:(id)home didUpdateMediaPeerToPeerEnabled:(BOOL)enabled;
- (void)home:(id)home didUpdateMediaPassword:(id)password;
- (void)home:(id)home didAddMediaSystem:(id)system;
- (void)home:(id)home didRemoveMediaSystem:(id)system;
- (void)home:(id)home didUpdateReprovisionStateForAccessory:(id)accessory;
- (void)homeDidUpdateProtectionMode:(id)mode;
- (void)homeDidUpdateNetworkRouterSupport:(id)support;
- (void)homeDidUpdateHomeLocationStatus:(id)status;
- (void)homeDidEnableMultiUser:(id)user;
- (void)home:(id)home didUpdateAudioAnalysisClassifierOptions:(unsigned long long)options;
- (void)home:(id)home didUpdateOnboardAudioAnalysis:(BOOL)analysis;
- (void)home:(id)home didUpdateSiriPhraseOptions:(unsigned long long)options;
- (void)homeDidSetHasAnyUserAcknowledgedCameraRecordingOnboarding:(id)onboarding;
- (void)home:(id)home didAddAccessoryNetworkProtectionGroup:(id)group;
- (void)home:(id)home didRemoveAccessoryNetworkProtectionGroup:(id)group;
- (void)home:(id)home didUpdateAccessoryNetworkProtectionGroup:(id)group;
- (void)homeDidSetEnableDoorbellChime:(id)chime;
- (void)home:(id)home didUpdatePersonManagerSettings:(id)settings;
- (void)home:(id)home didFailAccessorySetupWithError:(id)error;
- (void)homeDidSetHasOnboardedForAccessCode:(id)code;
- (void)homeDidAddWalletKey:(id)key;
- (void)homeDidRemoveWalletKey:(id)key;
- (void)home:(id)home didUpdateHasOnboardedForWalletKey:(BOOL)key;
- (void)homeDidUpdateAssistantIdentifiers:(id)identifiers;
- (void)homeDidUpdateToROAR:(id)roar;
- (void)home:(id)home didUpdateAreBulletinNotificationsSupported:(BOOL)supported;
- (void)home:(id)home didUpdateEventLogEnabled:(BOOL)enabled;
- (void)homeDidUpdateOnboardedEventLog:(id)log;
- (void)home:(id)home didUpdateEventLogDuration:(unsigned long long)duration;
@end

#endif /* HMHomeDelegatePrivate_Protocol_h */