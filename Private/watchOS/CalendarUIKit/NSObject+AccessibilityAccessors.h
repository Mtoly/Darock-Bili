//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef NSObject_AccessibilityAccessors_h
#define NSObject_AccessibilityAccessors_h
@import Foundation;

@interface NSObject (AccessibilityAccessors)
/* class methods */
+ (void)_accessibilityCalGetHourDesignatorsForAM:(id *)am andPM:(id *)pm;
+ (BOOL)_accessibilityCalSpaceBetweenDesignatorsAndHour;
+ (BOOL)_accessibilityCalShow24Hours;
+ (id)_accessibilityStringForDayOfWeek:(int)week;
+ (id)_accessibilityStringForDate:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })date;
@end

#endif /* NSObject_AccessibilityAccessors_h */