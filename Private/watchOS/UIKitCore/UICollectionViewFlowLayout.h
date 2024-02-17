//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICollectionViewFlowLayout_h
#define UICollectionViewFlowLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"
#include "_UICollectionViewUpdateTranslating-Protocol.h"
#include "_UIFlowLayoutInfo.h"
#include "_UIUpdateVisibleCellsContext.h"

@class NSDictionary, NSMutableDictionary;

@interface UICollectionViewFlowLayout : UICollectionViewLayout {
  /* instance variables */
  struct { unsigned int x :1 delegateSizeForItem; unsigned int x :1 delegateReferenceSizeForHeader; unsigned int x :1 delegateReferenceSizeForFooter; unsigned int x :1 delegateInsetForSection; unsigned int x :1 delegateInteritemSpacingForSection; unsigned int x :1 delegateLineSpacingForSection; unsigned int x :1 delegateAlignmentOptions; unsigned int x :1 layoutDataIsValid; unsigned int x :1 delegateInfoIsValid; unsigned int x :1 roundsToScreenScale; unsigned int x :1 delegateSizesForSection; unsigned int x :1 sectionHeadersFloat; unsigned int x :1 sectionFootersFloat; unsigned int x :1 headerFollowsSectionMargins; unsigned int x :1 footerFollowsSectionMargins; unsigned int x :1 fetchingItemsInfoForRect; unsigned int x :1 isInUpdateVisibleCellsPass; } _gridLayoutFlags;
  double _interitemSpacing;
  double _lineSpacing;
  _UIFlowLayoutInfo *_data;
  struct CGSize { double width; double height; } _currentLayoutSize;
  NSMutableDictionary *_insertedItemsAttributesDict;
  NSMutableDictionary *_insertedSectionHeadersAttributesDict;
  NSMutableDictionary *_insertedSectionFootersAttributesDict;
  NSMutableDictionary *_deletedItemsAttributesDict;
  NSMutableDictionary *_deletedSectionHeadersAttributesDict;
  NSMutableDictionary *_deletedSectionFootersAttributesDict;
  NSDictionary *_rowAlignmentsOptionsDictionary;
  struct CGPoint { double x; double y; } _contentOffsetAdjustment;
  struct CGSize { double width; double height; } _contentSizeAdjustment;
  NSMutableDictionary *_cachedItemAttributes;
  NSMutableDictionary *_cachedItemFrames;
  _UIUpdateVisibleCellsContext *_updateVisibleCellsContext;
  NSObject<_UICollectionViewUpdateTranslating> *_currentUpdateTranslator;
}

@property (readonly, nonatomic) BOOL estimatesSizes;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct CGSize { double x0; double x1; } itemSize;
@property (nonatomic) struct CGSize { double x0; double x1; } estimatedItemSize;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) struct CGSize { double x0; double x1; } headerReferenceSize;
@property (nonatomic) struct CGSize { double x0; double x1; } footerReferenceSize;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sectionInset;
@property (nonatomic) long long sectionInsetReference;
@property (nonatomic) BOOL sectionHeadersPinToVisibleBounds;
@property (nonatomic) BOOL sectionFootersPinToVisibleBounds;

/* class methods */
+ (Class)invalidationContextClass;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)invalidateLayoutWithContext:(id)context;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (BOOL)_shouldInvalidateLayoutForOldInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets newInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (BOOL)_shouldInvalidateLayoutForUpdatedSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets fromOldInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (BOOL)_shouldInvalidateLayoutForUpdatedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins fromOldMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect usingData:(id)data;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect usingData:(id)data;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)layoutAttributesForHeaderInSection:(long long)section usingData:(id)data;
- (id)layoutAttributesForFooterInSection:(long long)section usingData:(id)data;
- (id)layoutAttributesForItemAtIndexPath:(id)path usingData:(id)data;
- (id)layoutAttributesForHeaderInSection:(long long)section;
- (id)layoutAttributesForFooterInSection:(long long)section;
- (void)_calculateAttributesForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)attributes withOriginalAttributes:(id)attributes;
- (id)invalidationContextForPreferredLayoutAttributes:(id)attributes withOriginalAttributes:(id)attributes;
- (BOOL)_estimatesSizes;
- (BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (void)_resetCachedItems;
- (struct CGSize { double x0; double x1; })_effectiveEstimatedItemSize;
- (id)_fetchAndCacheNewLayoutAttributesForCellWithIndexPath:(id)path frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_existingLayoutAttributesForItemAtIndexPath:(id)path;
- (BOOL)_boundsAndInsetsAreValidForReferenceDimension;
- (id)_layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_setCollectionView:(id)view;
- (void)_updateCollectionViewScrollableAxis;
- (void)_updateDelegateFlags;
- (void)_getSizingInfosWithExistingSizingDictionary:(id)dictionary;
- (void)_updateItemsLayoutForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect allowsPartialUpdate:(BOOL)update;
- (void)_fetchItemsInfoForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (double)_dimensionFromCollectionView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForItem:(long long)item inSection:(long long)section usingData:(id)data;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForHeaderInSection:(long long)section usingData:(id)data;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForFooterInSection:(long long)section usingData:(id)data;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (void)_prepareForCollectionViewUpdates:(id)updates withDataSourceTranslator:(id)translator;
- (void)_finalizeCollectionViewUpdate:(id)update;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)path;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)section;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)section;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)path;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)section;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)section;
- (struct CGSize { double x0; double x1; })synchronizeLayout;
- (void)_invalidateButKeepDelegateInfo;
- (void)_invalidateButKeepAllInfo;
- (void)_setRowAlignmentsOptions:(id)options;
- (id)_rowAlignmentOptions;
- (void)_updateContentSizeScrollingDimensionWithDelta:(double)delta;
- (long long)_sectionArrayIndexForIndexPath:(id)path;
- (void)_setRoundsToScreenScale:(BOOL)scale;
- (BOOL)_roundsToScreenScale;
- (BOOL)_headerFollowsSectionMargins;
- (void)_setHeaderFollowsSectionMargins:(BOOL)margins;
- (BOOL)_footerFollowsSectionMargins;
- (void)_setFooterFollowsSectionMargins:(BOOL)margins;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_focusFastScrollingIndexBarInsets;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollingToSection:(long long)section;
- (long long)developmentLayoutDirection;
- (void)_willPerformUpdateVisibleCellsPass;
- (void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(struct CGPoint { double x0; double x1; })offset;
- (unsigned long long)_layoutAxis;
@end

#endif /* UICollectionViewFlowLayout_h */