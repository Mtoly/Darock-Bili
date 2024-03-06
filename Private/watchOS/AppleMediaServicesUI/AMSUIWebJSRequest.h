//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIWebJSRequest_h
#define AMSUIWebJSRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface AMSUIWebJSRequest : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSString *service;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithServiceName:(id)name logKey:(id)key;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* AMSUIWebJSRequest_h */