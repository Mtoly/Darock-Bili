//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTOIrisView_h
#define NPTOIrisView_h
@import Foundation;

#include "UIView.h"
#include "NPTOVideoPlayerView.h"
#include "NPTOVideoPlayerViewDelegate-Protocol.h"

@class AVSynchronizedLayer, CALayer, NSString, NSURL, UIImage, UIImageView;
@protocol NPTOIrisViewDelegate;

@interface NPTOIrisView : UIView<NPTOVideoPlayerViewDelegate> {
  /* instance variables */
  double _vdt;
  double _sdt;
  BOOL _videoLoaded;
  double _vitalityProgress;
  double _vitalityPosition;
  BOOL _playing;
  id _timeObserver;
  AVSynchronizedLayer *_syncLayer;
  CALayer *_heroLayer;
  long long _preparedForMode;
  long long _transitionMode;
  NPTOVideoPlayerView *_playerView;
  UIImageView *_heroView;
}

@property (retain, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSURL *videoURL;
@property (weak, nonatomic) NSObject<NPTOIrisViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setImage:(id)image videoURL:(id)url videoDuration:(double)duration stillDisplayTime:(double)time;
- (void)videoPlayerViewDidBeginPlaying:(id)playing;
- (void)_mediaServicesWereReset:(id)reset;
- (void)prepareToPlayWithMode:(long long)mode;
- (void)playWithMode:(long long)mode;
- (void)pauseWithMode:(long long)mode;
- (BOOL)isPlaying;
- (void)interruptPlayback;
- (void)resumeInterruptedPlayback;
@end

#endif /* NPTOIrisView_h */