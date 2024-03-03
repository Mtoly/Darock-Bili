//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMSenderContext_h
#define IMSenderContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class IMSenderContext_Impl, NSString;

@interface IMSenderContext : NSObject<NSSecureCoding> {
  /* instance variables */
  IMSenderContext_Impl *swiftImpl;
}

@property (readonly, nonatomic) BOOL isTrustedSender;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSString *serviceName;

/* class methods */
+ (id)contextWithKnownSender:(BOOL)sender;
+ (id)fromMeContext;
+ (id)untrustedContext;
+ (id)businessChatContext;
+ (id)contextWithKnownSender:(BOOL)sender serviceName:(id)name;
+ (id)fromMeContextWithServiceName:(id)name;
+ (id)untrustedContextWithServiceName:(id)name;
+ (id)businessChatContextWithServiceName:(id)name;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSenderContext_Impl:(id)impl;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* IMSenderContext_h */