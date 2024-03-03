//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMCWristTemperature_h
#define HKMCWristTemperature_h
@import Foundation;

#include "HKRedactedDescription-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class HKQuantity, NSString;

@interface HKMCWristTemperature : NSObject<HKRedactedDescription, NSSecureCoding, NSCopying>

@property (readonly, nonatomic) HKQuantity *quantity;
@property (readonly, nonatomic) NSString *watchBundleIdentifier;
@property (readonly, copy) NSString *hk_redactedDescription;

/* class methods */
+ (id)wristTemperatureFromWristTemperatureSample:(id)sample;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithQuantity:(id)quantity watchBundleIdentifier:(id)identifier;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* HKMCWristTemperature_h */