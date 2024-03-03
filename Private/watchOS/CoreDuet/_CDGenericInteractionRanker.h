//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDGenericInteractionRanker_h
#define _CDGenericInteractionRanker_h
@import Foundation;

#include "_CDInteractionRanking-Protocol.h"

@class NSArray, NSDate, NSSet, NSString;

@interface _CDGenericInteractionRanker : NSObject<_CDInteractionRanking>

@property (retain) NSDate *referenceDate;
@property (retain) NSArray *seedContacts;
@property (retain) NSString *referenceLocationUUID;
@property (retain) NSSet *referenceKeywords;
@property (retain) NSSet *allowedIdentifiers;
@property (retain) NSSet *allowedPersonIds;
@property (retain) NSSet *allowedPersonIdType;
@property (retain) NSString *contactPrefix;
@property double timeHalfLife;
@property double timeOfDayHalfLife;
@property double timeOfWeekHalfLife;
@property double timeWeight;
@property double timeOfDayWeight;
@property double timeOfWeekWeight;
@property double c;
@property double sameWeekPeriodWeight;
@property double diffWeekPeriodWeight;
@property double outgoingWeight;
@property double socialWeight;
@property BOOL requireAllSeedContacts;
@property double locationWeight;
@property double keywordWeight;
@property double contactNameKeywordMatchWeight;
@property (nonatomic) unsigned long long rankAggregationMethod;

/* class methods */
+ (BOOL)isDateInWeekend:(id)weekend;

/* instance methods */
- (id)init;
- (id)rankInteraction:(id)interaction;
- (BOOL)canRankContacts;
- (double)rankContact:(id)contact;
- (BOOL)contactIsAllowed:(id)allowed;
@end

#endif /* _CDGenericInteractionRanker_h */