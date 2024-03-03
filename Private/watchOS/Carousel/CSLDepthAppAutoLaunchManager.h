//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDepthAppAutoLaunchManager_h
#define CSLDepthAppAutoLaunchManager_h
@import Foundation;

#include "CSLDepthAppAutoLaunchManagerDelegate-Protocol.h"
#include "CSLDepthAutoLaunchAnalytics.h"
#include "CSLPRFDepthAutoLaunchAppSettingDelegate-Protocol.h"

@class CSLPRFDepthAutoLaunchAppSetting, CSLPRFDepthAutoLaunchSettings, NSString;
@protocol OS_dispatch_queue;

@interface CSLDepthAppAutoLaunchManager : NSObject<CSLPRFDepthAutoLaunchAppSettingDelegate> {
  /* instance variables */
  BOOL _resumed;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  CSLPRFDepthAutoLaunchAppSetting *_setting;
  CSLDepthAutoLaunchAnalytics *_analytics;
  NSObject<OS_dispatch_queue> *_fixupQueue;
}

@property (weak, nonatomic) NSObject<CSLDepthAppAutoLaunchManagerDelegate> *delegate;
@property (readonly, nonatomic) CSLPRFDepthAutoLaunchSettings *autoLaunchSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)resume;
- (void)_setAutoLaunchSettings:(id)settings;
- (id)effectiveSettingsForSettings:(id)settings;
- (void)depthAutoLaunchAppSettingDidUpdate:(id)update;
- (id)_enableDefaultAppForSetting:(id)setting;
@end

#endif /* CSLDepthAppAutoLaunchManager_h */