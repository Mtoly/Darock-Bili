//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInteractiveChartOverlayViewController_h
#define HKInteractiveChartOverlayViewController_h
@import Foundation;

#include "HKInteractiveChartViewController.h"
#include "HKDisplayType.h"
#include "HKInteractiveChartViewObserver-Protocol.h"
#include "HKValueRange.h"
#include "_HKInteractiveChartOverlayWaitForCacheData.h"

@class NSMutableDictionary, NSString, UIColor;

@interface HKInteractiveChartOverlayViewController : HKInteractiveChartViewController<HKInteractiveChartViewObserver>

@property (retain, nonatomic) HKDisplayType *overlayDisplayType;
@property (retain, nonatomic) UIColor *currentOverlayColor;
@property (retain, nonatomic) NSMutableDictionary *overlayChartCaches;
@property (retain, nonatomic) NSMutableDictionary *customNamedCaches;
@property (retain, nonatomic) _HKInteractiveChartOverlayWaitForCacheData *waitForCacheData;
@property (readonly, nonatomic) HKDisplayType *primaryDisplayType;
@property (nonatomic) long long displayMode;
@property (retain, nonatomic) HKValueRange *initialVisibleDateRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHealthStore:(id)store primaryDisplayType:(id)type unitPreferenceController:(id)controller dateCache:(id)cache chartDataCacheController:(id)controller selectedTimeScopeController:(id)controller sampleTypeDateRangeController:(id)controller initialXValue:(id)xvalue currentCalendarOverride:(id)override options:(unsigned long long)options;
- (id)initWithTimeScopeRanges:(id)ranges healthStore:(id)store primaryDisplayType:(id)type unitPreferenceController:(id)controller dateCache:(id)cache chartDataCacheController:(id)controller selectedTimeScopeController:(id)controller sampleTypeDateRangeController:(id)controller initialXValue:(id)xvalue currentCalendarOverride:(id)override options:(unsigned long long)options;
- (void)_commonInitializationWithDisplayType:(id)type;
- (void)unitPreferencesWillUpdate:(id)update;
- (void)installOverlayDisplayType:(id)type;
- (void)clearOverlayDisplayType;
- (void)clearOverlayDisplayTypeWithAutomaticAutoscale:(BOOL)autoscale;
- (void)installStackedDisplayType:(id)type;
- (void)clearDisplayTypeStack;
- (id)displayTypeForQuantityDistributionStyle:(long long)style timeScope:(long long)scope overlayColor:(id)color options:(long long)options alternateFormatter:(id)formatter namedPredicate:(id)predicate;
- (void)_modifyFormatter:(id)formatter forTitleOptions:(long long)options;
- (id)displayTypeForQuantityIdentifier:(id)identifier timeScope:(long long)scope displayTypeController:(id)controller overlayColor:(id)color cacheDataSource:(id)source alternateLineSeries:(id)series alternateFormatter:(id)formatter seriesOptions:(long long)options;
- (id)displayTypeForGraphSeries:(id)series namedDataSource:(id)source templateDisplayType:(id)type timeScope:(long long)scope formatter:(id)formatter;
- (void)cachedDataForQuantityDistributionStyle:(long long)style timeScope:(long long)scope resolution:(long long)resolution startDate:(id)date endDate:(id)date namedPredicate:(id)predicate completion:(id /* block */)completion;
- (void)cachedDataForQuantityIdentifier:(id)identifier timeScope:(long long)scope resolution:(long long)resolution startDate:(id)date endDate:(id)date cacheDataSource:(id)source completion:(id /* block */)completion;
- (void)cachedDataForCustomGraphSeries:(id)series timeScope:(long long)scope resolution:(long long)resolution startDate:(id)date endDate:(id)date completion:(id /* block */)completion;
- (void)cachedDataForCustomGraphSeries:(id)series timeScope:(long long)scope resolution:(long long)resolution startDate:(id)date endDate:(id)date queryIfNeeded:(BOOL)needed completion:(id /* block */)completion;
- (void)cachedDataForStandardDisplayType:(id)type timeScope:(long long)scope resolution:(long long)resolution startDate:(id)date endDate:(id)date completion:(id /* block */)completion;
- (void)_deliverOrWaitForDataSource:(id)source graphSeriesContext:(id)context priorityDelegate:(id)delegate timeScope:(long long)scope resolution:(long long)resolution startDate:(id)date endDate:(id)date queryIfNeeded:(BOOL)needed completion:(id /* block */)completion;
- (double)minimumHeightForChart;
- (id)visibleRangeForTimeScope:(long long)scope proposedRange:(id)range;
- (void)configureDisplayTypes:(id)types timeScope:(long long)scope stackOffset:(long long)offset;
- (id)_overlayChartCacheForDistributionStyle:(long long)style timeScope:(long long)scope namedPredicate:(id)predicate;
- (BOOL)_displayTypeRequiresAverageAndDuration:(id)duration;
- (id)_overlayChartCacheForDataSource:(id)source templateDisplayType:(id)type;
- (id)_dataSourceForDistributionStyle:(long long)style timeScope:(long long)scope namedPredicate:(id)predicate;
- (id)_dataSourceForQuantityType:(id)type timeScope:(long long)scope customDataSource:(id)source;
- (id)_dataSourceForNamedDataSource:(id)source templateDisplayType:(id)type;
- (BOOL)_deliverCachedDataFromSource:(id)source graphSeriesContext:(id)context timeScope:(long long)scope resolution:(long long)resolution startDate:(id)date endDate:(id)date completion:(id /* block */)completion;
- (id)lollipopAnnotationColor;
- (id)lollipopExtensionColor;
- (id)seriesSelectionLineColorForGraphView:(id)view;
@end

#endif /* HKInteractiveChartOverlayViewController_h */