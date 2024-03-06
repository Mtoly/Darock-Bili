//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef TASingleVisitDetectionMetrics_h
#define TASingleVisitDetectionMetrics_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "TAInterVisitMetricPerDevice.h"

@interface TASingleVisitDetectionMetrics : NSObject<NSSecureCoding>

@property (readonly, nonatomic) TAInterVisitMetricPerDevice *interVisitMetrics;
@property (readonly, nonatomic) unsigned long long loiType;
@property (readonly, nonatomic) unsigned long long previousVisitType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithInterVisitMetrics:(id)metrics loiType:(unsigned long long)type previousVisitType:(unsigned long long)type;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TASingleVisitDetectionMetrics_h */