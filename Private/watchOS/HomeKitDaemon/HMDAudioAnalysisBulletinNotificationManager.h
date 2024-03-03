//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAudioAnalysisBulletinNotificationManager_h
#define HMDAudioAnalysisBulletinNotificationManager_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAppleAccountManager.h"
#include "HMDBulletinNotificationRegistrationSource.h"
#include "HMDHome.h"
#include "HMDNotificationConditionEvaluator.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFMessageDispatcher, HMFTimer, NSNotificationCenter, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAudioAnalysisBulletinNotificationManager : HMFObject<HMFLogging, HMFMessageReceiver, HMFTimerDelegate>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDAppleAccountManager *accountManager;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property (retain) HMFTimer *synchronizeWithPrimaryDebounceTimer;
@property (copy) id /* block */ synchronizeWithPrimaryDebounceTimerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (id)logCategory;
+ (id)registrationsForSource:(id)source context:(id)context;

/* instance methods */
- (id)initWithHome:(id)home workQueue:(id)queue messageDispatcher:(id)dispatcher accountManager:(id)manager evaluator:(id)evaluator notificationCenter:(id)center;
- (void)configure;
- (void)handleAudioAnalysisEvent:(id)event;
- (id)localRegistrationForAccessory:(id)accessory enabled:(BOOL *)enabled;
- (void)updateNotificationRegistration:(id)registration enabled:(BOOL)enabled completion:(id /* block */)completion;
- (void)_updateNotificationRegistration:(id)registration enabled:(BOOL)enabled completion:(id /* block */)completion;
- (BOOL)multipleLocalRegistrationsForAccessory:(id)accessory;
- (void)cleanupMultipleRegistrationsAndReplaceWithRegistration:(id)registration completion:(id /* block */)completion;
- (void)_cleanupMultipleRegistrationsAndReplaceWithRegistration:(id)registration completion:(id /* block */)completion;
- (void)_handleAudioAnalysisEventResidentToPrimaryMessage:(id)message;
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)notification;
- (void)handlePrimaryResidentUpdateNotification:(id)notification;
- (void)timerDidFire:(id)fire;
- (id)registrations;
- (id)_remoteAudioAnalysisRegistrationsForUUID:(id)uuid;
- (void)_notifyDevice:(id)device event:(id)event user:(id)user;
- (id)userDevicesToNotify:(id)notify withEvent:(id)event;
- (id)logIdentifier;
- (void)synchronizeLocalRegistrationsWithPrimaryResident;
- (void)_requestSynchronizeRegistrations;
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)registrations disabledRegistrations:(id)registrations;
- (id)_mkfLocalAnalysisSignificantEventRegistrationsWithManagedObjectContext:(id)context;
@end

#endif /* HMDAudioAnalysisBulletinNotificationManager_h */