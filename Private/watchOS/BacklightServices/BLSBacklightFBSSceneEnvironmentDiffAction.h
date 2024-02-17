//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSBacklightFBSSceneEnvironmentDiffAction_h
#define BLSBacklightFBSSceneEnvironmentDiffAction_h
@import Foundation;

#include "BLSBacklightFBSSceneEnvironmentDiffActionDelegate-Protocol.h"
#include "BLSBacklightSceneSettingsDiffInspector.h"

@interface BLSBacklightFBSSceneEnvironmentDiffAction : NSObject {
  /* instance variables */
  BLSBacklightSceneSettingsDiffInspector *_diffInspector;
}

@property (weak) NSObject<BLSBacklightFBSSceneEnvironmentDiffActionDelegate> *delegate;

/* instance methods */
- (void)performActionsForUpdatedFBSScene:(id)fbsscene settingsDiff:(id)diff fromSettings:(id)settings transitionContext:(id)context;
@end

#endif /* BLSBacklightFBSSceneEnvironmentDiffAction_h */