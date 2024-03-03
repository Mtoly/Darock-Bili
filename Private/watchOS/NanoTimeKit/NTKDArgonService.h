//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKDArgonService_h
#define NTKDArgonService_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "NTKArgonManager.h"
#include "NTKArgonManagerObserver-Protocol.h"
#include "NTKFaceSupportNotificationActionEventRecorder.h"
#include "NTKFaceSupportServer-Protocol.h"

@class APSConnection, NSMutableDictionary, NSString, NSUserDefaults, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface NTKDArgonService : NSObject<NTKArgonManagerObserver, NSXPCListenerDelegate, NTKFaceSupportServer>

@property (readonly, nonatomic) NTKArgonManager *manager;
@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pushQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *userNotificationQueue;
@property (retain, nonatomic) NSMutableDictionary *keyDescriptorsAwaitingUserNotifications;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) int pushToken;
@property (readonly, nonatomic) NTKFaceSupportNotificationActionEventRecorder *actionRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedService;
+ (void)cleanUpStaleBundlesEventually;
+ (void)push_blindlyUnsubscribe;

/* instance methods */
- (id)_init;
- (void)start;
- (void)requestResetOnNextLaunch:(id /* block */)launch;
- (void)knownKeyDescriptors:(id /* block */)descriptors;
- (void)displayUserNotificationForKeyDescriptor:(id)descriptor completion:(id /* block */)completion;
- (void)requestCurrentEnvironment:(id /* block */)environment;
- (void)setCurrentEnvironment:(long long)environment completion:(id /* block */)completion;
- (void)argonManagerDidRefresh:(id)refresh;
- (void)argonManager:(id)manager didExtractKeyDescriptor:(id)descriptor toPath:(id)path;
- (void)argonManager:(id)manager failedToExtractKeyDescriptor:(id)descriptor error:(id)error;
- (void)argonManager:(id)manager didRemoveExtractedArgonFolderAtPath:(id)path;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)queryForNewFaces:(id /* block */)faces;
- (void)ingestKeyDescriptor:(id)descriptor withMethod:(unsigned long long)method completion:(id /* block */)completion;
- (void)_setupUserNotificationCenter;
- (void)_checkInForFirstQueryActivity;
- (void)_checkInForDailyQueryActivity;
- (id)_baseCriteriaForArgonActivities;
- (id)_criteriaForFirstQueryActivity;
- (id)_criteriaForDailyRefreshActiviy;
- (void)_handleFirstQuery;
- (BOOL)_handleDailyQuery;
- (BOOL)_argonIsComplete;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_addFaceActionTappedFromNotification:(id)notification;
- (void)_viewFaceActionTappedFromNotification:(id)notification;
- (void)_viewWhatsNewActionTappedFromNotification:(id)notification;
- (void)_recordEventOfNotification:(id)notification action:(long long)action;
- (void)connection:(id)connection didReceivePublicToken:(id)token;
- (void)connection:(id)connection didReceiveIncomingMessage:(id)message;
- (void)_push_userNotification_faceBundleManagerDidUpdate:(id)update;
- (void)_queue_push_userNotification_processWaitingNotifications;
- (void)push_postNotificationForKeyDescriptor:(id)descriptor completion:(id /* block */)completion;
- (void)push_updatePushConnection;
- (void)_push_sendNotificationForContent:(id)content requestIdentifier:(id)identifier toNotificationCenter:(id)center identifier:(id)identifier bundle:(id)bundle completion:(id /* block */)completion;
@end

#endif /* NTKDArgonService_h */