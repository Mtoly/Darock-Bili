//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef VCSRecurrenceRule_h
#define VCSRecurrenceRule_h
@import Foundation;

#include "VCSDate.h"
#include "VCSDictifiable-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface VCSRecurrenceRule : NSObject<VCSDictifiable>

@property (readonly, nonatomic) unsigned long long recurrenceType;
@property (nonatomic) long long interval;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSArray *dayNumberList;
@property (retain, nonatomic) NSArray *monthList;
@property (retain, nonatomic) NSArray *dayList;
@property (retain, nonatomic) NSMutableArray *occurrenceList;
@property (retain, nonatomic) NSMutableArray *weekdayList;
@property (retain, nonatomic) VCSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithString:(const char *)string;
- (id)dictify;
- (BOOL)decodeDaily:(const char * *)daily;
- (BOOL)decodeWeekly:(const char * *)weekly;
- (BOOL)decodeMonthlyByPos:(const char * *)pos;
- (BOOL)decodeMonthlyByDay:(const char * *)day;
- (BOOL)decodeYearlyByMonth:(const char * *)month;
- (BOOL)decodeYearlyByDay:(const char * *)day;
- (BOOL)decodeInterval:(const char * *)interval;
- (BOOL)decodeWeekdayList:(const char * *)list;
- (BOOL)decodeOccurrenceList:(const char * *)list;
- (id)_decodeNumberList:(const char * *)list min:(long long)min max:(long long)max;
- (BOOL)decodeDuration:(const char * *)duration;
- (BOOL)decodeDigits:(const char * *)digits withResult:(long long *)result;
@end

#endif /* VCSRecurrenceRule_h */