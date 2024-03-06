//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLXPCMessageLogger_h
#define PLXPCMessageLogger_h
@import Foundation;

#include "NSXPCConnectionDelegate-Protocol.h"

@class NSString;

@interface PLXPCMessageLogger : NSObject<NSXPCConnectionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)enabled;

/* instance methods */
- (void)connection:(id)connection handleInvocation:(id)invocation isReply:(BOOL)reply;
@end

#endif /* PLXPCMessageLogger_h */