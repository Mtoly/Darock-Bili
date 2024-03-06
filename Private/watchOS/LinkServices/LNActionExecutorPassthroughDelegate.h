//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNActionExecutorPassthroughDelegate_h
#define LNActionExecutorPassthroughDelegate_h
@import Foundation;

#include "LNActionExecutorDelegate-Protocol.h"

@class NSString;

@interface LNActionExecutorPassthroughDelegate : NSObject<LNActionExecutorDelegate>

@property (readonly, weak, nonatomic) NSObject<LNActionExecutorDelegate> *delegate;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithShowOutputActionDelegate:(id)delegate performCompletionHandler:(id /* block */)handler;
- (void)executor:(id)executor needsConfirmationWithRequest:(id)request;
- (void)executor:(id)executor needsDisambiguationWithRequest:(id)request;
- (void)executor:(id)executor needsValueWithRequest:(id)request;
- (void)executor:(id)executor needsActionConfirmationWithRequest:(id)request;
- (void)executor:(id)executor didPerformActionWithResult:(id)result error:(id)error;
- (void)executor:(id)executor didFinishWithResult:(id)result error:(id)error;
- (void)executor:(id)executor didCompleteExecutionWithResult:(id)result error:(id)error;
- (BOOL)executor:(id)executor shouldRunShowOutputAction:(id)action;
- (void)executor:(id)executor environmentForViewSnippetWithCompletion:(id /* block */)completion;
- (void)executor:(id)executor preferredContentSizeForViewSnippetWithCompletion:(id /* block */)completion;
- (void)executor:(id)executor continueInAppWithRequest:(id)request;
@end

#endif /* LNActionExecutorPassthroughDelegate_h */