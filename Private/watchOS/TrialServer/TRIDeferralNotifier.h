//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIDeferralNotifier_h
#define TRIDeferralNotifier_h
@import Foundation;

@interface TRIDeferralNotifier : NSObject
/* class methods */
+ (void)forwardDeferralsFromMonitoredActivity:(id)activity usingDarwinNotificationName:(const char *)name whileExecutingBlock:(id /* block */)block;
@end

#endif /* TRIDeferralNotifier_h */