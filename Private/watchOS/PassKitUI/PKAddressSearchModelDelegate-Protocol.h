//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAddressSearchModelDelegate_Protocol_h
#define PKAddressSearchModelDelegate_Protocol_h
@import Foundation;

@protocol PKAddressSearchModelDelegate <NSObject>
@optional
/* instance methods */
- (void)contactsSearchUpdated:(id)updated;
- (void)recentsSearchUpdated:(id)updated;
- (void)mapSearchUpdated:(id)updated;
- (void)suggestedSearchUpdated:(id)updated;
- (void)selectedAddress:(id)address withError:(id)error;
@end

#endif /* PKAddressSearchModelDelegate_Protocol_h */