//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef _REPeriodOfDay_h
#define _REPeriodOfDay_h
@import Foundation;

#include "_REPeriodOfDayProperties-Protocol.h"

@class NSDate, NSDateInterval;

@interface _REPeriodOfDay : NSObject<_REPeriodOfDayProperties>

@property (readonly, nonatomic) NSDateInterval *interval;
@property (readonly, nonatomic) unsigned long long periodOfDay;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

/* instance methods */
- (id)initWithInterval:(id)interval periodOfDay:(unsigned long long)day;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* _REPeriodOfDay_h */