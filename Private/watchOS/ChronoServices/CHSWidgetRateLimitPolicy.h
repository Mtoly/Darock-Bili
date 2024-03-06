//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSWidgetRateLimitPolicy_h
#define CHSWidgetRateLimitPolicy_h
@import Foundation;

#include "BSDescriptionStreamable-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet, NSString;

@interface CHSWidgetRateLimitPolicy : NSObject<BSDescriptionStreamable, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *rateLimits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier rateLimits:(id)limits;
- (BOOL)isEqual:(id)equal;
- (void)appendDescriptionToFormatter:(id)formatter;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CHSWidgetRateLimitPolicy_h */