//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHouseholdActivityLogEventContributor_h
#define HMDHouseholdActivityLogEventContributor_h
@import Foundation;

#include "HMDLogEventAnalyzer.h"
#include "HMDEventCountersManager.h"
#include "HMDHouseholdActivityLogEventContributing-Protocol.h"

@class HMMDateProvider, NSString;

@interface HMDHouseholdActivityLogEventContributor : HMDLogEventAnalyzer<HMDHouseholdActivityLogEventContributing>

@property (readonly, nonatomic) NSString *householdGroupName;
@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithHouseholdGroupName:(id)name countersManager:(id)manager dateProvider:(id)provider;
- (id)householdGroupForHomeWithUUID:(id)uuid associatedWithDate:(id)date;
- (id)householdGroupForLogEvent:(id)event;
- (void)populateLogEvent:(id)event forHomeWithUUID:(id)uuid associatedToDate:(id)date;
- (void)contributeLogEvent:(id)event toSerializedMetric:(id)metric;
- (void)deserializeLogEvent:(id)event fromSerializedMetric:(id)metric;
- (void)contributeLogEvent:(id)event toCoreAnalyticsEvent:(id)event;
- (void)startCoalescingLogEvent:(id)event;
- (void)coalesceLogEvent:(id)event fromSourceEvent:(id)event;
- (void)finishCoalescingLogEvent:(id)event;
- (void)deleteCountersBeforeDate:(id)date;
- (void)deleteCountersAfterDate:(id)date;
@end

#endif /* HMDHouseholdActivityLogEventContributor_h */