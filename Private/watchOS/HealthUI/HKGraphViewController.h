//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKGraphViewController_h
#define HKGraphViewController_h
@import Foundation;

#include "HKViewController.h"
#include "HKGraphView.h"
#include "HKGraphViewDelegate-Protocol.h"

@class NSString;
@protocol HKGraphViewControllerDelegate;

@interface HKGraphViewController : HKViewController<HKGraphViewDelegate>

@property (readonly, nonatomic) HKGraphView *graphView;
@property (weak, nonatomic) NSObject<HKGraphViewDelegate> *graphViewDelegateProxy;
@property (weak, nonatomic) NSObject<HKGraphViewControllerDelegate> *delegate;
@property (readonly, nonatomic) long long dateZoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithGraphView:(id)view dateZoom:(long long)zoom;
- (void)setDetailView:(id)view;
- (BOOL)graphViewPointSelectionDifferentiatesSeriesGroups:(id)groups;
- (void)graphViewDidBeginSelection:(id)selection;
- (void)graphView:(id)view didUpdateSelectedPoint:(id)point;
- (void)graphViewDidEndSelection:(id)selection;
- (void)graphView:(id)view didUpdateFromDateZoom:(long long)zoom toDateZoom:(long long)zoom newVisibleRange:(id)range;
- (void)graphView:(id)view didUpdateVisibleValueRange:(id)range changeContext:(long long)context;
- (void)graphView:(id)view didFinishUserScrollingToValueRange:(id)range;
- (long long)stackCountForGraphView:(id)view;
- (long long)primarySeriesGroupIndexForGraphView:(id)view;
- (id)stackedSeriesGroupProportionsForGraphView:(id)view;
- (id)graphView:(id)view graphSeriesForZoom:(long long)zoom stackOffset:(long long)offset;
- (void)graphViewSizeChanged:(id)changed;
- (void)graphView:(id)view didUpdateYAxisWidth:(double)width toWidth:(double)width;
- (void)graphView:(id)view didUpdateSeries:(id)series newDataArrived:(BOOL)arrived changeContext:(long long)context;
- (id)seriesSelectionLineColorForGraphView:(id)view;
- (void)graphView:(id)view didUpdateLegendViewsWithTopLegendFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)graphViewDidTapYAxis:(id)yaxis;
- (void)graphView:(id)view startupTime:(long long)time;
- (void)graphViewExternalSelectionEnd:(id)end;
- (void)graphViewRenderedView:(id)view;
@end

#endif /* HKGraphViewController_h */