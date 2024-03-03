//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBackgroundActivityManager_h
#define CSLBackgroundActivityManager_h
@import Foundation;

#include "CSLBackgroundActivityControllerDelegate-Protocol.h"
#include "CSLBackgroundActivityManagerConfiguration.h"
#include "CSLBackgroundService.h"
#include "CSLBackgroundTaskRequestService-Protocol.h"
#include "CSLDuetBackgroundBudgetController.h"
#include "CSLDuetHealthKitQueryBudgetController.h"
#include "CSLDuetLaunchManager.h"
#include "_DASActivityScheduler-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSLBackgroundActivityManager : NSObject<CSLBackgroundActivityControllerDelegate, CSLBackgroundTaskRequestService>

@property (retain, nonatomic) CSLBackgroundActivityManagerConfiguration *configuration;
@property (retain, nonatomic) NSMutableDictionary *controllerMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<_DASActivityScheduler> *scheduler;
@property (readonly, nonatomic) CSLDuetBackgroundBudgetController *backgroundBudgetController;
@property (readonly, nonatomic) CSLDuetHealthKitQueryBudgetController *healthKitBudgetController;
@property (readonly, nonatomic) CSLDuetLaunchManager *duetLaunchManager;
@property (weak, nonatomic) CSLBackgroundService *backgroundService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_allowedPrivilegedClients;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (void)registerPrivilegedBackgroundClient:(id)client priority:(unsigned long long)priority leeway:(double)leeway usesBudget:(BOOL)budget simultaneousRequests:(unsigned long long)requests;
- (void)setBackgroundTaskRequest:(id)request forBundleID:(id)id completion:(id /* block */)completion;
- (void)cancelBackgroundTaskRequestForBundleID:(id)id;
- (void)cancelBackgroundTaskRequestForBundleID:(id)id withUUID:(id)uuid;
- (void)submittedRequestsForBundleID:(id)id completion:(id /* block */)completion;
- (id)accountForBackgroundHealthKitQuery:(id)query uuid:(id)uuid;
- (void)startBackgroundActivity:(id)activity uuid:(id)uuid forComplication:(BOOL)complication startBlock:(id /* block */)block;
- (void)backgroundActivityComplete:(id)complete for:(id)for;
- (void)resubmitLastActivity:(id)activity uuid:(id)uuid;
- (id)_queue_existingOrNewActivityControllerForBundleID:(id)id;
- (id)_queue_existingActivityControllerForBundleID:(id)id;
- (void)_queue_restoreSubmittedActivities;
- (id)reasonForController:(id)controller;
- (void)applicationUpgradeMonitor:(id)monitor removed:(id)removed;
- (void)getRequestsWithCompletion:(id /* block */)completion;
- (void)_queue_getRequestsWithCompletion:(id /* block */)completion;
- (id)descriptionWithMultilinePrefix:(id)prefix;
@end

#endif /* CSLBackgroundActivityManager_h */