//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextGestureTuning_h
#define UITextGestureTuning_h
@import Foundation;

#include "UICoordinateSpace-Protocol.h"
#include "UITextMagnifierTimeWeightedPoint.h"

@interface UITextGestureTuning : NSObject {
  /* instance variables */
  struct CGPoint { double x; double y; } _caretDistance;
  double _initialOffsetFromTopOfCaret;
  UITextMagnifierTimeWeightedPoint *_weightedPoint;
  long long _lastTouchType;
}

@property (weak, nonatomic) NSObject<UICoordinateSpace> *containerCoordinateSpace;
@property (weak, nonatomic) NSObject<UICoordinateSpace> *gestureCoordinateSpace;
@property (nonatomic) BOOL shouldUseLineThreshold;
@property (nonatomic) BOOL shouldIncludeConstantOffset;
@property (nonatomic) BOOL includeTipProjection;
@property (nonatomic) BOOL strongerBiasAgainstUp;
@property (readonly, nonatomic) BOOL didBreakLineThreshold;
@property (readonly, nonatomic) double initialPosition;
@property (readonly, nonatomic) double lineBreakProgress;

/* instance methods */
- (id)init;
- (struct CGPoint { double x0; double x1; })pointForGestureState:(long long)state point:(struct CGPoint { double x0; double x1; })point translation:(struct CGPoint { double x0; double x1; })translation;
- (void)_reset;
- (void)assertInitialPositionFromTopOfCaret:(double)caret distanceFromCaret:(struct CGPoint { double x0; double x1; })caret;
- (void)updateWithTouches:(id)touches gestureState:(long long)state;
- (void)updateVisibilityOffsetForGestureState:(long long)state touchType:(long long)type locationInSceneReferenceSpace:(struct CGPoint { double x0; double x1; })space majorRadius:(double)radius;
- (struct CGPoint { double x0; double x1; })touchAlignedPointForPoint:(struct CGPoint { double x0; double x1; })point translation:(struct CGPoint { double x0; double x1; })translation;
- (void)updateWeightedPointWithGestureState:(long long)state location:(struct CGPoint { double x0; double x1; })location;
- (struct CGPoint { double x0; double x1; })pointIfPlacedCarefully:(struct CGPoint { double x0; double x1; })carefully;
@end

#endif /* UITextGestureTuning_h */