//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSceneSnapshotRequestHandle_h
#define FBSSceneSnapshotRequestHandle_h
@import Foundation;

#include "FBSSceneSnapshotContext.h"

@class BSActionResponder;

@interface FBSSceneSnapshotRequestHandle : NSObject {
  /* instance variables */
  unsigned long long _type;
  FBSSceneSnapshotContext *_context;
  BSActionResponder *_responder;
  BOOL _canceled;
}

/* class methods */
+ (id)handleForRequestType:(unsigned long long)type context:(id)context;

/* instance methods */
- (id)initWithRequestType:(unsigned long long)type context:(id)context;
- (void)performRequestForScene:(id)scene;
- (void)cancelRequest;
- (void)_clearAction;
@end

#endif /* FBSSceneSnapshotRequestHandle_h */