//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWKUILinearGaugeView_h
#define NWKUILinearGaugeView_h
@import Foundation;

#include "UIView.h"

@class CAGradientLayer, CALayer, NSArray, UIColor, UIView;

@interface NWKUILinearGaugeView : UIView

@property (nonatomic) struct { double x0; double x1; double x2; } layoutConstants;
@property (nonatomic) double lastLayoutSubviewsHeight;
@property (retain, nonatomic) CALayer *gaugeWrapperLayer;
@property (retain, nonatomic) CAGradientLayer *backgroundGaugeLayer;
@property (retain, nonatomic) CAGradientLayer *gaugeLayer;
@property (retain, nonatomic) UIView *valueIndicator;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } valueIndicatorCutoutFrame;
@property (copy, nonatomic) UIColor *indicatorFillColor;
@property (retain, nonatomic) NSArray *backgroundColorIndices;
@property (retain, nonatomic) NSArray *colorIndices;
@property (nonatomic) double highValue;
@property (nonatomic) double value;
@property (nonatomic) BOOL includeBackground;
@property (nonatomic) BOOL renderValueAsPercentage;

/* instance methods */
- (id)initWithLayoutConstants:(struct { double x0; double x1; double x2; })constants;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)applyForegroundGaugeFilters:(id)filters;
- (void)applyBackgroundGaugeFilters:(id)filters fraction:(double)fraction;
- (void)applyIndicatorFillColor:(id)color;
- (void)interpolateIndicatorWithColor:(id)color fraction:(double)fraction;
- (void)_applyCGColors:(id)cgcolors toGradientLayer:(id)layer;
- (id)_cgColorsFromColorIndices:(id)indices;
- (struct CGPoint { double x0; double x1; })_centerOfValueIndicator:(id)indicator;
- (id)_createGradientLayer;
- (void)_gradientLocationInformationForGaugeWithHeight:(double)height colorIndices:(id)indices handler:(id /* block */)handler;
- (void)_setNeedsUpdateGauge;
- (BOOL)shouldIncludeBackground;
- (BOOL)shouldRenderValueAsPercentage;
@end

#endif /* NWKUILinearGaugeView_h */