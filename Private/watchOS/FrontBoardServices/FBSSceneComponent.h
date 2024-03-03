//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSceneComponent_h
#define FBSSceneComponent_h
@import Foundation;

#include "FBSComponentScene-Protocol.h"
#include "FBSSceneComponent-Protocol.h"

@class NSString;

@interface FBSSceneComponent : NSObject<FBSSceneComponent> {
  /* instance variables */
  NSObject<FBSComponentScene> *_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScene:(id)scene;
- (id)scene;
- (void)setScene:(id)scene;
- (id)hostScene;
- (id)clientScene;
- (void)invalidate;
@end

#endif /* FBSSceneComponent_h */