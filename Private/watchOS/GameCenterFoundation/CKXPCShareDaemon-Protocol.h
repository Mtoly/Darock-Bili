//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef CKXPCShareDaemon_Protocol_h
#define CKXPCShareDaemon_Protocol_h
@import Foundation;

@protocol CKXPCShareDaemon <NSObject>
/* instance methods */
- (void)handleCloudKitShareMetadata:(id)metadata completionHandler:(id /* block */)handler;
@optional
/* instance methods */
- (void)willAcceptShareAtURL:(id)url;
@end

#endif /* CKXPCShareDaemon_Protocol_h */