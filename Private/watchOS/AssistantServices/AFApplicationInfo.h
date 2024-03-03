//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFApplicationInfo_h
#define AFApplicationInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface AFApplicationInfo : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int pid;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* AFApplicationInfo_h */