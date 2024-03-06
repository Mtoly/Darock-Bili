//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavigationBarBridgingPalette_h
#define _UINavigationBarBridgingPalette_h
@import Foundation;

#include "_UINavigationBarPalette.h"
#include "UINavigationController.h"
#include "UIView.h"
#include "_UINavigationPalette-Protocol.h"

@class NSString;

@interface _UINavigationBarBridgingPalette : _UINavigationBarPalette<_UINavigationPalette> {
  /* instance variables */
  UIView *_temporaryBackgroundView;
}

@property (retain, nonatomic) UIView *_backgroundView;
@property (nonatomic) BOOL _paletteOverridesPinningBar;
@property (readonly, nonatomic) UINavigationController *navController;
@property (readonly, nonatomic) unsigned long long boundaryEdge;
@property (nonatomic) BOOL pinned;
@property (nonatomic) BOOL pinningBarShadowWasHidden;
@property (nonatomic) BOOL pinningBarShadowIsHidden;
@property (nonatomic) BOOL paletteShadowIsHidden;
@property (nonatomic) BOOL visibleWhenPinningBarIsHidden;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setSize:(struct CGSize { double x0; double x1; })size;
- (void)_setSize:(struct CGSize { double x0; double x1; })size;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame isAnimating:(BOOL)animating;
- (void)resetBackgroundConstraints;
- (void)_setBackgroundView:(id)view;
- (void)_setPaletteOverridesPinningBar:(BOOL)bar;
- (void)_setTopConstraintConstant:(double)constant;
- (void)_setLeftConstraintConstant:(double)constant;
- (BOOL)isVisibleWhenPinningBarIsHidden;
- (BOOL)isAttached;
- (BOOL)paletteIsHidden;
- (id)_attachedPinningTopBar;
- (void)_updateBackgroundView;
- (void)_setAttached:(BOOL)attached didComplete:(BOOL)complete;
- (void)_configureConstraintsForBackground:(id)background;
- (BOOL)_shouldUpdateBackground;
- (void)_updateBackgroundConstraintsIfNecessary;
- (void)_configurePaletteConstraintsForBoundary;
- (void)_disableConstraints;
- (void)_enableConstraints;
- (void)_resetConstraintConstants:(double)constants;
- (void)_resetHeightConstraintConstant;
- (void)_setupBackgroundViewIfNecessary;
@end

#endif /* _UINavigationBarBridgingPalette_h */