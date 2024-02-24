//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHUISWidgetSceneClientSettings_h
#define CHUISWidgetSceneClientSettings_h
@import Foundation;

#include "UIApplicationSceneClientSettings.h"
#include "BSSettingDescriptionProvider-Protocol.h"

@class NSString;

@interface CHUISWidgetSceneClientSettings : UIApplicationSceneClientSettings<BSSettingDescriptionProvider>

@property (readonly, nonatomic) BOOL containsInteractiveControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
@end

#endif /* CHUISWidgetSceneClientSettings_h */