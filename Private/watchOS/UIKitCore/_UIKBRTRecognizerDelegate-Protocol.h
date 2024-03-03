//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKBRTRecognizerDelegate_Protocol_h
#define _UIKBRTRecognizerDelegate_Protocol_h
@import Foundation;

@protocol _UIKBRTRecognizerDelegate <NSObject>
/* instance methods */
- (void)recognizer:(id)recognizer beginTouchDownForTouchWithId:(id)id atPoint:(struct CGPoint { double x0; double x1; })point forBeginState:(unsigned long long)state whenStateReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer restartTouchDownForTouchWithId:(id)id startingAt:(double)at atPoint:(struct CGPoint { double x0; double x1; })point currentPoint:(struct CGPoint { double x0; double x1; })point whenStateReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer shouldContinueTrackingTouchWithId:(id)id startingAt:(double)at atPoint:(struct CGPoint { double x0; double x1; })point currentPoint:(struct CGPoint { double x0; double x1; })point forContinueState:(unsigned long long)state whenStateReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer willIgnoreTouchWithId:(id)id startingAt:(double)at atPoint:(struct CGPoint { double x0; double x1; })point currentPoint:(struct CGPoint { double x0; double x1; })point whenReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer continueTrackingIgnoredTouchWithId:(id)id currentPoint:(struct CGPoint { double x0; double x1; })point whenReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer releaseTouchToLayoutWithId:(id)id startPoint:(struct CGPoint { double x0; double x1; })point endPoint:(struct CGPoint { double x0; double x1; })point whenReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer cancelTouchOnLayoutWithId:(id)id startPoint:(struct CGPoint { double x0; double x1; })point endPoint:(struct CGPoint { double x0; double x1; })point whenReady:(id /* block */)ready;
@end

#endif /* _UIKBRTRecognizerDelegate_Protocol_h */