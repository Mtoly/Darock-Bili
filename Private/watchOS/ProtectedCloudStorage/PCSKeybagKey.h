//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 976.40.4.0.0
//
#ifndef PCSKeybagKey_h
#define PCSKeybagKey_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData;

@interface PCSKeybagKey : NSObject<NSSecureCoding>

@property (retain) NSData *data;
@property long long flags;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PCSKeybagKey_h */