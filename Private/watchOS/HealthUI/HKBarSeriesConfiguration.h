//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKBarSeriesConfiguration_h
#define HKBarSeriesConfiguration_h
@import Foundation;

#include "HKFillStyle.h"

@interface HKBarSeriesConfiguration : NSObject

@property (retain, nonatomic) HKFillStyle *unselectedFillStyle;
@property (retain, nonatomic) HKFillStyle *selectedFillStyle;
@property (retain, nonatomic) HKFillStyle *inactiveFillStyle;
@property (copy, nonatomic) id /* block */ isIncludedBlock;

/* instance methods */
@end

#endif /* HKBarSeriesConfiguration_h */