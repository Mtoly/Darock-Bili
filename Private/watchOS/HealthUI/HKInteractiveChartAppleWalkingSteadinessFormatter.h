//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInteractiveChartAppleWalkingSteadinessFormatter_h
#define HKInteractiveChartAppleWalkingSteadinessFormatter_h
@import Foundation;

#include "HKInteractiveChartGenericStatFormatter.h"

@interface HKInteractiveChartAppleWalkingSteadinessFormatter : HKInteractiveChartGenericStatFormatter
/* instance methods */
- (id)formattedSelectedRangeLabelDataWithChartData:(id)data context:(long long)context;
- (id)_formattedCurrentValueForChartData:(id)data context:(long long)context;
- (id)attributedStringWithValue:(double)value unit:(id)unit showUnit:(BOOL)unit;
- (id)selectedRangeSeparatorString;
- (id)unitStringFromUnit:(id)unit number:(id)number;
@end

#endif /* HKInteractiveChartAppleWalkingSteadinessFormatter_h */