//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaBrowserDelegate_Protocol_h
#define HMDMediaBrowserDelegate_Protocol_h
@import Foundation;

@protocol HMDMediaBrowserDelegate <NSObject>
/* instance methods */
- (void)browser:(id)browser didAddAdvertisements:(id)advertisements;
- (void)browser:(id)browser didRemoveAdvertisements:(id)advertisements;
- (void)browser:(id)browser didRemoveSessions:(id)sessions;
- (void)browser:(id)browser didUpdateEndpoints:(id)endpoints;
@optional
/* instance methods */
- (void)browser:(id)browser didFindAssociatedMediaAccessory:(id)accessory;
- (void)browser:(id)browser didLoseAssociatedMediaAccessory:(id)accessory error:(id)error;
@end

#endif /* HMDMediaBrowserDelegate_Protocol_h */