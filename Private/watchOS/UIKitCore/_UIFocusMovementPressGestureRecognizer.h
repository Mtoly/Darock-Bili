//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusMovementPressGestureRecognizer_h
#define _UIFocusMovementPressGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"
#include "_UIRepeatingGestureClock.h"
#include "_UIRepeatingGestureClockDelegate-Protocol.h"

@class NSMutableOrderedSet, NSString;

@interface _UIFocusMovementPressGestureRecognizer : UIGestureRecognizer<_UIRepeatingGestureClockDelegate>

@property (retain, nonatomic) _UIRepeatingGestureClock *repeatingClock;
@property (readonly, nonatomic) BOOL isRecognizing;
@property (nonatomic) unsigned long long focusHeading;
@property (retain, nonatomic) NSMutableOrderedSet *trackedPresses;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) long long repeatCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)configureDefaults;
- (BOOL)_isRecognizing;
- (id)_trackedPresses;
- (void)setAllowedTouchTypes:(id)types;
- (BOOL)shouldReceiveEvent:(id)event;
- (void)setFocusHeading:(unsigned long long)heading omitStateUpdate:(BOOL)update;
- (void)reset;
- (void)repeatingGestureClockDidTick:(id)tick;
- (unsigned long long)focusHeadingForPresses:(id)presses;
- (void)_startTrackingPresses:(id)presses;
- (void)_stopTrackingPresses:(id)presses;
- (void)_verifyTrackingPresses:(id)presses;
- (void)_updateForPresses:(id)presses action:(unsigned long long)action;
- (void)pressesBegan:(id)began withEvent:(id)event;
- (void)pressesChanged:(id)changed withEvent:(id)event;
- (void)pressesEnded:(id)ended withEvent:(id)event;
- (void)pressesCancelled:(id)cancelled withEvent:(id)event;
- (void)_setTrackedPresses:(id)presses;
@end

#endif /* _UIFocusMovementPressGestureRecognizer_h */