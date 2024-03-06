//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDLogEventBulletinNotificationsAnalyzer_h
#define HMDLogEventBulletinNotificationsAnalyzer_h
@import Foundation;

#include "HMDLogEventAnalyzer.h"
#include "HMDAggregationAnalysisEventContributing-Protocol.h"
#include "HMDCounterThresholdTTRTrigger.h"
#include "HMDEventCounterGroup.h"
#include "HMDLogEventDailyTaskRunner-Protocol.h"
#include "HMDUserNotificationCenterSettingsProviding-Protocol.h"
#include "HMMLogEventSubmitting-Protocol.h"

@class NSString;

@interface HMDLogEventBulletinNotificationsAnalyzer : HMDLogEventAnalyzer<HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner>

@property (readonly, nonatomic) NSObject<HMDUserNotificationCenterSettingsProviding> *notificationSettingsProvider;
@property (readonly, nonatomic) HMDEventCounterGroup *aggregationEventGroup;
@property (readonly, nonatomic) HMDEventCounterGroup *topicEventGroup;
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly, nonatomic) HMDCounterThresholdTTRTrigger *homeHubReachabilityTTRTrigger;
@property (readonly, nonatomic) HMDCounterThresholdTTRTrigger *cameraReachabilityTTRTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)managedEventCounterRequestGroups;

/* instance methods */
- (id)initWithDataSource:(id)source notificationSettingsProvider:(id)provider;
- (void)configurationChanged:(id)changed;
- (long long)cameraReachabilityThresholdFromConfiguration:(id)configuration;
- (void)didReceiveEventFromDispatcher:(id)dispatcher;
- (void)populateAggregationAnalysisLogEvent:(id)event;
- (void)resetAggregationAnalysisContext;
- (void)runDailyTask;
@end

#endif /* HMDLogEventBulletinNotificationsAnalyzer_h */