//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKSleepDurationAverageContext_h
#define _HKSleepDurationAverageContext_h
@import Foundation;

#include "HKDisplayType.h"
#include "HKDisplayTypeContextItem.h"
#include "HKInteractiveChartOverlayViewController.h"
#include "HKOverlayContext-Protocol.h"
#include "HKOverlaySleepRoomContextChangeDelegate-Protocol.h"
#include "_HKSleepDurationAverageFormatter.h"
#include "_HKSleepDurationAverageSeries.h"

@class NSString;

@interface _HKSleepDurationAverageContext : NSObject<HKOverlayContext>

@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (readonly, weak, nonatomic) NSObject<HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate;
@property (readonly, nonatomic) _HKSleepDurationAverageSeries *overlayAverageSeries;
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) HKDisplayType *baseDisplayType;
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType;
@property (readonly, nonatomic) BOOL useInBedAverage;
@property (readonly, nonatomic) _HKSleepDurationAverageFormatter *averageChartFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBaseDisplayType:(id)type overlayDisplayType:(id)type overlayChartController:(id)controller useInBedAverage:(BOOL)average contextChangeDelegate:(id)delegate overlayAverageSeries:(id)series averageChartFormatter:(id)formatter;
- (id)_contextItemWithAverageString:(id)string timeScope:(long long)scope;
- (double)_averageValueFromChartPoints:(id)points useInBedAverage:(BOOL)average;
- (id)_averagePhraseFromAverageValue:(double)value shortForm:(BOOL)form timeScope:(long long)scope;
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)scope;
- (id)baseDisplayTypeForOverlay:(long long)overlay;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)interval overlayController:(id)controller timeScope:(long long)scope resolution:(long long)resolution completion:(id /* block */)completion;
- (long long)resolutionForTimeScope:(long long)scope traitResolution:(long long)resolution;
- (void)_updateRangeDataWithChartPoints:(id)points useInBedAverage:(BOOL)average isHighlighted:(BOOL)highlighted timeScope:(long long)scope;
- (id)contextItemForLastUpdate;
- (void)overlayStateWillChange:(BOOL)change contextItem:(id)item chartController:(id)controller;
- (id)_findSleepDurationSeriesForTimeScope:(long long)scope;
@end

#endif /* _HKSleepDurationAverageContext_h */