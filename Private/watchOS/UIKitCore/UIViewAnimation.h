//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIViewAnimation_h
#define UIViewAnimation_h
@import Foundation;

#include "UIView.h"

@class NSIndexPath;

@interface UIViewAnimation : NSObject {
  /* instance variables */
  BOOL _animateFromCurrentPosition;
  BOOL _shouldDeleteAfterAnimation;
  BOOL _editing;
  BOOL _shouldAnimateShadow;
  BOOL _shouldResetGroupOpacityAfterAnimation;
  BOOL _shouldAllowGroupOpacityAfterAnimation;
  BOOL _shouldClipToBoundsAfterAnimation;
  int _viewType;
  int _curve;
  UIView *_view;
  NSIndexPath *_indexPath;
  double _endAlpha;
  double _startFraction;
  double _endFraction;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endRect;
}

/* instance methods */
- (id)description;
@end

#endif /* UIViewAnimation_h */