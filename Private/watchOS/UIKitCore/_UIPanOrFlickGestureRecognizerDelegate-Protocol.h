//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPanOrFlickGestureRecognizerDelegate_Protocol_h
#define _UIPanOrFlickGestureRecognizerDelegate_Protocol_h
@import Foundation;

@protocol _UIPanOrFlickGestureRecognizerDelegate <UIGestureRecognizerDelegate>
@optional
/* instance methods */
- (void)gestureRecognizerShouldBeginResponse:(id)response;
- (double)additionalPressDurationForTypingCadence:(id)cadence;
@end

#endif /* _UIPanOrFlickGestureRecognizerDelegate_Protocol_h */