//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDQuantityAggregationResult_h
#define HDQuantityAggregationResult_h
@import Foundation;

@class NSArray, NSMutableArray;

@interface HDQuantityAggregationResult : NSObject

@property (readonly, copy, nonatomic) NSArray *aggregatedSamples;
@property (readonly, copy, nonatomic) NSArray *consumedSensorData;
@property (readonly, copy, nonatomic) NSMutableArray *remainingSensorData;

/* instance methods */
- (id)initWithAggregatedSamples:(id)samples consumedData:(id)data remainingData:(id)data;
@end

#endif /* HDQuantityAggregationResult_h */