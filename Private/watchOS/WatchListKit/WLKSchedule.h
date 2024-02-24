//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKSchedule_h
#define WLKSchedule_h
@import Foundation;

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString;

@interface WLKSchedule : NSObject {
  /* instance variables */
  NSMutableArray *_mutableEvents;
  NSDictionary *_dictionary;
}

@property (readonly, copy, nonatomic) NSString *serviceID;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSArray *events;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)eventForDate:(id)date;
- (id)eventForDate:(id)date fuzziness:(double)fuzziness;
- (id)adjacentEventsForDate:(id)date fuzziness:(double)fuzziness;
- (id)eventAfterDate:(id)date;
- (void)prune;
- (BOOL)_isDate:(id)date containedByDate:(id)date andDate:(id)date;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* WLKSchedule_h */