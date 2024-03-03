//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFHome_Protocol_h
#define MKFHome_Protocol_h
@import Foundation;

@protocol MKFHome <MKFModel, MKFHomePublicExtensions>

@property (copy, nonatomic) NSNumber *analysisOptions;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSNumber *didOnboardAnalysis;
@property (copy, nonatomic) NSNumber *didOnboardLocationServices;
@property (copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property (copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property (retain, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSNumber *locationServicesEnabled;
@property (copy, nonatomic) NSDate *locationUpdateTimeStamp;
@property (copy, nonatomic) NSNumber *matterFabricID;
@property (retain, nonatomic) NSDictionary *matterKeyValueStore;
@property (copy, nonatomic) NSNumber *multiUserEnabled;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (copy, nonatomic) NSNumber *networkProtectionMode;
@property (retain, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;
@property (copy, nonatomic) NSNumber *owned;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (copy, nonatomic) NSNumber *presenceComputeStatus;
@property (retain, nonatomic) HMFSoftwareVersion *sharedHomeSourceVersion;
@property (copy, nonatomic) NSNumber *siriPhraseOptions;
@property (copy, nonatomic) NSNumber *soundCheckEnabled;
@property (retain, nonatomic) NSData *threadOperationalDataset;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *accessories;
@property (readonly, retain, nonatomic) NSArray *actionSets;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (retain, nonatomic) NSObject<MKFRoom> *defaultRoom;
@property (readonly, retain, nonatomic) NSArray *guestAccessCodes;
@property (readonly, retain, nonatomic) NSArray *invitations;
@property (readonly, retain, nonatomic) NSArray *networkProtectionGroups;
@property (retain, nonatomic) NSObject<MKFUser> *owner;
@property (readonly, retain, nonatomic) NSArray *persons;
@property (retain, nonatomic) NSObject<MKFDevice> *primaryResident;
@property (readonly, retain, nonatomic) NSArray *removedAccessCodes;
@property (readonly, retain, nonatomic) NSArray *residents;
@property (readonly, retain, nonatomic) NSArray *rooms;
@property (readonly, retain, nonatomic) NSArray *serviceGroups;
@property (readonly, retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSObject<MKFHomeThreadNetwork> *threadNetwork;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (readonly, retain, nonatomic) NSArray *users;
@property (readonly, retain, nonatomic) NSArray *zones;
@property (readonly, copy, nonatomic) MKFHomeDatabaseID *databaseID;

/* instance methods */
- (id)materializeOrCreateAccessoriesRelationOfType:(id)type modelID:(id)id createdNew:(BOOL *)new;
- (id)createAccessoriesRelationOfType:(id)type modelID:(id)id;
- (id)materializeOrCreateAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)id;
- (id)findAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)id;
- (id)materializeOrCreateAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)id;
- (id)findAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)id;
- (id)materializeOrCreateAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)id;
- (id)findAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)id;
- (void)synchronizeAccessoriesRelationWith:(id)with;
- (id)materializeOrCreateActionSetsRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findActionSetsRelationWithModelID:(id)id;
- (void)synchronizeActionSetsRelationWith:(id)with;
- (id)materializeOrCreateApplicationDataRelation:(BOOL *)relation;
- (id)materializeOrCreateGuestAccessCodesRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findGuestAccessCodesRelationWithModelID:(id)id;
- (void)addGuestAccessCodesObject:(id)object;
- (void)removeGuestAccessCodesObject:(id)object;
- (id)materializeOrCreateInvitationsRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findInvitationsRelationWithModelID:(id)id;
- (void)synchronizeInvitationsRelationWith:(id)with;
- (id)materializeOrCreateNetworkProtectionGroupsRelation:(BOOL *)relation;
- (id)materializeOrCreatePersonsRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findPersonsRelationWithModelID:(id)id;
- (void)addPersonsObject:(id)object;
- (void)removePersonsObject:(id)object;
- (id)materializeOrCreateRemovedAccessCodesRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findRemovedAccessCodesRelationWithModelID:(id)id;
- (void)addRemovedAccessCodesObject:(id)object;
- (void)removeRemovedAccessCodesObject:(id)object;
- (id)materializeOrCreateResidentsRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findResidentsRelationWithModelID:(id)id;
- (void)addResidentsObject:(id)object;
- (void)removeResidentsObject:(id)object;
- (id)materializeOrCreateRoomsRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findRoomsRelationWithModelID:(id)id;
- (void)synchronizeRoomsRelationWith:(id)with;
- (id)materializeOrCreateServiceGroupsRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findServiceGroupsRelationWithModelID:(id)id;
- (void)synchronizeServiceGroupsRelationWith:(id)with;
- (id)materializeOrCreateSettingsRelationOfTypeHomeMediaSetting:(BOOL *)setting;
- (id)findSettingsRelationOfTypeHomeMediaSetting;
- (id)materializeOrCreateSettingsRelationOfTypeHomeNetworkRouterManagingDeviceSetting:(BOOL *)setting;
- (id)findSettingsRelationOfTypeHomeNetworkRouterManagingDeviceSetting;
- (id)materializeOrCreateSettingsRelationOfTypeHomeNetworkRouterSetting:(BOOL *)setting;
- (id)findSettingsRelationOfTypeHomeNetworkRouterSetting;
- (id)materializeOrCreateSettingsRelationOfTypeHomePersonManagerSetting:(BOOL *)setting;
- (id)findSettingsRelationOfTypeHomePersonManagerSetting;
- (id)materializeOrCreateSettingsRelationOfTypeHomeSoftwareUpdateSetting:(BOOL *)setting;
- (id)findSettingsRelationOfTypeHomeSoftwareUpdateSetting;
- (id)materializeOrCreateThreadNetworkRelation:(BOOL *)relation;
- (id)materializeOrCreateTriggersRelationOfType:(id)type modelID:(id)id createdNew:(BOOL *)new;
- (id)createTriggersRelationOfType:(id)type modelID:(id)id;
- (id)materializeOrCreateTriggersRelationOfTypeEventTriggerWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createTriggersRelationOfTypeEventTriggerWithModelID:(id)id;
- (id)findTriggersRelationOfTypeEventTriggerWithModelID:(id)id;
- (id)materializeOrCreateTriggersRelationOfTypeTimerTriggerWithModelID:(id)id createdNew:(BOOL *)new;
- (id)createTriggersRelationOfTypeTimerTriggerWithModelID:(id)id;
- (id)findTriggersRelationOfTypeTimerTriggerWithModelID:(id)id;
- (void)synchronizeTriggersRelationWith:(id)with;
- (id)materializeOrCreateUsersRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findUsersRelationWithModelID:(id)id;
- (void)synchronizeUsersRelationWith:(id)with;
- (id)materializeOrCreateZonesRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findZonesRelationWithModelID:(id)id;
- (void)synchronizeZonesRelationWith:(id)with;
@end

#endif /* MKFHome_Protocol_h */