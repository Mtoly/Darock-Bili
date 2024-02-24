//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STLog_h
#define STLog_h
@import Foundation;

@interface STLog : NSObject
/* class methods */
+ (id)logCategories;
+ (id)accountState;
+ (id)appInfo;
+ (id)appMonitor;
+ (id)apns;
+ (id)ask;
+ (id)blueprint;
+ (id)checkpoint;
+ (id)cloudkit;
+ (id)communicationSafety;
+ (id)conduit;
+ (id)conversation;
+ (id)coreAnalytics;
+ (id)coreAnimation;
+ (id)daemon;
+ (id)deviceState;
+ (id)family;
+ (id)familyScreenTimeManager;
+ (id)familySettingsManager;
+ (id)idsTransport;
+ (id)managementStateObserver;
+ (id)mirroring;
+ (id)oneMoreMinuteManager;
+ (id)payload;
+ (id)payloadManager;
+ (id)payloadQueue;
+ (id)persistence;
+ (id)personal;
+ (id)pinController;
+ (id)pinService;
+ (id)privateService;
+ (id)requestManager;
+ (id)restrictionsMigrator;
+ (id)settingsService;
+ (id)screentime;
+ (id)screenTimeOrganizationController;
+ (id)test;
+ (id)tool;
+ (id)transaction;
+ (id)usage;
+ (id)userNotifications;
+ (id)utility;
+ (id)versionVector;
+ (id)askClient;
+ (id)backgroundActivity;
+ (id)cachingCodableStore;
+ (id)communicationClient;
+ (id)contactStorePrimitives;
+ (id)coreDataConfigurationStore;
+ (id)coreDataTransformer;
+ (id)coreDataObserver;
+ (id)defaultUserPolicyApplicator;
+ (id)deviceCapabilitiesClient;
+ (id)deviceInformationPrimitives;
+ (id)downtimeClient;
+ (id)eyeReliefStateWriter;
+ (id)familyCirclePrimitives;
+ (id)familyCommunicationService;
+ (id)familyInformationProvider;
+ (id)familyMemberGenesisStateStore;
+ (id)fileBackedKeyValueStore;
+ (id)idsMessageTransport;
+ (id)idsTransportMessageAddressMap;
+ (id)idsTransportMessageIdentifierMap;
+ (id)idsTransportPrimitives;
+ (id)messageTrackingTransportEnvoy;
+ (id)messageTrackingTransportService;
+ (id)organizationControllerConfigurationAdapter;
+ (id)passcodeAuthenticationProviderService;
+ (id)passcodeProviderService;
+ (id)promise;
+ (id)reactor;
+ (id)reactorCore;
+ (id)reactorDirectiveProcessor;
+ (id)reactorTool;
+ (id)remoteViewService;
+ (id)setupClient;
+ (id)transportServiceMessageLedger;
+ (id)userSafetyPolicyWriter;
+ (id)xpcServiceProvider;
@end

#endif /* STLog_h */