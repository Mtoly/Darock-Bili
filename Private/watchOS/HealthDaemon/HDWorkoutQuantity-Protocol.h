//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDWorkoutQuantity_Protocol_h
#define HDWorkoutQuantity_Protocol_h
@import Foundation;

@protocol HDWorkoutQuantity 

@property (readonly, nonatomic) HKQuantity *hdw_quantity;
@property (readonly, nonatomic) HKQuantityType *hdw_type;
@property (readonly, nonatomic) NSDateInterval *hdw_dateInterval;
@property (readonly, nonatomic) double hdw_startTimestamp;
@property (readonly, nonatomic) double hdw_endTimestamp;
@property (readonly, nonatomic) HKQuantitySample *hdw_sample;

@end

#endif /* HDWorkoutQuantity_Protocol_h */