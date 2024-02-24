//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPSleepEventTimelineResults_h
#define HKSPSleepEventTimelineResults_h
@import Foundation;

#include "HKSPMutableSleepSchedule.h"
#include "HKSPSleepEventTimeline.h"
#include "HKSPSleepSchedule.h"

@interface HKSPSleepEventTimelineResults : NSObject

@property (retain, nonatomic) HKSPSleepEventTimeline *timeline;
@property (retain, nonatomic) HKSPSleepEventTimeline *unadjustedTimeline;
@property (nonatomic) BOOL sleepScheduleInvalid;
@property (nonatomic) unsigned long long sleepScheduleInvalidReason;
@property (nonatomic) BOOL snoozeFireDateNeedsReset;
@property (retain, nonatomic) HKSPSleepSchedule *originalSleepSchedule;
@property (retain, nonatomic) HKSPMutableSleepSchedule *mutableValidSleepSchedule;
@property (readonly, nonatomic) HKSPSleepSchedule *validSleepSchedule;

/* instance methods */
@end

#endif /* HKSPSleepEventTimelineResults_h */