//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSleepStageSeries_h
#define HKSleepStageSeries_h
@import Foundation;

#include "HKSleepPeriodSeries.h"
#include "HKSleepStageCategoryHighlightable-Protocol.h"

@class NSArray, NSLock, NSNumber;

@interface HKSleepStageSeries : HKSleepPeriodSeries<HKSleepStageCategoryHighlightable>

@property (copy, nonatomic) NSNumber *highlightedSleepStageStorage;
@property (copy, nonatomic) NSArray *sleepStageFillStylesStorage;
@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (copy, nonatomic) NSNumber *highlightedSleepStage;
@property (copy, nonatomic) NSArray *sleepStageFillStyles;

/* instance methods */
- (id)init;
- (id)coordinatesForBlock:(id)block blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })path xAxis:(id)axis yAxis:(id)axis;
- (void)updateChartPointUserInfo:(id)info forHighlightedSleepStage:(id)stage;
- (void)_drawWithBlockCoordinates:(id)coordinates visibleBarCount:(long long)count pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform context:(struct CGContext *)context axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect axisResolution:(double)resolution seriesRenderingDelegate:(id)delegate;
- (void)_drawColumnForLayer:(long long)layer offsets:(id)offsets coordinate:(id)coordinate selectedBezierPaths:(id)paths unselectedBezierPaths:(id)paths barWidth:(double)width pathCount:(long long *)count;
- (void)_rebuildFillStyles;
- (id)marginsForYAxis:(id)yaxis xAxisRange:(id)range zoomLevel:(long long)level chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* HKSleepStageSeries_h */