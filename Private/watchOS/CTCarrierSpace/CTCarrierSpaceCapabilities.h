//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTCarrierSpaceCapabilities_h
#define CTCarrierSpaceCapabilities_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface CTCarrierSpaceCapabilities : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL supportsServices;
@property (nonatomic) BOOL supportsUsage;
@property (nonatomic) BOOL supportsPlans;
@property (nonatomic) BOOL supportsApplications;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CTCarrierSpaceCapabilities_h */