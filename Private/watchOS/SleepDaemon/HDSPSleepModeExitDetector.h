//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepModeExitDetector_h
#define HDSPSleepModeExitDetector_h
@import Foundation;

#include "HDSPEnvironment.h"
#include "HDSPEnvironmentAware-Protocol.h"
#include "HDSPSleepModeObserver-Protocol.h"
#include "HDSPWakeDetector-Protocol.h"
#include "HDSPWakeDetectorDelegate-Protocol.h"

@class NSString;

@interface HDSPSleepModeExitDetector : NSObject<HDSPSleepModeObserver, HDSPWakeDetector, HDSPEnvironmentAware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isDetecting;
@property (readonly, nonatomic) unsigned long long type;
@property (weak, nonatomic) NSObject<HDSPWakeDetectorDelegate> *wakeDetectorDelegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

/* instance methods */
- (id)initWithEnvironment:(id)environment;
- (void)environmentDidBecomeReady:(id)ready;
- (void)startDetecting;
- (void)stopDetecting;
- (void)sleepModeDidChange:(long long)change previousMode:(long long)mode reason:(unsigned long long)reason;
@end

#endif /* HDSPSleepModeExitDetector_h */