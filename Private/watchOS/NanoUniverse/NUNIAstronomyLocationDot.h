//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NUNIAstronomyLocationDot_h
#define NUNIAstronomyLocationDot_h
@import Foundation;

#include "UIView.h"
#include "NUNIAstronomyLocationDotConfiguration.h"

@class UIColor, UIImageView, UIView;

@interface NUNIAstronomyLocationDot : UIView {
  /* instance variables */
  UIView *_outerDot;
  UIImageView *_innerDotImageView;
  NUNIAstronomyLocationDotConfiguration *_configuration;
}

@property (retain, nonatomic) UIColor *outerDotColor;
@property (nonatomic) double outerDotDiameter;
@property (retain, nonatomic) UIColor *innerDotColor;
@property (nonatomic) double innerDotDiameter;
@property (nonatomic) double pulseDuration;
@property (nonatomic) double pulseAlphaDelay;
@property (nonatomic) BOOL animating;

/* class methods */
+ (id)_defaultColor;
+ (double)defaultPulseDuration;
+ (double)defaultPulseAlphaDelay;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame configuration:(id)configuration;
- (void)_generateInnerDotImage;
- (double)screenScale;
- (void)startAnimation;
- (void)startAnimationWithCompletionBlock:(id /* block */)block;
- (void)stopAnimation;
- (void)layoutSubviews;
@end

#endif /* NUNIAstronomyLocationDot_h */