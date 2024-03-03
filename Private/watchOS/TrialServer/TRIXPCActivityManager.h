//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIXPCActivityManager_h
#define TRIXPCActivityManager_h
@import Foundation;

#include "TRIServerContext.h"
#include "TRITaskQueue.h"
#include "TRIXPCActivityManagementProtocol-Protocol.h"

@protocol OS_dispatch_queue;

@interface TRIXPCActivityManager : NSObject<TRIXPCActivityManagementProtocol> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) TRIServerContext *context;
@property (retain, nonatomic) TRITaskQueue *taskQueue;

/* instance methods */
- (id)initWithDispatchQueue:(id)queue;
- (void)registerActivities;
- (void)postponeCellularActivity;
- (void)_registerRetryFailuresActivity;
- (void)_setDelaySeconds:(long long)seconds forXPCActivity:(id)xpcactivity withLabel:(id)label replacementCriteria:(id)criteria;
- (void)_setJitterForXPCActivity:(id)xpcactivity withLabel:(id)label replacementCriteria:(id)criteria;
- (void)_scheduleFetchTaskWithActivityDescriptor:(id)descriptor label:(id)label;
- (void)_scheduleBMLTFetchTaskWithActivityDescriptor:(id)descriptor label:(id)label;
- (void)_scheduleMaintenanceTaskWithActivityDescriptor:(id)descriptor label:(id)label;
- (void)_registerCellularActivityWithDelay:(double)delay;
- (void)_registerFetchExperimentsActivity;
- (void)_registerFetchBMLTActivity;
- (void)_registerMaintenanceWorkActivity;
- (void)_registerPostUpgradeActivity;
- (void)_registerPostUpgradeActivityRequireInexpensiveNetworking;
- (void)registerSetupAssistantFetchActivity;
- (void)_registerHotfixTargetingActivity;
- (void)_registerPlaceholderTaskQueueActivity;
- (void)_registerClientTriggeredActivities;
@end

#endif /* TRIXPCActivityManager_h */