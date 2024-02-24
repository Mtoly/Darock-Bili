//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef SOTimersPublisher_h
#define SOTimersPublisher_h
@import Foundation;

#include "SOTimersSnapshot.h"

@class NSHashTable, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SOTimersPublisher : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_timersPublisherQueue;
  NSObject<OS_dispatch_group> *_timersPublisherDispatchGroup;
  NSHashTable *_subscribers;
  SOTimersSnapshot *_timerSnapshot;
}

@property (readonly, nonatomic) NSString *typeName;

/* instance methods */
- (id)init;
- (void)getCurrentSnapshotWithCompletion:(id /* block */)completion;
- (void)addSubscriber:(id)subscriber;
- (void)removeSubscriber:(id)subscriber;
- (void)timersAdded:(id)added;
- (void)timersUpdated:(id)updated;
- (void)timersRemoved:(id)removed;
- (void)timerFired:(id)fired;
- (void)firingTimerChanged:(id)changed;
- (void)firingTimerDismissed:(id)dismissed;
- (void)stateReset:(id)reset;
- (void)_notifySubscribersOfEvent:(long long)event;
- (void)_startObserving;
- (void)dealloc;
- (void)_createNewSnapshotWithCompletion:(id /* block */)completion;
@end

#endif /* SOTimersPublisher_h */