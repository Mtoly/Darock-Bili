//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _ActivityCurrentValueSummary_h
#define _ActivityCurrentValueSummary_h
@import Foundation;

#include "HKActivitySummary.h"

@class NSDateComponents;

@interface _ActivityCurrentValueSummary : HKActivitySummary

@property (nonatomic) long long timeScope;
@property (nonatomic) double collatedSummaryCount;
@property (retain, nonatomic) NSDateComponents *collationDateComponents;

/* instance methods */
- (id)initWithTimeScope:(long long)scope;
- (void)combineWithActivitySummary:(id)summary;
- (id)dateComponentsForCalendar:(id)calendar;
- (void)finishCollatingSummaryWithGraphView:(id)view;
- (id)_addQuantity:(id)quantity toQuantity:(id)quantity;
- (id)_divideQuantity:(id)quantity divisor:(double)divisor;
- (id)_maxQuantity:(id)quantity otherQuantity:(id)quantity;
@end

#endif /* _ActivityCurrentValueSummary_h */