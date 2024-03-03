//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSNetworkQualityInquiry_h
#define SSNetworkQualityInquiry_h
@import Foundation;

@interface SSNetworkQualityInquiry : NSObject
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)investigateNetworks;
- (void)investigateNetworksWithCompletionBlock:(id /* block */)block;
@end

#endif /* SSNetworkQualityInquiry_h */