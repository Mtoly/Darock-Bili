//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSURLSessionToken_h
#define CHSURLSessionToken_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CHSURLSessionToken : NSObject<NSSecureCoding, BSInvalidatable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)invalidate;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isValid;
@end

#endif /* CHSURLSessionToken_h */