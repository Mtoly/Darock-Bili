//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTXPCScheduler_h
#define MTXPCScheduler_h
@import Foundation;

#include "MTSchedulingDelegate-Protocol.h"

@class NSString;

@interface MTXPCScheduler : NSObject<MTSchedulingDelegate>

@property (copy, nonatomic) NSString *eventName;

/* class methods */
+ (id)xpcSchedulerWithEvent:(id)event;

/* instance methods */
- (id)initWithEvent:(id)event;
- (void)scheduleTimerForSeconds:(double)seconds;
- (void)unscheduleTimer;
- (void)scheduleActivityWithCriteria:(id)criteria activityHandler:(id /* block */)handler;
- (void)scheduleActivityWithCriteria:(id)criteria activityHandler:(id /* block */)handler performImmediately:(BOOL)immediately;
- (void)unscheduleActivity;
@end

#endif /* MTXPCScheduler_h */