//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarVisualProvider_DynamicSplit_h
#define _UIStatusBarVisualProvider_DynamicSplit_h
@import Foundation;

#include "_UIStatusBarVisualProvider_Split.h"
#include "_UIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate-Protocol.h"

@class BSAnimationSettings, NSLayoutConstraint, NSString;

@interface _UIStatusBarVisualProvider_DynamicSplit : _UIStatusBarVisualProvider_Split<_UIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate>

@property (retain, nonatomic) NSLayoutConstraint *cutoutWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *cutoutCenterConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingCenterYConstraint;
@property (copy, nonatomic) id /* block */ deferredAvoidanceFrameUpdateBlock;
@property (retain, nonatomic) BSAnimationSettings *currentAnimationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)visualProviderSubclassForScreen:(id)screen visualProviderInfo:(id)info;
+ (double)height;
+ (double)baseFontSize;
+ (double)expandedFontSize;

/* instance methods */
- (double)leadingItemSpacing;
- (double)itemSpacing;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (id)normalRoundFont;
- (double)minimumBottomLeadingWidth;
- (double)bottomLeadingTopOffset;
- (double)topLeadingCenterOffset;
- (double)normalIconScale;
- (double)expandedIconScale;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })expandedEdgeInsets;
- (double)cutoutEdgeInset;
- (double)minimumItemScaleFactor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sensorAreaRect;
- (struct CGSize { double x0; double x1; })sensorAreaSize;
- (double)effectiveTargetDisplayWidth;
- (double)sensorAreaCenterOffsetFromTrailing;
- (id)setupInContainerView:(id)view;
- (id)_orderedDisplayItemPlacements;
- (BOOL)_needsUpdateOfConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame cutoutOffset:(double *)offset cutoutWidth:(double *)width;
- (id)leadingItemCutoffWidths;
- (id)trailingItemCutoffWidths;
- (unsigned long long)leadingNumberOfItemsForWidth:(double)width;
- (unsigned long long)trailingNumberOfItemsForWidth:(double)width includingPrivacyIndicator:(BOOL)indicator;
- (double)leadingScaleForWidth:(double)width;
- (double)trailingScaleForWidth:(double)width includingPrivacyIndicator:(BOOL)indicator;
- (void)updateDisplayItem:(id)item toDynamicallyHidden:(BOOL)hidden scale:(double)scale;
- (void)updateDisplayItem:(id)item toScale:(double)scale;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame withAnimationSettings:(id)settings options:(unsigned long long)options;
- (id)region:(id)region willSetDisplayItems:(id)items;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)identifier itemAnimation:(id)animation;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)identifier itemAnimation:(id)animation;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)identifier;
- (void)orientationUpdatedFromOrientation:(long long)orientation;
- (void)dataUpdated:(id)updated;
- (BOOL)_updateSystemNavigationWithData:(id)data avoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _UIStatusBarVisualProvider_DynamicSplit_h */