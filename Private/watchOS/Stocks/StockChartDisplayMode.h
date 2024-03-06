//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef StockChartDisplayMode_h
#define StockChartDisplayMode_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface StockChartDisplayMode : NSObject<NSCopying> {
  /* instance variables */
  NSString *_hash;
}

@property (nonatomic) struct CGSize { double x0; double x1; } chartSize;
@property (nonatomic) BOOL showsVolume;
@property (nonatomic) long long maxInterval;
@property (nonatomic) BOOL HUDEnabled;
@property (nonatomic) double showsTitle;
@property (nonatomic) unsigned long long yAxisLabelCount;
@property (nonatomic) unsigned long long horizontalGridlineCount;
@property (nonatomic) BOOL showsPriceLabelForPreviousClose;
@property (nonatomic) BOOL usesDetailedAxisLabels;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } lineGraphInsets;
@property (nonatomic) BOOL graphOverlapsYAxisLabels;
@property (nonatomic) double volumeHeight;
@property (nonatomic) double intervalRowHeight;
@property (readonly, nonatomic) double gutterHeight;
@property (readonly, nonatomic) double lineGraphBottomPadding;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *backgroundLinesColor;
@property (retain, nonatomic) UIColor *xAxisKeylineColor;
@property (retain, nonatomic) UIColor *axisLabelsColor;
@property (nonatomic) struct CGGradient * backgroundGradient;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } chartRenderingInsets;

/* class methods */
+ (id)defaultDisplayMode;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* StockChartDisplayMode_h */