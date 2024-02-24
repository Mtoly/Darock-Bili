//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionLayoutAuxillaryItemSolver_h
#define _UICollectionLayoutAuxillaryItemSolver_h
@import Foundation;

#include "_UICollectionLayoutAuxillaryHosting-Protocol.h"
#include "_UICollectionLayoutAuxillaryOffsets.h"
#include "_UIRTree.h"

@class NSArray, NSDictionary, NSIndexSet, NSSet;

@interface _UICollectionLayoutAuxillaryItemSolver : NSObject {
  /* instance variables */
  long long _memoizedSupplementaryKind;
  NSArray *_memoizedAuxillaryItems;
  NSSet *_elementKinds;
  BOOL _hasEstimatedSizes;
  NSIndexSet *_pinnedSupplementaryIndexes;
  _UICollectionLayoutAuxillaryOffsets *_supplementariesThatCanAffectContentSize;
  unsigned long long _containerSizeDependentAxes;
  NSObject<_UICollectionLayoutAuxillaryHosting> *_auxillaryHost;
  NSArray *_frames;
  NSArray *_unpinnedFrames;
  NSDictionary *_enrolledSupplementaryFramesDict;
  NSDictionary *_supplementaryFramesKeyedByKindIndex;
  _UIRTree *_supplementaryItemGeometricIndexer;
  struct CGSize { double width; double height; } _contentSize;
  struct CGPoint { double x; double y; } _hostContentOffset;
  struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _hostContentSizeInsets;
}

/* instance methods */
@end

#endif /* _UICollectionLayoutAuxillaryItemSolver_h */