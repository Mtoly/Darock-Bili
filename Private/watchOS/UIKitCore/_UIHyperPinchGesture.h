//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIHyperPinchGesture_h
#define _UIHyperPinchGesture_h
@import Foundation;

#include "_UIHyperGesture.h"
#include "UIPinchGestureRecognizer.h"

@interface _UIHyperPinchGesture : _UIHyperGesture

@property (retain, nonatomic) UIPinchGestureRecognizer *_pinchGestureRecognizer;
@property (nonatomic) double _multiplier;

/* instance methods */
- (id)init;
- (id)initWithInteractor:(id)interactor;
- (void)_setPinchGestureRecognizer:(id)recognizer;
- (void)_getCurrentTranslation:(double *)translation;
- (void)_getCurrentVelocity:(double *)velocity;
- (void)_setMultiplier:(double)multiplier;
@end

#endif /* _UIHyperPinchGesture_h */