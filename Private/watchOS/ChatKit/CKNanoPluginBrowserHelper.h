//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoPluginBrowserHelper_h
#define CKNanoPluginBrowserHelper_h
@import Foundation;

@interface CKNanoPluginBrowserHelper : NSObject
/* class methods */
+ (id)fullScreenAppViewControllerWithPluginId:(id)id fallbackId:(id)id plugin:(id *)plugin forConversation:(id)conversation;
+ (id)fullScreenAppViewControllerWithFullBundleId:(id)id plugin:(id *)plugin forConversation:(id)conversation;
+ (id)_fullScreenAppViewControllerWithPluginId:(id)id fallbackId:(id)id needsPrefix:(BOOL)prefix plugin:(id *)plugin forConversation:(id)conversation;
+ (id)fullScreenAppViewControllerForPlugin:(id)plugin datasource:(id)datasource forConversation:(id)conversation;
+ (void)configureSurfController:(id)controller withAmount:(double)amount currency:(id)currency;
@end

#endif /* CKNanoPluginBrowserHelper_h */