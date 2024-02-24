//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKSiderealSolarEvent_h
#define NTKSiderealSolarEvent_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface NTKSiderealSolarEvent : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) double degree;

/* class methods */
+ (id)eventWithType:(long long)type time:(id)time degree:(double)degree;
+ (id)eventWithType:(long long)type degree:(double)degree;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)debugNameForType:(long long)type;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* NTKSiderealSolarEvent_h */