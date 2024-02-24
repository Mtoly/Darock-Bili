//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKStackedCategoryValueSeriesCoordinate_h
#define HKStackedCategoryValueSeriesCoordinate_h
@import Foundation;

#include "HKGraphSeriesBlockCoordinate-Protocol.h"
#include "HKGraphSeriesBlockCoordinateInfo-Protocol.h"

@class NSString;

@interface HKStackedCategoryValueSeriesCoordinate : NSObject<HKGraphSeriesBlockCoordinate>

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } start;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } end;
@property (readonly, nonatomic) long long pointStyle;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (readonly, nonatomic) double startXValue;
@property (readonly, nonatomic) double endXValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStart:(struct CGPoint { double x0; double x1; })start end:(struct CGPoint { double x0; double x1; })end pointStyle:(long long)style userInfo:(id)info;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform roundToViewScale:(BOOL)scale;
@end

#endif /* HKStackedCategoryValueSeriesCoordinate_h */