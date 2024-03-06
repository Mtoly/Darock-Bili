//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSRemoteWebViewRequest_h
#define SSRemoteWebViewRequest_h
@import Foundation;

#include "SSRequest.h"

@class NSString;

@interface SSRemoteWebViewRequest : SSRequest

@property (retain, nonatomic) NSString *referrer;
@property (retain, nonatomic) NSString *URLString;

/* instance methods */
- (void)startWithCompletionBlock:(id /* block */)block;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
@end

#endif /* SSRemoteWebViewRequest_h */