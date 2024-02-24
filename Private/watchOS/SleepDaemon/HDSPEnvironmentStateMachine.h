//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPEnvironmentStateMachine_h
#define HDSPEnvironmentStateMachine_h
@import Foundation;

#include "HKSPStateMachine.h"
#include "HDSPEnvironmentDemoState.h"
#include "HDSPEnvironmentMigrationState.h"
#include "HDSPEnvironmentNotReadyState.h"
#include "HDSPEnvironmentReadyState.h"
#include "HDSPEnvironmentStateMachineDelegate-Protocol.h"
#include "HDSPEnvironmentStateMachineEventHandler-Protocol.h"
#include "HDSPEnvironmentStateMachineInfoProvider-Protocol.h"

@class NSString;
@protocol NAScheduler;

@interface HDSPEnvironmentStateMachine : HKSPStateMachine<HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPEnvironmentStateMachineEventHandler>

@property (readonly, weak, @dynamic, nonatomic) NSObject<HDSPEnvironmentStateMachineDelegate> *delegate;
@property (readonly, weak, @dynamic, nonatomic) NSObject<HDSPEnvironmentStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) HDSPEnvironmentNotReadyState *notReadyState;
@property (readonly, nonatomic) HDSPEnvironmentMigrationState *migrationState;
@property (readonly, nonatomic) HDSPEnvironmentReadyState *readyState;
@property (readonly, nonatomic) HDSPEnvironmentDemoState *demoState;
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate infoProvider:(id)provider;
- (unsigned long long)loggingCategory;
- (void)systemDidBecomeReady;
- (void)dataMigrationDidComplete;
- (void)environmentShouldMigrateData;
- (void)environmentDidBecomeReady;
- (BOOL)isSystemReady;
- (BOOL)needsDataMigration;
@end

#endif /* HDSPEnvironmentStateMachine_h */