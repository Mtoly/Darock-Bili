//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDAppStoreServiceProtocol_Protocol_h
#define ASDAppStoreServiceProtocol_Protocol_h
@import Foundation;

@protocol ASDAppStoreServiceProtocol 
/* instance methods */
- (void)launchAppStoreWithURL:(id)url withReplyHandler:(id /* block */)handler;
- (void)addBadgeIDs:(id)ids replyHandler:(id /* block */)handler;
- (void)allBadgeIDsWithReplyHandler:(id /* block */)handler;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)handler;
- (void)badgeIDCountWithReplyHandler:(id /* block */)handler;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)handler;
- (void)removeBadgeIDs:(id)ids replyHandler:(id /* block */)handler;
- (void)removeBadgeMetricsForBadgeIDs:(id)ids replyHandler:(id /* block */)handler;
- (void)reloadWidgetOnConnectivityToEndpoint:(id)endpoint parameters:(id)parameters replyHandler:(id /* block */)handler;
@end

#endif /* ASDAppStoreServiceProtocol_Protocol_h */