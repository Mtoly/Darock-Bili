//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISBasePlayerUIView_h
#define ISBasePlayerUIView_h
@import Foundation;

#include "UIView.h"
#include "ISBasePlayer.h"
#include "ISBasePlayerOutput-Protocol.h"
#include "ISChangeObserver-Protocol.h"
#include "ISPlayerOutputContent.h"
#include "ISVideoPlayerUIView.h"
#include "ISWrappedAVAudioSession.h"

@class CAFilter, CAMeshTransform, NSString, UIImage, UIImageView, UIView;
@protocol ISBasePlayerUIViewChangeObserver, OS_dispatch_queue;

@interface ISBasePlayerUIView : UIView<ISChangeObserver, ISBasePlayerOutput> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_audioSessionQueue;
  ISPlayerOutputContent *_content;
  struct { BOOL didChangeWithAnimationDuration; } _changeObserverRespondsTo;
}

@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) ISWrappedAVAudioSession *wrappedAudioSession;
@property (weak, nonatomic) NSObject<ISBasePlayerUIViewChangeObserver> *_changeObserver;
@property (readonly, nonatomic) ISVideoPlayerUIView *videoBlurView;
@property (readonly, nonatomic) UIImageView *photoView;
@property (readonly, nonatomic) ISVideoPlayerUIView *videoView;
@property (retain, nonatomic) ISBasePlayer *player;
@property (nonatomic) struct CGPoint { double x0; double x1; } scaleAnchorOffset;
@property (retain, nonatomic) UIView *customPhotoView;
@property (retain, nonatomic) UIImage *overrideImage;
@property (readonly, nonatomic) BOOL displayingPhoto;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentsRect;
@property (copy, nonatomic) id /* block */ videoLayerReadyForDisplayChangeHandler;
@property (copy, nonatomic) CAMeshTransform *videoTransform;
@property (retain, nonatomic) CAFilter *videoFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isVideoReadyForDisplay;

/* class methods */
+ (Class)playerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)_performCommonInitialization;
- (void)registerChangeObserver:(id)observer;
- (void)unregisterChangeObserver:(id)observer;
- (void)_setChangeObserver:(id)observer;
- (void)layoutSubviews;
- (void)setContentMode:(long long)mode;
- (void)_setWrappedAudioSession:(id)session;
- (void)audioSessionDidChange;
- (void)_videoViewReadyForDisplayDidChange;
- (void)playerDidChange;
- (void)_updatePlayerAudioSession;
- (void)_signalChange:(unsigned long long)change withAnimationDuration:(double)duration;
- (void)_updateVideoViewsFrameWithContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)applyScale:(double)scale withTransitionOptions:(id)options completion:(id /* block */)completion;
- (void)applyOutputInfo:(id)info withTransitionOptions:(id)options completion:(id /* block */)completion;
- (void)setContent:(id)content;
- (id)generateSnapshotImage;
- (BOOL)isDisplayingPhoto;
- (void)contentDidChange;
- (void)_updatePhotoView;
- (void)observable:(id)observable didChange:(unsigned long long)change context:(void *)context;
@end

#endif /* ISBasePlayerUIView_h */