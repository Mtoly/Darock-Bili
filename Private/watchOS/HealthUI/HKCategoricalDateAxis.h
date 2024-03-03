//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCategoricalDateAxis_h
#define HKCategoricalDateAxis_h
@import Foundation;

#include "HKDateAxis.h"

@class NSArray, NSDateComponents;

@interface HKCategoricalDateAxis : HKDateAxis

@property (copy, nonatomic) NSArray *categoryTitles;
@property (nonatomic) long long categoriesStartHourPosition;
@property (copy, nonatomic) NSDateComponents *minorAxisIntervalComponents;
@property (copy, nonatomic) NSDateComponents *majorAxisIntervalComponents;

/* class methods */
+ (id)datePositionForCategoryIndex:(long long)index categoryCount:(long long)count startDate:(id)date calendar:(id)calendar;
+ (double)_categoryLocationIntervalForCategoryCount:(long long)count;
+ (double)_categoryStartLocationForCategoryCount:(long long)count;

/* instance methods */
- (id)initWithCurrentCalendar:(id)calendar axisStyle:(id)style categoryTitles:(id)titles;
- (id)minorAxisIntervalComponentsForZoomLevelConfiguration:(id)configuration;
- (id)axisLabelIntervalComponentsForZoomLevelConfiguration:(id)configuration;
- (BOOL)canAddLabelForAxisLabelType:(long long)type;
- (id)stringForDate:(id)date zoom:(long long)zoom labelType:(long long)type;
@end

#endif /* HKCategoricalDateAxis_h */