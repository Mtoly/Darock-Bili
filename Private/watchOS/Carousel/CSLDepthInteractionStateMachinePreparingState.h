//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDepthInteractionStateMachinePreparingState_h
#define CSLDepthInteractionStateMachinePreparingState_h
@import Foundation;

#include "CSLDepthInteractionStateMachineState.h"

@class NSTimer;

@interface CSLDepthInteractionStateMachinePreparingState : CSLDepthInteractionStateMachineState {
  /* instance variables */
  NSTimer *_sessionTimer;
}

/* instance methods */
- (void)didEnterWithPreviousState:(id)state;
- (void)willExitWithNextState:(id)state;
- (void)handleManualStartWithSession:(id)session;
- (void)handleAutoLaunchWithBundleIdentifier:(id)identifier;
- (void)context:(id)context didUpdateFromSessionStartActionOperationState:(long long)state toState:(long long)state;
- (void)context:(id)context didUpdateModalAppSession:(id)session fromState:(long long)state toState:(long long)state;
- (void)depthSessionStarted:(id)started;
- (void)depthSessionEnded:(id)ended;
- (void)transitionToFailedState;
- (void)transitionToActiveStateIfPossible;
- (void)sessionAutoLaunchTimedOut;
- (long long)mode;
- (BOOL)isTransitionState;
- (long long)depthInteractionState;
- (id)launchBundleIDForContext:(id)context;
@end

#endif /* CSLDepthInteractionStateMachinePreparingState_h */