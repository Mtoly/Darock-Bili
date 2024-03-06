//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 100.2.0.0.0
//
#ifndef HAMenstrualAlgorithmsDeviation_h
#define HAMenstrualAlgorithmsDeviation_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface HAMenstrualAlgorithmsDeviation : NSObject<NSSecureCoding>

@property (nonatomic) unsigned int julianDayOfAnalysisWindowStart;
@property (nonatomic) unsigned int julianDayOfAnalysisWindowEnd;
@property (copy, nonatomic) NSDictionary *metricsForCoreAnalytics;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HAMenstrualAlgorithmsDeviation_h */