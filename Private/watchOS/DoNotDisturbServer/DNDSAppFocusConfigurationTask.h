//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSAppFocusConfigurationTask_h
#define DNDSAppFocusConfigurationTask_h
@import Foundation;

#include "LNActionExecutorDelegate-Protocol.h"

@class LNAction, LNActionExecutor, NSString, NSUUID;

@interface DNDSAppFocusConfigurationTask : NSObject<LNActionExecutorDelegate> {
  /* instance variables */
  LNAction *_action;
  LNActionExecutor *_executor;
  id /* block */ _completion;
}

@property (readonly, @dynamic, nonatomic) NSUUID *taskIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAction:(id)action bundleIdentifier:(id)identifier;
- (void)prepareWithCompletion:(id /* block */)completion;
- (void)execute;
- (void)executor:(id)executor didCompleteExecutionWithResult:(id)result error:(id)error;
- (void)executor:(id)executor needsConfirmationWithRequest:(id)request;
- (void)executor:(id)executor needsDisambiguationWithRequest:(id)request;
- (void)executor:(id)executor needsValueWithRequest:(id)request;
- (void)executor:(id)executor needsActionConfirmationWithRequest:(id)request;
- (id)_executorCreatingIfNeeded;
- (id)_malformedIntentErrorWithMessage:(id)message;
@end

#endif /* DNDSAppFocusConfigurationTask_h */