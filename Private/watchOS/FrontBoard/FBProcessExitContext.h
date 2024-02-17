//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBProcessExitContext_h
#define FBProcessExitContext_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "FBProcessState.h"
#include "FBProcessWatchdogEventContext.h"

@class FBSProcessTerminationRequest, NSError, NSString, RBSProcessExitContext;

@interface FBProcessExitContext : NSObject<BSDescriptionProviding>

@property (retain, nonatomic) FBSProcessTerminationRequest *terminationRequest;
@property (retain, nonatomic) FBProcessWatchdogEventContext *watchdogContext;
@property (copy, nonatomic) FBProcessState *stateBeforeExiting;
@property (nonatomic) long long terminationReason;
@property (readonly, nonatomic) unsigned long long exitReason;
@property (readonly, nonatomic) NSError *launchError;
@property (readonly, nonatomic) RBSProcessExitContext *underlyingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)descriptionForExitReason:(unsigned long long)reason;

/* instance methods */
- (long long)exitStatus;
- (BOOL)exitedNormally;
- (int)exitCode;
- (int)terminationSignal;
- (BOOL)consideredJetsam;
- (BOOL)fairPlayFailure;
- (id)initWithUnderlyingContext:(id)context;
- (id)initWithLaunchError:(id)error underlyingContext:(id)context;
- (id)createError;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* FBProcessExitContext_h */