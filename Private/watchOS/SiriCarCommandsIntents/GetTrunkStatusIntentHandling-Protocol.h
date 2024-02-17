//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.6.1.0.0
//
#ifndef GetTrunkStatusIntentHandling_Protocol_h
#define GetTrunkStatusIntentHandling_Protocol_h
@import Foundation;

@protocol GetTrunkStatusIntentHandling <NSObject>
/* instance methods */
- (void)handleGetTrunkStatus:(id)status completion:(id /* block */)completion;
- (void)handleGetTrunkStatus:(id)status completion:(id /* block */)completion;
- (void)resolveCarNameForGetTrunkStatus:(id)status withCompletion:(id /* block */)completion;
- (void)resolveCarNameForGetTrunkStatus:(id)status withCompletion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmGetTrunkStatus:(id)status completion:(id /* block */)completion;
- (void)confirmGetTrunkStatus:(id)status completion:(id /* block */)completion;
@end

#endif /* GetTrunkStatusIntentHandling_Protocol_h */