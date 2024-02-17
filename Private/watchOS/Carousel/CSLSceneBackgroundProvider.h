//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSceneBackgroundProvider_h
#define CSLSceneBackgroundProvider_h
@import Foundation;

#include "CSLAlertBackgroundProvider.h"

@class FBScene, FBSceneSnapshotContext;

@interface CSLSceneBackgroundProvider : CSLAlertBackgroundProvider

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) FBSceneSnapshotContext *snapshotContext;

/* instance methods */
- (id)initWithScene:(id)scene snapshotContext:(id)context;
- (id)image;
@end

#endif /* CSLSceneBackgroundProvider_h */