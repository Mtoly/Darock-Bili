//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 43.4.0.0.0
//
#ifndef NUIContainerGridView_h
#define NUIContainerGridView_h
@import Foundation;

#include "NUIContainerView.h"
#include "_NUIGridArrangementContainer-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol {_NUIGridArrangement="container"@"<_NUIGridArrangementContainer>""horzDist"b8"vertDist"b8"baselineRelative"B"hasValidMeasurement"B"cells"{vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>>="__begin_"^{_NUIGridArrangementCell}"__end_"^{_NUIGridArrangementCell}"__end_cap_"{__compressed_pair<_NUIGridArrangementCell *, std::allocator<_NUIGridArrangementCell>>="__value_"^{_NUIGridArrangementCell}}}"columns"{vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>>="__begin_"^{_NUIGridArrangementDimension}"__end_"^{_NUIGridArrangementDimension}"__end_cap_"{__compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>>="__value_"^{_NUIGridArrangementDimension}}}"rows"{vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>>="__begin_"^{_NUIGridArrangementDimension}"__end_"^{_NUIGridArrangementDimension}"__end_cap_"{__compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>>="__value_"^{_NUIGridArrangementDimension}}}"viewFrames"{vector<CGRect, std::allocator<CGRect>>="__begin_"^{CGRect}"__end_"^{CGRect}"__end_cap_"{__compressed_pair<CGRect *, std::allocator<CGRect>>="__value_"^{CGRect}}}}, {map<UIView *, const std::pair<_NSRange, _NSRange>, std::less<UIView *>, std::allocator<std::pair<UIView *const, const std::pair<_NSRange, _NSRange>>>>="__tree_"{__tree<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>>, std::allocator<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>>>="__value_"Q}}};

@interface NUIContainerGridView : NUIContainerView<_NUIGridArrangementContainer> {
  /* instance variables */
  NSMutableArray *_viewRows;
  struct _NUIGridArrangement { <_NUIGridArrangementContainer> *container; unsigned int x :8 horzDist; unsigned int x :8 vertDist; BOOL baselineRelative; BOOL hasValidMeasurement; struct vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__begin_; struct _NUIGridArrangementCell *__end_; struct __compressed_pair<_NUIGridArrangementCell *, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__value_; } __end_cap_; } cells; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } columns; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } rows; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; } _arrangement;
  struct { unsigned short width; unsigned short height; } _visibleCount;
  struct map<UIView *, const std::pair<_NSRange, _NSRange>, std::less<UIView *>, std::allocator<std::pair<UIView *const, const std::pair<_NSRange, _NSRange>>>> { struct __tree<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>>, std::allocator<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>>> { unsigned long long __value_; } __pair3_; } __tree_; } _viewRanges;
  struct CGSize { double width; double height; } _spacing;
  NSMutableArray *_rows;
  NSMutableArray *_columns;
  struct { unsigned int x :8 horzAlign; unsigned int x :8 vertAlign; unsigned int x :1 inInsertOrRemove; unsigned int x :1 hasMutations; } _gridViewFlags;
}

@property (copy, nonatomic) NSArray *arrangedSubviewRows;
@property (readonly, nonatomic) long long numberOfRows;
@property (readonly, nonatomic) long long numberOfColumns;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long horizontalDistribution;
@property (nonatomic) long long verticalDistribution;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double columnSpacing;
@property (nonatomic) double rowHeight;
@property (nonatomic) double columnWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)containerGridViewWithArrangedSubviewRows:(id)rows;

/* instance methods */
- (BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)subview;
- (void)setBaselineRelativeArrangement:(BOOL)arrangement;
- (id)initWithArrangedSubviews:(id)subviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithArrangedSubviewRows:(id)rows;
- (void)dealloc;
- (void)ensureArrangedSubviewsAreValid;
- (id)arrangedSubviewInColumnAtIndex:(long long)index rowAtIndex:(long long)index;
- (void)getColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range forArrangedSubview:(id)subview;
- (long long)rowIndexForArrangedSubview:(id)subview;
- (long long)columnIndexForArrangedSubview:(id)subview;
- (id)rowAtIndex:(long long)index;
- (id)addRowWithArrangedSubviews:(id)subviews;
- (id)insertRowAtIndex:(long long)index withArrangedSubviews:(id)subviews;
- (void)moveRowAtIndex:(long long)index toIndex:(long long)index;
- (void)removeRowAtIndex:(long long)index;
- (id)columnAtIndex:(long long)index;
- (id)addColumnWithArrangedSubviews:(id)subviews;
- (id)insertColumnAtIndex:(long long)index withArrangedSubviews:(id)subviews;
- (void)moveColumnAtIndex:(long long)index toIndex:(long long)index;
- (void)removeColumnAtIndex:(long long)index;
- (void)replaceArrangedSubview:(id)subview inColumnAtIndex:(long long)index rowAtIndex:(long long)index;
- (void)replaceArrangedSubviewAtIndex:(unsigned long long)index withView:(id)view;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (id)viewForFirstBaselineLayoutInRowAtIndex:(long long)index;
- (id)viewForLastBaselineLayoutInRowAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })calculateArrangedSizeFittingSize:(struct CGSize { double x0; double x1; })size;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)arrangedDebugDescription;
- (id)debugDictionaryForVisibleArrangedSubview:(id)subview;
- (id)debugDictionary;
- (void)invalidateInternalStateForInvalidation:(long long)invalidation;
- (void)didInsertArrangedSubview:(id)subview atIndex:(long long)index;
- (void)didRemoveArrangedSubview:(id)subview atIndex:(long long)index;
- (void)populateGridArrangementCells:(void *)cells;
- (void)populateGridArrangementDimension:(void *)dimension withCells:(const void *)cells axis:(long long)axis;
@end

#endif /* NUIContainerGridView_h */