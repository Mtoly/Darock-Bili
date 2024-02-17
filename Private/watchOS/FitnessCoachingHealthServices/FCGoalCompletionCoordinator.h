//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCGoalCompletionCoordinator_h
#define FCGoalCompletionCoordinator_h
@import Foundation;

#include "FCDailyActivityGoalDetectionDelegate-Protocol.h"
#include "FCGoalCompletionCoordinatorDelegate-Protocol.h"
#include "FCGoalCompletionStore.h"

@class HDProfile, NSString;
@protocol OS_dispatch_queue;

@interface FCGoalCompletionCoordinator : NSObject<FCDailyActivityGoalDetectionDelegate> {
  /* instance variables */
  FCGoalCompletionStore *_goalCompletionStore;
  HDProfile *_profile;
  NSObject<OS_dispatch_queue> *_serviceQueue;
}

@property (weak, nonatomic) NSObject<FCGoalCompletionCoordinatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile serviceQueue:(id)queue;
- (id)initWithProfile:(id)profile goalCompletionStore:(id)store serviceQueue:(id)queue;
- (id)goalTypesToNotifyByActivitySummaryIndex;
- (void)notificationPosted:(id)posted;
- (void)notificationPostedForGoalTypes:(id)types activitySummaryIndex:(long long)index;
- (BOOL)runDailyGoalCompletionDetectionForGoalType:(long long)type activitySummaryIndex:(long long)index previousValue:(double)value currentValue:(double)value goalValue:(double)value shouldAlert:(BOOL)alert goalMetHandler:(id /* block */)handler;
- (void)concludeGoalDetectionRun;
- (long long)_activitySummaryIndexForDate:(id)date;
- (BOOL)_goalTypeAllowed:(long long)allowed;
@end

#endif /* FCGoalCompletionCoordinator_h */