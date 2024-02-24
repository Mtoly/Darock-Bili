//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef INSearchForTimersIntentHandling_Protocol_h
#define INSearchForTimersIntentHandling_Protocol_h
@import Foundation;

@protocol INSearchForTimersIntentHandling <NSObject>
/* instance methods */
- (void)handleSearchForTimers:(id)timers completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmSearchForTimers:(id)timers completion:(id /* block */)completion;
- (void)resolveLabelForSearchForTimers:(id)timers withCompletion:(id /* block */)completion;
- (void)resolveDurationForSearchForTimers:(id)timers withCompletion:(id /* block */)completion;
- (void)resolveStateForSearchForTimers:(id)timers withCompletion:(id /* block */)completion;
- (void)resolveTypeForSearchForTimers:(id)timers withCompletion:(id /* block */)completion;
@end

#endif /* INSearchForTimersIntentHandling_Protocol_h */