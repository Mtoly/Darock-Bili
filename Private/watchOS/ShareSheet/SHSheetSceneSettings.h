//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetSceneSettings_h
#define SHSheetSceneSettings_h
@import Foundation;

#include "UIApplicationSceneSettings.h"
#include "SHSheetUIServiceClientContext.h"

@class NSString;

@interface SHSheetSceneSettings : UIApplicationSceneSettings

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) SHSheetUIServiceClientContext *sessionContext;
@property (readonly, nonatomic) id sheetConfiguration;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) long long applicationState;
@property (readonly, nonatomic) long long hostProcessType;

/* instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* SHSheetSceneSettings_h */