//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFStageManagerSettingsClient_h
#define WFStageManagerSettingsClient_h
@import Foundation;

#include "WFSettingsClient.h"

@class NSError *, WFSettingsClient *;

@interface WFStageManagerSettingsClient : WFSettingsClient // (Swift)

@property (nonatomic) BOOL showRecentApps;
@property (nonatomic) BOOL showDock;

/* class methods */
+ (void)createClientWithCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
@end

#endif /* WFStageManagerSettingsClient_h */