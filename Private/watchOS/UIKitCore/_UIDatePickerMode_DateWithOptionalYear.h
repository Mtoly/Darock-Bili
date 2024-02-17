//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerMode_DateWithOptionalYear_h
#define _UIDatePickerMode_DateWithOptionalYear_h
@import Foundation;

#include "_UIDatePickerMode_Date.h"

@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date
/* class methods */
+ (long long)datePickerMode;

/* instance methods */
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)unit;
- (id)titleForRow:(long long)row inComponent:(long long)component;
- (long long)yearForRow:(long long)row;
- (long long)rowForDate:(id)date dateComponents:(id)components component:(long long)component currentRow:(long long)row;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)component usingSelectionBarValue:(BOOL)value;
- (BOOL)_shouldEnableValueForRow:(long long)row inComponent:(long long)component calendarUnit:(unsigned long long)unit;
- (id)dateComponentsByRestrictingSelectedComponents:(id)components withLastManipulatedColumn:(long long)column;
@end

#endif /* _UIDatePickerMode_DateWithOptionalYear_h */