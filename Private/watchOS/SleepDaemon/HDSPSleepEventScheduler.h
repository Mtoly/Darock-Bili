//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepEventScheduler_h
#define HDSPSleepEventScheduler_h
@import Foundation;

#include "HDSPDiagnosticsProvider-Protocol.h"
#include "HDSPEnvironment.h"
#include "HDSPEnvironmentAware-Protocol.h"
#include "HDSPEventScheduleDelegate-Protocol.h"
#include "HDSPEventScheduler-Protocol.h"
#include "HDSPSleepEventDelegate-Protocol.h"
#include "HDSPSleepEventList.h"
#include "HDSPSleepScheduleModelObserver-Protocol.h"
#include "HDSPTimeChangeObserver-Protocol.h"

@class HKSPLimitingScheduler, HKSPObserverSet, HKSPSleepEvent, NSDate, NSHashTable, NSString;
@protocol HKSPMutexProvider;

@interface HDSPSleepEventScheduler : NSObject<HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepEventDelegate, HDSPEventScheduleDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) NSObject<HKSPMutexProvider> *mutexProvider;
@property (readonly, nonatomic) HDSPSleepEventList *sleepEvents;
@property (readonly, nonatomic) HKSPObserverSet *eventHandlers;
@property (readonly, nonatomic) NSHashTable *eventProviders;
@property (readonly, nonatomic) NSHashTable *pendingEventProviders;
@property (readonly, nonatomic) NSObject<HDSPEventScheduler> *scheduler;
@property (readonly, nonatomic) HKSPLimitingScheduler *limitingScheduler;
@property (retain, nonatomic) HKSPSleepEvent *lastStandardSleepEvent;
@property (retain, nonatomic) NSDate *lastEventTriggerDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

/* instance methods */
- (id)initWithEnvironment:(id)environment;
- (id)initWithEnvironment:(id)environment schedulerProvider:(id /* block */)provider limitingScheduler:(id)scheduler;
- (void)_withLock:(id /* block */)lock;
- (void)rescheduleEvents;
- (void)_lock_rescheduleEvents;
- (void)_enqueueSchedulePendingEventsTask;
- (BOOL)_lock_shouldScheduleEvents;
- (void)environmentWillBecomeReady:(id)ready;
- (void)environmentDidBecomeReady:(id)ready;
- (void)_loadLastStandardSleepEvent;
- (void)_lock_updateLastStandardSleepEvent:(id)event;
- (void)_schedulePendingEvents;
- (void)scheduledEventIsDue;
- (void)_enqueueHandleOverdueEventsTask;
- (void)_handleOverdueEvents;
- (BOOL)_shouldNotifyHandler:(id)handler forEvent:(id)event;
- (void)eventProviderHasUpcomingEvents:(id)events;
- (void)eventProviderCancelledEvents:(id)events;
- (void)addEventProvider:(id)provider;
- (void)removeEventProvider:(id)provider;
- (void)addEventHandler:(id)handler;
- (void)removeEventHandler:(id)handler;
- (void)sleepScheduleModelManager:(id)manager didUpdateSleepScheduleModel:(id)model;
- (void)significantTimeChangeDetected:(id)detected;
- (id)_allSleepEvents;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
@end

#endif /* HDSPSleepEventScheduler_h */