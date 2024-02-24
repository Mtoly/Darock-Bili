//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDSQLiteComparisonPredicateCoalesce_h
#define _HDSQLiteComparisonPredicateCoalesce_h
@import Foundation;

#include "HDSQLiteComparisonPredicate.h"

@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSArray *properties;

/* instance methods */
- (id)initWithProperties:(id)properties value:(id)value comparisonType:(long long)type;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)SQLForEntityClass:(Class)class;
- (id)SQLJoinClausesForEntityClass:(Class)class;
- (BOOL)isCompatibleWithPredicate:(id)predicate;
- (id)description;
@end

#endif /* _HDSQLiteComparisonPredicateCoalesce_h */