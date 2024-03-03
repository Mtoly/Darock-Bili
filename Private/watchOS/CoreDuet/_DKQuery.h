//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKQuery_h
#define _DKQuery_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface _DKQuery : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *clientName;
@property (copy) id /* block */ tracker;
@property (nonatomic) BOOL executeConcurrently;

/* class methods */
+ (id)predicateForObjectWithUUID:(id)uuid;
+ (id)predicateForObjectsWithUUIDs:(id)uuids;
+ (id)predicateForEventsBetweenStartDate:(id)date endDate:(id)date;
+ (id)predicateForEventsWithStartDateAfter:(id)after;
+ (id)predicateForEventsWithStartInDateRangeFrom:(id)from to:(id)to;
+ (id)predicateForEventsWithStartInDateRangeFromAfter:(id)after to:(id)to;
+ (id)predicateForEventsWithEndInDateRangeFrom:(id)from to:(id)to;
+ (id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)from to:(id)to;
+ (id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)from to:(id)to;
+ (id)predicateForEventsWithStartDateOrCreationDateBefore:(id)before;
+ (id)predicateForEventsContainingDateRangeFrom:(id)from to:(id)to;
+ (id)predicateForEventsIntersectingDateRangeFrom:(id)from to:(id)to;
+ (id)predicateForEventsWithDayOfWeek:(unsigned long long)week;
+ (id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)day endSecondOfDay:(unsigned long long)day;
+ (id)predicateForEventsWithMinimumDuration:(double)duration;
+ (id)predicateForEventsWithMinumumDuration:(double)duration;
+ (id)predicateForEventsWithLocalCreationInDateRangeFrom:(id)from toBefore:(id)before;
+ (id)predicateForEventsWithLocalCreationInDateRangeFromAfter:(id)after to:(id)to;
+ (id)localCreationDateSortDescriptorAscending:(BOOL)ascending;
+ (id)predicateForEventsWithCreationInDateRangeFrom:(id)from toBefore:(id)before;
+ (id)predicateForEventsWithCreationInDateRangeFromAfter:(id)after to:(id)to;
+ (id)predicateForEventsWithStreamName:(id)name;
+ (id)predicateForEventsWithStreamNames:(id)names;
+ (id)predicateForEventsWithCategoryValue:(id)value;
+ (id)predicateForEventsWithIdentifierValue:(id)value;
+ (id)predicateForEventsWithQuantityValue:(id)value;
+ (id)predicateForEventsWithIntegerValue:(long long)value;
+ (id)predicateForEventsExcludingIntegerValue:(long long)value;
+ (id)predicateForEventsWithDoubleValue:(double)value;
+ (id)predicateForEventsWithDoubleValueBetween:(double)between and:(double)and;
+ (id)predicateForEventsWithStringValue:(id)value;
+ (id)predicateForEventsWithStringValueInValues:(id)values;
+ (id)structuredMetadataKeyPathForMetadataKey:(id)key;
+ (id)predicateForObjectsWithMetadataKey:(id)key;
+ (id)predicateForObjectsWithMetadataKey:(id)key andValue:(id)value;
+ (id)predicateForObjectsWithMetadataKey:(id)key inValues:(id)values;
+ (id)predicateForObjectsWithMetadataKey:(id)key andStringValue:(id)value;
+ (id)predicateForObjectsWithMetadataKey:(id)key likeStringValue:(id)value;
+ (id)predicateForObjectsWithMetadataKey:(id)key andIntegerValue:(long long)value;
+ (id)predicateForObjectsWithMetadataKey:(id)key andDoubleValue:(double)value;
+ (id)predicateForObjectsWithMetadataKey:(id)key andDoubleValueBetween:(double)between andValue:(double)value;
+ (id)startDateSortDescriptorAscending:(BOOL)ascending;
+ (id)endDateSortDescriptorAscending:(BOOL)ascending;
+ (id)creationDateSortDescriptorAscending:(BOOL)ascending;
+ (id)predicateForEventsWithSourceID:(id)id;
+ (id)predicateForEventsWithBundleID:(id)id;
+ (id)predicateForEventsWithSourceID:(id)id bundleID:(id)id;
+ (id)predicateForEventsWithSourceID:(id)id bundleID:(id)id groupIDs:(id)ids;
+ (id)predicateForEventsWithSourceGroupIDs:(id)ids;
+ (id)predicateForEventsWithSourceID:(id)id bundleID:(id)id itemIDs:(id)ids;
+ (id)predicateForEventsWithSourceDeviceIDs:(id)ids;
+ (id)predicateForEventsWithNullSourceDeviceID;
+ (id)predicateForEventsWithNoSource;
+ (BOOL)supportsSecureCoding;
+ (id)executableQueryForQuery:(id)query;
+ (id)queryNotExecutableError;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* _DKQuery_h */