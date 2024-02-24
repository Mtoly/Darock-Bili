//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _TtC14NanoHomeScreen25StackCollectionViewLayout_h
#define _TtC14NanoHomeScreen25StackCollectionViewLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"

@interface NanoHomeScreen.StackCollectionViewLayout : UICollectionViewLayout { // (Swift)
  /* instance variables */
   layoutMode;
   interactivelyMovingIndexPath;
   contentOverlayInsets;
   platter1ScaleTransitionProgress;
   platter2ScaleTransitionProgress;
   platter3ScaleTransitionProgress;
   platter1YOffsetTransitionProgress;
   platter2YOffsetTransitionProgress;
   platter3YOffsetTransitionProgress;
   blurTransitionProgress;
   alphaTransitionProgress;
   headerBlurRadius;
   headerClockAlpha;
   headerClockScale;
   headerClockYTranslation;
   headerDateLabelAlphaValues;
   headerDateLabelYTranslations;
   waterLockEnabled;
   launcherButtonIndexPath;
   addWidgetViewIndexPath;
   reorderedCell;
   device;
   layoutConstants;
   notchProvider;
   cachedContentSize;
   layoutAttributesCache;
   supplementaryAttributesCache;
   contentOffsetToMaintainForTransition;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;
@property (nonatomic, readonly) double headerTopMargin;
@property (nonatomic, readonly) double rowHeight;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)invalidateLayoutWithContext:(id)context;
- (void)prepareLayout;
- (void)prepareForTransitionFromLayout:(id)layout;
- (void)finalizeLayoutTransition;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)path withTargetPosition:(struct CGPoint { double x0; double x1; })position;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (BOOL)_disablesDoubleSidedAnimations;
- (double)unclampedStackProgress:(id)progress;
@end

#endif /* _TtC14NanoHomeScreen25StackCollectionViewLayout_h */