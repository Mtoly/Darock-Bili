//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRStringPair_h
#define XRStringPair_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface XRStringPair : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *first;
@property (readonly, nonatomic) NSString *second;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFirst:(id)first second:(id)second;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hashValue;
@end

#endif /* XRStringPair_h */