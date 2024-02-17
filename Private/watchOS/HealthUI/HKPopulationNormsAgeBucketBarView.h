//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKPopulationNormsAgeBucketBarView_h
#define HKPopulationNormsAgeBucketBarView_h
@import Foundation;

#include "UIView.h"

@class CALayer, CATextLayer, NSArray, NSDictionary, UIColor;

@interface HKPopulationNormsAgeBucketBarView : UIView

@property (nonatomic) double referenceMinY;
@property (nonatomic) double referenceMaxY;
@property (retain, nonatomic) NSArray *ascendingThresholds;
@property (retain, nonatomic) CALayer *underlyingBarLayer;
@property (retain, nonatomic) CALayer *segmentsLayer;
@property (nonatomic) double visibleBarMinY;
@property (nonatomic) double visibleBarMaxY;
@property (retain, nonatomic) CALayer *highlightedLayer;
@property (retain, nonatomic) CATextLayer *highlightedTopLabelLayer;
@property (retain, nonatomic) CATextLayer *highlightedBottomLabelLayer;
@property (retain, nonatomic) NSDictionary *highlightedTextLayerAttributes;
@property (nonatomic) unsigned long long highlightedSegmentIndex;
@property (nonatomic) double highlightedSectionMinY;
@property (nonatomic) double highlightedSectionMaxY;
@property (retain, nonatomic) UIColor *highlightColor;

/* instance methods */
- (id)initWithReferenceMinY:(double)y referenceMaxY:(double)y highlightColor:(id)color;
- (void)updateWithAscendingThresholds:(id)thresholds currentHighlightIndex:(unsigned long long)index;
- (void)layoutSublayersOfLayer:(id)layer;
- (BOOL)_bottomSegmentIsHighlighted;
- (BOOL)_topSegmentIsHighlighted;
@end

#endif /* HKPopulationNormsAgeBucketBarView_h */