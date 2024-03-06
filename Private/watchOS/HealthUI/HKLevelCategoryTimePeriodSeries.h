//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKLevelCategoryTimePeriodSeries_h
#define HKLevelCategoryTimePeriodSeries_h
@import Foundation;

#include "HKHorizontalTimePeriodSeries.h"

@class NSLock, NSString, UIColor, UIFont;

@interface HKLevelCategoryTimePeriodSeries : HKHorizontalTimePeriodSeries

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (nonatomic) double markerRadiusStorage;
@property (retain, nonatomic) UIColor *innerMarkColorStorage;
@property (retain, nonatomic) UIFont *categoryLevelFontStorage;
@property (retain, nonatomic) UIColor *categoryLevelColorStorage;
@property (retain, nonatomic) UIColor *specialMarkColorStorage;
@property (retain, nonatomic) NSString *specialMarkLegendLabelStorage;
@property (nonatomic) BOOL drawSampleSpansStorage;
@property (nonatomic) double markerRadius;
@property (retain, nonatomic) UIColor *innerMarkColor;
@property (retain, nonatomic) UIFont *categoryLevelFont;
@property (retain, nonatomic) UIColor *categoryLevelColor;
@property (retain, nonatomic) UIColor *specialMarkColor;
@property (retain, nonatomic) NSString *specialMarkLegendLabel;
@property (nonatomic) BOOL drawSampleSpans;

/* instance methods */
- (id)init;
- (BOOL)_interiorCategoryLabels;
- (id)findAxisLabelsInModelRange:(id)range zoomScale:(double)scale;
- (id)coordinatesForBlock:(id)block blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })path xAxis:(id)axis yAxis:(id)axis;
- (void)drawSeriesWithBlockCoordinates:(id)coordinates axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect zoomLevelConfiguration:(id)configuration pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform renderContext:(struct CGContext *)context secondaryRenderContext:(id)context seriesRenderingDelegate:(id)delegate;
- (void)_drawMarkerWithContext:(struct CGContext *)context style:(long long)style color:(struct CGColor *)color innerColor:(struct CGColor *)color specialColor:(struct CGColor *)color location:(struct CGPoint { double x0; double x1; })location radius:(double)radius;
- (void)_drawCategoryLabels:(struct CGContext *)labels axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect seriesRenderingDelegate:(id)delegate;
- (double)offsetForEnumerationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)marginsForYAxis:(id)yaxis xAxisRange:(id)range zoomLevel:(long long)level chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* HKLevelCategoryTimePeriodSeries_h */