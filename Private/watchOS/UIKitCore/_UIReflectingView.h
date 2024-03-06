//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIReflectingView_h
#define _UIReflectingView_h
@import Foundation;

#include "UIView.h"
#include "UIView.h"

@interface _UIReflectingView : UIView {
  /* instance variables */
  UIView *_gradientView;
}

@property (readonly, retain, nonatomic) UIView *containerView;
@property (nonatomic) double reflectionFraction;
@property (nonatomic) double reflectionAlpha;

/* instance methods */
- (id)_gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateGradientColors;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)color;
@end

#endif /* _UIReflectingView_h */