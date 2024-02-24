//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSPrivacyMetricsEvent_h
#define SSPrivacyMetricsEvent_h
@import Foundation;

#include "SSMetricsMutableEvent.h"

@class NSNumber, NSString;

@interface SSPrivacyMetricsEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString *acknowledgmentIdentifier;
@property (retain, nonatomic) NSNumber *acknowledgmentVersion;
@property (nonatomic) BOOL acknowledged;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL displayed;

/* instance methods */
- (id)init;
@end

#endif /* SSPrivacyMetricsEvent_h */