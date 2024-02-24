//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRichComplicationLineMeteredView_h
#define NTKRichComplicationLineMeteredView_h
@import Foundation;

#include "NTKRichComplicationLineView.h"

@class NSArray;

@interface NTKRichComplicationLineMeteredView : NTKRichComplicationLineView

@property (retain, nonatomic) NSArray *meterLayers;

/* instance methods */
- (void)_setupShapeLayer:(id)layer;
- (id)_shapeStrokeColor;
- (void)setProgress:(double)progress;
- (void)_updateGradient;
- (void)colorMetersWithProgress:(double)progress;
- (struct CGPoint { double x0; double x1; })_pointAtProgress:(float)progress;
@end

#endif /* NTKRichComplicationLineMeteredView_h */