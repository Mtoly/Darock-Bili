//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDepthInteractionStateMachineState_h
#define CSLDepthInteractionStateMachineState_h
@import Foundation;

#include "CSLSStateMachineState.h"

@interface CSLDepthInteractionStateMachineState : CSLSStateMachineState

@property (readonly, nonatomic) BOOL activeForSystemState;
@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) BOOL transitionState;
@property (readonly, nonatomic) long long depthInteractionState;

/* instance methods */
- (id)stateMachine;
- (void)depthSessionStarted:(id)started;
- (void)depthSessionEnded:(id)ended;
- (void)autoEndDepthSessions;
- (void)context:(id)context didUpdateModalAppSession:(id)session fromState:(long long)state toState:(long long)state;
- (void)context:(id)context didUpdateFromSubmersionState:(long long)state toState:(long long)state;
- (void)context:(id)context didUpdateFromAutoLaunchBundleID:(id)id toBundleID:(id)id;
- (void)context:(id)context didUpdateFromAutoLaunchSettings:(id)settings toSettings:(id)settings;
- (void)context:(id)context didUpdateFromForegroundState:(id)state toState:(id)state;
- (void)context:(id)context didUpdateFromSessionStartActionOperationState:(long long)state toState:(long long)state;
- (void)context:(id)context didUpdateFromAutoLaunchOperationState:(long long)state toState:(long long)state;
- (void)context:(id)context didUpdateFromWaterLockEnabled:(BOOL)enabled toWaterLockEnabled:(BOOL)enabled;
- (BOOL)isActiveForSystemState;
- (BOOL)isTransitionState;
@end

#endif /* CSLDepthInteractionStateMachineState_h */