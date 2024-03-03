//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HMSoftwareUpdateDelegate_Protocol_h
#define HMSoftwareUpdateDelegate_Protocol_h
@import Foundation;

@protocol HMSoftwareUpdateDelegate <NSObject>
@optional
/* instance methods */
- (void)softwareUpdate:(id)update didUpdateState:(long long)state;
- (void)softwareUpdate:(id)update didUpdateDocumentationAvailable:(BOOL)available;
- (void)softwareUpdate:(id)update didUpdateDocumentation:(id)documentation;
@end

#endif /* HMSoftwareUpdateDelegate_Protocol_h */