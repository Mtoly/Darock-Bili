//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMDisplayDate_h
#define REMDisplayDate_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSTimeZone;

@interface REMDisplayDate : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL allDay;
@property (readonly, nonatomic) NSTimeZone *timeZone;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDate:(id)date allDay:(BOOL)day timeZone:(id)zone;
- (id)initWithFloatingDateComponents:(id)components nonFloatingDateComponents:(id)components;
- (id)initWithDueDateComponents:(id)components alarms:(id)alarms;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isAllDay;
@end

#endif /* REMDisplayDate_h */