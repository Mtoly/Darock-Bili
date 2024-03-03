//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef RKCurrencyAmount_h
#define RKCurrencyAmount_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface RKCurrencyAmount : NSObject<NSSecureCoding>

@property (readonly) NSString *string;
@property (readonly) NSString *currency;
@property (readonly) double value;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithString:(id)string currency:(id)currency value:(double)value;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* RKCurrencyAmount_h */