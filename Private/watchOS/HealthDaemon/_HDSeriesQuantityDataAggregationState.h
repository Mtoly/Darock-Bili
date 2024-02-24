//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDSeriesQuantityDataAggregationState_h
#define _HDSeriesQuantityDataAggregationState_h
@import Foundation;

#include "HDDataAggregationState.h"
#include "HDQuantityDatum.h"

@interface _HDSeriesQuantityDataAggregationState : HDDataAggregationState

@property (readonly, nonatomic) HDQuantityDatum *lastDatum;
@property (readonly, nonatomic) long long length;

/* instance methods */
@end

#endif /* _HDSeriesQuantityDataAggregationState_h */