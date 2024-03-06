//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSApplicationInfoServiceXPCServer_Protocol_h
#define CSLSApplicationInfoServiceXPCServer_Protocol_h
@import Foundation;

@protocol CSLSApplicationInfoServiceXPCServer <NSObject>
/* instance methods */
- (void)applicationInfoForCompanionBundleIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)applicationInfoForApplicationIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)connect:(id /* block */)connect;
@end

#endif /* CSLSApplicationInfoServiceXPCServer_Protocol_h */