//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFMediaProfileContainer_Protocol_h
#define HFMediaProfileContainer_Protocol_h
@import Foundation;

@protocol HFMediaProfileContainer <HMMediaObject, HFHomeKitSettingsVendor, HFAccessoryVendor, HFStateDumpBuildable, HFReorderableHomeKitObject, HFFavoritable, HFHomeStatusVisible, HFShowInHomeDashboard, HFRoomContextProviding, HFSymptomsVendor, HFSymptomsHandlerVendor, HFSymptomFixableObject, HFServiceNameComponentsProviding>

@property (readonly, copy, nonatomic) HMMediaSession *mediaSession;
@property (readonly, nonatomic) NSSet *mediaProfiles;
@property (readonly, nonatomic) BOOL hf_isCurrentAccessory;
@property (readonly, nonatomic) BOOL hf_isAccessorySettingsReachable;
@property (readonly, nonatomic) BOOL hf_isAppleMusicReachable;
@property (readonly, nonatomic) BOOL hf_isReachable;
@property (readonly, nonatomic) BOOL hf_supportsSoftwareUpdate;
@property (readonly, nonatomic) BOOL hf_supportsStereoPairing;
@property (readonly, nonatomic) BOOL hf_showsAudioSettings;
@property (readonly, nonatomic) BOOL hf_supportsMusicAlarm;
@property (readonly, nonatomic) NSString *hf_prettyDescription;
@property (readonly, copy, nonatomic) NSString *hf_categoryLowercaseLocalizedDescription;
@property (readonly, copy, nonatomic) NSString *hf_categoryCapitalizedLocalizedDescription;
@property (readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property (readonly, nonatomic) BOOL hf_supportsMultiUser;
@property (readonly, nonatomic) BOOL hf_supportsMediaActions;
@property (readonly, nonatomic) BOOL hf_homePodSupportsMultiUser;
@property (readonly, nonatomic) BOOL hf_homePodIsCapableOfShowingSplitAccountError;
@property (readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
@property (readonly, nonatomic) NSObject<HFMediaValueSource> *hf_mediaValueSource;
@property (readonly, copy, nonatomic) NSSet *hf_deviceIdentifiers;
@property (readonly, copy, nonatomic) NSString *hf_mediaRouteIdentifier;
@property (readonly, nonatomic) BOOL hf_supportsHomeTheater;
@property (readonly, nonatomic) BOOL hf_supportsPreferredMediaUser;

/* instance methods */
- (id)hf_appleMusicCurrentLoggedInAccountDSID;
- (id)hf_appleMusicCurrentLoggedInAccount;
- (id)hf_homePodSupportsMultiUserLanguage;
- (id)hf_homePodMediaAccountIsMismatchedWithHomeMediaAccount;
- (id)hf_isEitherHomePodMediaAccountOrHomeMediaAccountPresent;
- (id)hf_siriLanguageOptionsManager;
- (id)hf_fetchLogListWithTimeout:(double)timeout;
- (id)hf_fetchLog:(id)log timeout:(double)timeout;
- (id)hf_idsDeviceIdentifierWithError:(id *)error;
- (id)hf_destination;
- (id)hf_preferredMediaUser;
- (unsigned long long)hf_preferredUserSelectionType;
- (id)hf_identify;
@end

#endif /* HFMediaProfileContainer_Protocol_h */