//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICDetentPlayer_h
#define PUICDetentPlayer_h
@import Foundation;

#include "BLSBacklightStateObserving-Protocol.h"

@class CADisplayLink, NSMutableArray, NSString;

@interface PUICDetentPlayer : NSObject<BLSBacklightStateObserving>

@property (nonatomic) struct _opaque_pthread_mutex_t { long long x0; char x1[56] } lock;
@property (retain, nonatomic) NSMutableArray *queuedDetents;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) long long nextFrameNumberToPlay;
@property (nonatomic) long long currentFrameNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_withLock:(id /* block */)lock;
- (void)_resetQueue;
- (void)playDetentOfType:(long long)type strength:(long long)strength velocity:(double)velocity completion:(id /* block */)completion;
- (void)_displayLinkFired:(id)fired;
- (void)_playDetent:(id)detent;
- (void)backlight:(id)backlight didCompleteUpdateToState:(long long)state forEvent:(id)event;
@end

#endif /* PUICDetentPlayer_h */