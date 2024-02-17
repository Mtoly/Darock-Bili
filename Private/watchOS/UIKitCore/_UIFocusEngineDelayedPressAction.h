//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusEngineDelayedPressAction_h
#define _UIFocusEngineDelayedPressAction_h
@import Foundation;

#include "_UIFocusEventRecognizer.h"

@interface _UIFocusEngineDelayedPressAction : NSObject

@property (readonly, weak, nonatomic) _UIFocusEventRecognizer *sender;
@property (readonly, nonatomic) long long pressType;
@property (readonly, nonatomic) double timestamp;

/* class methods */
+ (void)sendDelayedPressWithType:(long long)type timestamp:(double)timestamp sender:(id)sender;

/* instance methods */
- (id)_initWithPressType:(long long)type timestamp:(double)timestamp sender:(id)sender;
- (void)_sendPressEvent;
@end

#endif /* _UIFocusEngineDelayedPressAction_h */