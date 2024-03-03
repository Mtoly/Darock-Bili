//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNAnnouncementEngine_h
#define MNAnnouncementEngine_h
@import Foundation;

#include "MNAnnouncementPlan.h"

@class NSArray, NSDictionary;

@interface MNAnnouncementEngine : NSObject {
  /* instance variables */
  NSArray *_events;
  double _distance;
  double _speed;
  NSDictionary *_durations;
}

@property (retain, nonatomic) MNAnnouncementPlan *plan;

/* instance methods */
- (void)planForEvents:(id)events distance:(double)distance speed:(double)speed previousEvent:(id)event timeSinceLastEvent:(double)event durations:(id)durations;
- (id)nextEvent;
- (BOOL)_advanceToResolveConflict:(id)conflict;
- (double)_canAdvanceEvent:(id)event;
- (BOOL)_delayToResolveConflict:(id)conflict;
- (double)_canDelayEvent:(id)event;
- (BOOL)_compressToResolveConflict:(id)conflict;
- (void)_dropToResolveConflict:(id)conflict;
@end

#endif /* MNAnnouncementEngine_h */