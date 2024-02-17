//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1131.0.0.0.0
//
#ifndef FOAuthorizationRecord_h
#define FOAuthorizationRecord_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface FOAuthorizationRecord : NSObject<NSSecureCoding>

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *teamIdentifier;
@property (readonly, copy) NSUUID *recordIdentifier;
@property (readonly) long long status;
@property (readonly) long long type;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBundleIdentifier:(id)identifier teamIdentifier:(id)identifier recordIdentifier:(id)identifier status:(long long)status type:(long long)type;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* FOAuthorizationRecord_h */