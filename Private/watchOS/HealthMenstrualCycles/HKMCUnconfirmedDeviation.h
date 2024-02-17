//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMCUnconfirmedDeviation_h
#define HKMCUnconfirmedDeviation_h
@import Foundation;

#include "HKRedactedDescription-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface HKMCUnconfirmedDeviation : NSObject<HKRedactedDescription, NSCopying, NSSecureCoding>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct { long long x0; long long x1; } days;
@property (readonly, nonatomic) NSDictionary *analyticsMetadata;
@property (readonly, copy) NSString *hk_redactedDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithType:(long long)type days:(struct { long long x0; long long x1; })days analyticsMetadata:(id)metadata;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKMCUnconfirmedDeviation_h */