//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPWakeDetectionStateMachine_h
#define HDSPWakeDetectionStateMachine_h
@import Foundation;

#include "HKSPPersistentStateMachine.h"
#include "HDSPWakeDetectionActivityDetectingState.h"
#include "HDSPWakeDetectionDisabledState.h"
#include "HDSPWakeDetectionExplicitDetectingState.h"
#include "HDSPWakeDetectionNotifiedState.h"
#include "HDSPWakeDetectionStateMachineDelegate-Protocol.h"
#include "HDSPWakeDetectionStateMachineEventHandler-Protocol.h"
#include "HDSPWakeDetectionStateMachineInfoProvider-Protocol.h"
#include "HDSPWakeDetectionWaitingState.h"

@class HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate, NSString;
@protocol NAScheduler;

@interface HDSPWakeDetectionStateMachine : HKSPPersistentStateMachine<HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler>

@property (readonly, weak, @dynamic, nonatomic) NSObject<HDSPWakeDetectionStateMachineDelegate> *delegate;
@property (readonly, weak, @dynamic, nonatomic) NSObject<HDSPWakeDetectionStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) HDSPWakeDetectionDisabledState *disabledState;
@property (readonly, nonatomic) HDSPWakeDetectionWaitingState *waitingState;
@property (readonly, nonatomic) HDSPWakeDetectionExplicitDetectingState *explicitDetectingState;
@property (readonly, nonatomic) HDSPWakeDetectionActivityDetectingState *activityDetectingState;
@property (readonly, nonatomic) HDSPWakeDetectionNotifiedState *notifiedState;
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL sleepModeIsOff;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) unsigned long long activeTypes;
@property (readonly, nonatomic) NSDate *nextWakeUp;
@property (readonly, nonatomic) NSDate *upcomingStartDetection;

/* instance methods */
- (id)initWithIdentifier:(id)identifier persistence:(id)persistence delegate:(id)delegate infoProvider:(id)provider currentDateProvider:(id /* block */)provider;
- (id)allStates;
- (unsigned long long)loggingCategory;
- (void)wakeupEventDetected:(unsigned long long)detected date:(id)date;
- (void)earlyWakeUpWasNotifiedRemotely;
- (void)startWakeDetection:(unsigned long long)detection;
- (void)stopWakeDetection;
- (void)postWakeDetectionNotification:(unsigned long long)notification;
- (id)detectionWindowForType:(unsigned long long)type;
@end

#endif /* HDSPWakeDetectionStateMachine_h */