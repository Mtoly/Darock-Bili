//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3200.3.1.0.0
//
#ifndef PLLoggingServiceListener_h
#define PLLoggingServiceListener_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"

@class NSXPCListener;

@interface PLLoggingServiceListener : NSObject

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSObject<NSXPCListenerDelegate> *delegate;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
@end

#endif /* PLLoggingServiceListener_h */