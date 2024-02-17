//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHAPMetricsReachabilityTimerLateEvent_h
#define HMDHAPMetricsReachabilityTimerLateEvent_h
@import Foundation;

#include "HMDHAPMetrics.h"

@class NSNumber;

@interface HMDHAPMetricsReachabilityTimerLateEvent : HMDHAPMetrics

@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *expectedDuration;

/* instance methods */
- (id)initWithAccessory:(id)accessory duration:(id)duration expectedDuration:(id)duration;
- (id)coreAnalyticsEventName;
- (id)coreAnalyticsEventDictionary;
@end

#endif /* HMDHAPMetricsReachabilityTimerLateEvent_h */