//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKWorldRegionUpdaterObserver_Protocol_h
#define PKWorldRegionUpdaterObserver_Protocol_h
@import Foundation;

@protocol PKWorldRegionUpdaterObserver <NSObject>
@optional
/* instance methods */
- (void)worldRegionUpdated:(id)updated updatedRegion:(id)region;
- (void)worldRegionUpdated:(id)updated failedToUpdateRegion:(id)region;
@end

#endif /* PKWorldRegionUpdaterObserver_Protocol_h */