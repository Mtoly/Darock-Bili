//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 35.2.1.0.0
//
#ifndef USUIContactParentsHelper_h
#define USUIContactParentsHelper_h
@import Foundation;

@interface USUIContactParentsHelper : NSObject
/* class methods */
+ (void)openChatWithParentsForInterventionType:(long long)type;
+ (void)obtainChatWithParentsURLForInterventionType:(long long)type completionHandler:(id /* block */)handler;
+ (void)openChatWithURL:(id)url;
+ (id)urlFromAddressList:(id)list;
+ (void)obtainParentsForCurrentContact:(id /* block */)contact;
@end

#endif /* USUIContactParentsHelper_h */