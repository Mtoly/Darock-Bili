//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISKInputGestureEvent_h
#define TISKInputGestureEvent_h
@import Foundation;

#include "TISKInputEvent.h"

@interface TISKInputGestureEvent : TISKInputEvent
/* instance methods */
- (id)init:(id)init emojiSearchMode:(BOOL)mode order:(long long)order;
- (id)description;
- (void)reportToSession:(id)session;
- (void)reportInterKeyTiming:(id)timing previousEvent:(id)event;
@end

#endif /* TISKInputGestureEvent_h */