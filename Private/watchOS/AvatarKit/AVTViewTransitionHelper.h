//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef AVTViewTransitionHelper_h
#define AVTViewTransitionHelper_h
@import Foundation;

#include "AVTStickerConfiguration.h"
#include "AVTStickerConfigurationReversionContext.h"
#include "AVTView.h"

@class SCNTechnique;

@interface AVTViewTransitionHelper : NSObject {
  /* instance variables */
  AVTView *_view;
  AVTStickerConfiguration *_stickerConfiguration;
  SCNTechnique *_transitionTechnique;
  AVTStickerConfigurationReversionContext *_stickerTransitionReversionContext;
}

/* instance methods */
- (void)view_performCrossFadeTransitionToStickerConfiguration:(id)configuration fallbackPose:(id)pose duration:(double)duration avatar:(id)avatar avatarNode:(id)node oldReversionContext:(id)context completionHandler:(id /* block */)handler simultaneousAnimationsBlock:(id /* block */)block;
- (void)coordinator_performCrossFadeTransitionToStickerConfiguration:(id)configuration duration:(double)duration options:(unsigned long long)options avatar:(id)avatar avatarNode:(id)node oldReversionContext:(id)context;
- (void)coordinator_performCrossFadeTransitionOutOfStickerConfigurationWithDuration:(double)duration avatar:(id)avatar avatarNode:(id)node oldReversionContext:(id)context;
- (void)view_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)configuration fallbackPose:(id)pose duration:(double)duration avatar:(id)avatar avatarNode:(id)node oldReversionContext:(id)context completionHandler:(id /* block */)handler simultaneousAnimationsBlock:(id /* block */)block;
- (void)coordinator_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)configuration duration:(double)duration options:(unsigned long long)options avatar:(id)avatar avatarNode:(id)node oldReversionContext:(id)context;
- (void)coordinator_performCrossFadeThenAnimateTransitionOutOfStickerConfigurationWithDuration:(double)duration avatar:(id)avatar avatarNode:(id)node oldReversionContext:(id)context;
- (void)view_performAnimateThenCrossFadeTransitionFromStickerConfiguration:(id)configuration toStickerConfiguration:(id)configuration duration:(double)duration avatar:(id)avatar avatarNode:(id)node oldReversionContext:(id)context completionHandler:(id /* block */)handler simultaneousAnimationsBlock:(id /* block */)block;
- (id)transitionTechnique;
- (1)viewBackgroundColor;
- (id)snapshotViewUsingBackgroundColor:;
@end

#endif /* AVTViewTransitionHelper_h */