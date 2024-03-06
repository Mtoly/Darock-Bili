//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKMapGestureCameraController_h
#define VKMapGestureCameraController_h
@import Foundation;

#include "VKGestureCameraBehavior.h"
#include "VKTimedAnimation.h"

@protocol {optional<double>=""(?="__null_state_"c"__val_"d)"__engaged_"B};

@interface VKMapGestureCameraController : VKGestureCameraBehavior {
  /* instance variables */
  struct CGPoint { double x; double y; } _panLastScreenPoint;
  BOOL _isPitchIncreasing;
  double _beganPitch;
  double _currentPitch;
  VKTimedAnimation *_zoomAnimation;
  struct optional<double> { union { char __null_state_; double __val_; } x0; BOOL __engaged_; } _rubberbandZoomStartFactor;
  struct optional<double> { union { char __null_state_; double __val_; } x0; BOOL __engaged_; } _zoomPreviousT;
}

/* instance methods */
- (void)updateZoom:(struct CGPoint { double x0; double x1; })zoom oldFactor:(double)factor newFactor:(double)factor;
- (void)endZoom:(struct CGPoint { double x0; double x1; })zoom;
- (void)updatePan:(struct CGPoint { double x0; double x1; })pan lastScreenPoint:(struct CGPoint { double x0; double x1; })point;
- (void)updateRotate:(double)rotate atScreenPoint:(struct CGPoint { double x0; double x1; })point;
- (void)beginPitch:(struct CGPoint { double x0; double x1; })pitch;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })pitch translation:(double)translation;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })pitch degrees:(double)degrees;
- (BOOL)isPitchIncreasing;
- (struct Matrix<double, 3, 1> { double x0[3] })positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> { double x0[3] })restriction;
- (struct Matrix<double, 3, 1> { double x0[3] })positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> { double x0[3] })restriction delta:(struct Matrix<double, 3, 1> { double x0[3] })delta;
@end

#endif /* VKMapGestureCameraController_h */