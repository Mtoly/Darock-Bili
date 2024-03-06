//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLChildScenePresentationAndProvider_h
#define CSLChildScenePresentationAndProvider_h
@import Foundation;

#include "CUISScenePresentationProvider-Protocol.h"

@class CUISScenePresentation, FBScene, NSString;

@interface CSLChildScenePresentationAndProvider : NSObject

@property (readonly, nonatomic) CUISScenePresentation *parentScenePresentation;
@property (readonly, nonatomic) NSObject<CUISScenePresentationProvider> *sceneProvider;
@property (readonly, copy, nonatomic) NSString *sceneID;
@property (weak, nonatomic) FBScene *scene;

/* instance methods */
- (id)initWithParentPresentation:(id)presentation provider:(id)provider sceneID:(id)id;
- (id)description;
@end

#endif /* CSLChildScenePresentationAndProvider_h */