//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepScheduleModelValidationResult_h
#define HDSPSleepScheduleModelValidationResult_h
@import Foundation;

@class HKSPSleepEventTimelineResults, NSError;

@interface HDSPSleepScheduleModelValidationResult : NSObject

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) HKSPSleepEventTimelineResults *timelineResults;

/* class methods */
+ (id)emptyFailureWithError:(id)error;

/* instance methods */
- (id)initWithSuccess:(BOOL)success timelineResults:(id)results error:(id)error;
@end

#endif /* HDSPSleepScheduleModelValidationResult_h */