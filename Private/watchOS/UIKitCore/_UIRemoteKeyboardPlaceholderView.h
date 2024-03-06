//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIRemoteKeyboardPlaceholderView_h
#define _UIRemoteKeyboardPlaceholderView_h
@import Foundation;

#include "UIView.h"
#include "UISplittableInputView-Protocol.h"
#include "UIView.h"
#include "UIWindowScene.h"
#include "_UIRemoteKeyboardInputViewPlaceholder-Protocol.h"

@class NSString;

@interface _UIRemoteKeyboardPlaceholderView : UIView<UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder> {
  /* instance variables */
  UIView *_mirroredView;
  id /* block */ _sizeBlock;
  UIWindowScene *_sceneForHeight;
  BOOL _isLocalMinimumHeight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double x0; double x1; } fixedSize;
@property (readonly) UIView *placeheldView;
@property (retain, nonatomic) UIView *fallbackView;
@property (retain, nonatomic) UIView *associatedView;
@property (readonly, nonatomic) BOOL isLocalMinimumHeightPlaceholder;

/* class methods */
+ (id)placeholderForView:(id)view;
+ (id)placeholderWithWidth:(double)width height:(double)height;
+ (id)placeholderWithWidthSizer:(id /* block */)sizer heightWithScene:(id)scene;

/* instance methods */
- (void)layoutMergedSubviews;
- (void)updateMergedSubviewConstraints;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize { double x0; double x1; })size rightContentSize:(struct CGSize { double x0; double x1; })size;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize { double x0; double x1; })size rightContentSize:(struct CGSize { double x0; double x1; })size;
- (void)willBeginSplitTransition;
- (void)didEndSplitTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_compatibleBounds;
- (void)_setLeftOffset:(double)offset gapWidth:(double)width;
- (void)_beginSplitTransitionIfNeeded:(double)needed gapWidth:(double)width;
- (struct CGSize { double x0; double x1; })leftContentViewSize;
- (struct CGSize { double x0; double x1; })rightContentViewSize;
- (void)_endSplitTransitionIfNeeded:(BOOL)needed;
- (void)_setProgress:(double)progress boundedBy:(double)by;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)refreshPlaceholder;
- (BOOL)isEqual:(id)equal;
- (void)_isPlaceholderViewSelector;
- (void)_configureDebugOverlayIfNecessary;
@end

#endif /* _UIRemoteKeyboardPlaceholderView_h */