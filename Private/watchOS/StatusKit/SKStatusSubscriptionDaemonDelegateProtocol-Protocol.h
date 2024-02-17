//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKStatusSubscriptionDaemonDelegateProtocol_Protocol_h
#define SKStatusSubscriptionDaemonDelegateProtocol_Protocol_h
@import Foundation;

@protocol SKStatusSubscriptionDaemonDelegateProtocol <NSObject>
/* instance methods */
- (void)subscriptionStateChangedForSubscriptions:(id)subscriptions completion:(id /* block */)completion;
- (void)subscriptionReceivedStatusUpdate:(id)update completion:(id /* block */)completion;
- (void)subscriptionInvitationReceived:(id)received completion:(id /* block */)completion;
@end

#endif /* SKStatusSubscriptionDaemonDelegateProtocol_Protocol_h */