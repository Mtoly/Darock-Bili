//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionLayoutItemSolver_h
#define _UICollectionLayoutItemSolver_h
@import Foundation;

#include "NSCollectionLayoutContainer-Protocol.h"
#include "NSCopying-Protocol.h"
#include "UITraitCollection.h"
#include "_UICollectionLayoutAuxillaryHosting-Protocol.h"
#include "_UICollectionLayoutItemSolverState.h"
#include "_UICollectionLayoutSupplementaryEnroller.h"
#include "_UICollectionPreferredSizes.h"

@class NSCollectionLayoutItem, NSString;

@interface _UICollectionLayoutItemSolver : NSObject<NSCopying, _UICollectionLayoutAuxillaryHosting> {
  /* instance variables */
  BOOL _layoutRTL;
  BOOL _solvingConsumedDirtyPreferredSizes;
  NSCollectionLayoutItem *_item;
  NSObject<NSCollectionLayoutContainer> *_container;
  UITraitCollection *_traitCollection;
  unsigned long long _containerSizeDependentLayoutAxes;
  _UICollectionLayoutItemSolverState *_solveResult;
  _UICollectionPreferredSizes *_preferredSizes;
  _UICollectionLayoutSupplementaryEnroller *_supplementaryEnroller;
  long long _solutionRecursionDepth;
  long long _maxFrameCount;
  unsigned long long _layoutAxis;
  struct CGSize { double width; double height; } _largestKnownItemSize;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _uncommittedSolvedItemFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })auxillaryHostPinningRect;
- (BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (struct CGPoint { double x0; double x1; })auxillaryHostAdditionalFrameOffset;
- (id)auxillaryHostContainer;
- (id)auxillaryHostAuxillaryItems;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (unsigned long long)auxillaryHostLayoutAxis;
- (long long)auxillaryHostAuxillaryKind;
- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostPreferredSizes;
- (id)auxillaryHostTraitCollection;
@end

#endif /* _UICollectionLayoutItemSolver_h */