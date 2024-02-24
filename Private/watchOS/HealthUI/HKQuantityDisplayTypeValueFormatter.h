//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKQuantityDisplayTypeValueFormatter_h
#define HKQuantityDisplayTypeValueFormatter_h
@import Foundation;

#include "HKDisplayTypeValueFormatter.h"

@interface HKQuantityDisplayTypeValueFormatter : HKDisplayTypeValueFormatter
/* instance methods */
- (id)attributedStringFromValue:(id)value displayType:(id)type unitController:(id)controller valueFont:(id)font unitFont:(id)font;
- (id)attributedStringFromValue:(id)value displayType:(id)type unitController:(id)controller valueFont:(id)font unitFont:(id)font formatForChart:(BOOL)chart;
- (id)attributedStringFromValue:(id)value displayType:(id)type unitController:(id)controller valueFont:(id)font unitFont:(id)font formatForChart:(BOOL)chart unitFormatString:(id)string;
- (id)attributedStringFromValue:(id)value unit:(id)unit unitController:(id)controller valueFont:(id)font unitFont:(id)font formatForChart:(BOOL)chart unitFormatString:(id)string formatString:(id)string;
- (id)attributedStringFromValue:(id)value displayType:(id)type unitController:(id)controller valueFont:(id)font unitFont:(id)font formatForChart:(BOOL)chart unitFormatString:(id)string formatString:(id)string;
- (id)attributedStringFromValueString:(id)string valueFont:(id)font unitString:(id)string unitFont:(id)font unitIcon:(id)icon formatForChart:(BOOL)chart formatString:(id)string;
- (id)stringFromValue:(id)value displayType:(id)type unitController:(id)controller formatString:(id)string;
- (id)stringFromValue:(id)value displayType:(id)type unitController:(id)controller;
@end

#endif /* HKQuantityDisplayTypeValueFormatter_h */