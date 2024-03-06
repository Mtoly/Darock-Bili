//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKLineSeriesPresentationStyle_h
#define HKLineSeriesPresentationStyle_h
@import Foundation;

#include "HKAxisLabelStyle.h"
#include "HKFillStyle.h"
#include "HKLegendPointAnnotationStyle.h"
#include "HKLineSeriesPointMarkerStyle.h"
#include "HKStrokeStyle.h"

@interface HKLineSeriesPresentationStyle : NSObject

@property (retain, nonatomic) HKStrokeStyle *strokeStyle;
@property (retain, nonatomic) HKFillStyle *fillStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *pointMarkerStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *endCapStyle;
@property (nonatomic) unsigned long long waveForm;
@property (retain, nonatomic) HKAxisLabelStyle *annotationStyle;
@property (retain, nonatomic) HKLegendPointAnnotationStyle *legendAnnotationStyle;
@property (retain, nonatomic) HKAxisLabelStyle *axisAnnotationStyle;
@property (nonatomic) BOOL shouldApplyRollingAverage;
@property (nonatomic) BOOL shouldNegateAnnotationValue;
@property (nonatomic) double sineWaveSmoothingFactor;

/* instance methods */
@end

#endif /* HKLineSeriesPresentationStyle_h */