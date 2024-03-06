//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCBoostableOperationThrottlerDelegate_Protocol_h
#define FCBoostableOperationThrottlerDelegate_Protocol_h
@import Foundation;

@protocol FCBoostableOperationThrottlerDelegate <FCOperationThrottlerDelegate>
@optional
/* instance methods */
- (void)operationThrottler:(id)throttler performAsyncOperationWithQualityOfService:(long long)service completion:(id /* block */)completion;
@end

#endif /* FCBoostableOperationThrottlerDelegate_Protocol_h */