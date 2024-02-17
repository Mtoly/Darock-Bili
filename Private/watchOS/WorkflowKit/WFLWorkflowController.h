//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLWorkflowController_h
#define WFLWorkflowController_h
@import Foundation;

#include "WFActionParameterInputProvider-Protocol.h"
#include "WFUserInterfaceHost-Protocol.h"
#include "WFWorkflow.h"
#include "WFWorkflowController.h"
#include "WFWorkflowControllerDelegate-Protocol.h"
#include "WFWorkflowRunEvent.h"

@class INInteraction, NSArray, NSProgress, NSString;
@protocol WFLWorkflowControllerDelegate;

@interface WFLWorkflowController : NSObject<WFWorkflowControllerDelegate, WFActionParameterInputProvider, WFUserInterfaceHost>

@property (readonly, nonatomic) WFWorkflowController *controller;
@property (retain, nonatomic) INInteraction *lastInteraction;
@property (retain, nonatomic) WFWorkflowRunEvent *runEvent;
@property (weak, nonatomic) NSObject<WFLWorkflowControllerDelegate> *delegate;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) NSProgress *progress;
@property (nonatomic) long long executionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, copy, nonatomic) NSArray *airPlayRouteIDs;

/* instance methods */
- (id)initWithWorkflow:(id)workflow;
- (BOOL)isRunning;
- (void)runWithInput:(id)input;
- (id)runSource;
- (void)stop;
- (void)launchAppWithCompletionHandler:(id /* block */)handler;
- (void)workflowControllerWillRun:(id)run;
- (void)workflowController:(id)controller didFinishRunningWithError:(id)error cancelled:(BOOL)cancelled;
- (void)workflowController:(id)controller prepareToRunAction:(id)action withInput:(id)input completionHandler:(id /* block */)handler;
- (void)workflowController:(id)controller didRunAction:(id)action;
- (void)presentAlert:(id)alert;
- (id)userInterfaceForWorkflowController:(id)controller;
- (void)showConfirmInteraction:(id)interaction requireAuthentication:(BOOL)authentication requireConfirmation:(BOOL)confirmation completionHandler:(id /* block */)handler;
- (BOOL)workflowController:(id)controller handleUnsupportedEnvironmentForAction:(id)action currentState:(id)state completionHandler:(id /* block */)handler;
- (BOOL)isRunningInSiri;
- (void)showConfirmInteraction:(id)interaction prompt:(id)prompt requireAuthentication:(BOOL)authentication completionHandler:(id /* block */)handler;
- (void)showHandleInteraction:(id)interaction prompt:(id)prompt completionHandler:(id /* block */)handler;
- (BOOL)openInteractionInApp:(id)app completionHandler:(id /* block */)handler;
- (BOOL)speakText:(id)text completionHandler:(id /* block */)handler;
- (void)openURL:(id)url completionHandler:(id /* block */)handler;
- (BOOL)openUserActivity:(id)activity bundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (BOOL)executeIntent:(id)intent completionHandler:(id /* block */)handler;
- (void)configureIntent:(id)intent;
- (void)action:(id)action provideInputForParameters:(id)parameters withDefaultStates:(id)states prompts:(id)prompts completionHandler:(id /* block */)handler;
- (BOOL)action:(id)action canProvideInputForParameter:(id)parameter;
@end

#endif /* WFLWorkflowController_h */