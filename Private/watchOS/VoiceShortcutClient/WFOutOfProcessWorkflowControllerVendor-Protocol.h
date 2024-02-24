//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFOutOfProcessWorkflowControllerVendor_Protocol_h
#define WFOutOfProcessWorkflowControllerVendor_Protocol_h
@import Foundation;

@protocol WFOutOfProcessWorkflowControllerVendor <NSObject>
/* instance methods */
- (void)prewarmRunnerWithCompletion:(id /* block */)completion;
- (void)runWorkflowWithDescriptor:(id)descriptor request:(id)request inEnvironment:(long long)environment runningContext:(id)context completion:(id /* block */)completion;
- (void)runActionFromRunRequestData:(id)data runningContext:(id)context completion:(id /* block */)completion;
- (void)resumeRunningFromContext:(id)context withRequest:(id)request completion:(id /* block */)completion;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)url withIdentifier:(id)identifier;
- (void)createSleepWorkflow:(id)workflow completion:(id /* block */)completion;
- (void)populateSleepWorkflowsFromWorkflows:(id)workflows completion:(id /* block */)completion;
- (void)getContextualActionsForContext:(id)context completion:(id /* block */)completion;
- (void)filterContextualActions:(id)actions forContext:(id)context completion:(id /* block */)completion;
- (void)computeFinderResizedSizesForImages:(id)images inSizes:(id)sizes completion:(id /* block */)completion;
- (void)stopWithError:(id)error;
- (void)getCurrentProgressCompletedWithCompletionHandler:(id /* block */)handler;
- (void)pauseWorkflowAndWriteStateToDisk:(id)disk;
- (void)updateRunViewSource:(id)source;
@end

#endif /* WFOutOfProcessWorkflowControllerVendor_Protocol_h */