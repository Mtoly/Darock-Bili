//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFStaccatoWorkflowRunnerClient_h
#define WFStaccatoWorkflowRunnerClient_h
@import Foundation;

#include "WFWorkflowRunnerClient.h"
#include "WFConfiguredStaccatoAction.h"
#include "WFContextualActionContext.h"

@class NSString;

@interface WFStaccatoWorkflowRunnerClient : WFWorkflowRunnerClient

@property (retain, nonatomic) WFConfiguredStaccatoAction *action;
@property (retain, nonatomic) WFContextualActionContext *actionContext;
@property (nonatomic) BOOL hasStartedRun;
@property (readonly, copy, nonatomic) NSString *presentableIdentifier;
@property (readonly, copy, nonatomic) NSString *presentableRequester;
@property (readonly, nonatomic) BOOL hasCompletedRun;

/* instance methods */
- (id)initWithStaccatoAction:(id)action;
- (id)initWithStaccatoAction:(id)action interactionType:(id)type preciseTimeStamp:(id)stamp;
- (id)initWithWorkflowStaccatoAction:(id)action;
- (id)initWithLinkStaccatoAction:(id)action interactionType:(id)type preciseTimeStamp:(id)stamp;
- (id)initWithTopHitStaccatoAction:(id)action;
- (id)initWithDescriptor:(id)descriptor runRequest:(id)request;
- (id)prewarmManager;
- (void)startWithInteractionType:(id)type preciseTimeStamp:(id)stamp;
- (void)userInteractionBegan;
- (void)start;
@end

#endif /* WFStaccatoWorkflowRunnerClient_h */