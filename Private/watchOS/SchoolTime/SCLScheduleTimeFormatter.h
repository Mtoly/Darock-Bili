//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLScheduleTimeFormatter_h
#define SCLScheduleTimeFormatter_h
@import Foundation;

#include "NSFormatter.h"

@class NSCalendar, NSDateFormatter;

@interface SCLScheduleTimeFormatter : NSFormatter {
  /* instance variables */
  NSDateFormatter *_dateFormatter;
  NSCalendar *_calendar;
}

/* instance methods */
- (id)init;
- (id)stringForObjectValue:(id)value;
- (id)stringForScheduleTime:(id)time;
@end

#endif /* SCLScheduleTimeFormatter_h */