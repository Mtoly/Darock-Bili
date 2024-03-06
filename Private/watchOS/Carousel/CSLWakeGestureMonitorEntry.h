//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLWakeGestureMonitorEntry_h
#define CSLWakeGestureMonitorEntry_h
@import Foundation;

#include "CSLSWakeGestureObserver-Protocol.h"

@class NSString, NSXPCConnection;

@interface CSLWakeGestureMonitorEntry : NSObject<CSLSWakeGestureObserver>

@property (readonly, weak, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL wantsUnfilteredGestures;
@property (nonatomic) BOOL wantsUnfilteredGesturesWhenScreenOff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConnection:(id)connection wantsUnfilteredGestures:(BOOL)gestures includingWhenScreenOff:(BOOL)off;
- (void)dealloc;
- (void)wakeGestureRecognized:(id)recognized;
@end

#endif /* CSLWakeGestureMonitorEntry_h */