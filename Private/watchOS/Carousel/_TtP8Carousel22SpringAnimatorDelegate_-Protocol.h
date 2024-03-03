//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef _TtP8Carousel22SpringAnimatorDelegate__Protocol_h
#define _TtP8Carousel22SpringAnimatorDelegate__Protocol_h
@import Foundation;

@protocol Carousel.SpringAnimatorDelegate 
/* instance methods */
- (void)springAnimator:(id)animator springForKey:(id)key updatedWithValue:(double)value;
- (void)springAnimator:(id)animator zoomSpringForKey:(id)key updatedWithZoom:(double)zoom transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transform;
- (void)springAnimatorDidComplete:(id)complete;
@end

#endif /* _TtP8Carousel22SpringAnimatorDelegate__Protocol_h */