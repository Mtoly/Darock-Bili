//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1211.0.0.0.0
//
#ifndef CRSearchQuery_h
#define CRSearchQuery_h
@import Foundation;

#include "CRSearchPredicate.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSPredicate, NSString;

@interface CRSearchQuery : NSObject<NSSecureCoding> {
  /* instance variables */
  BOOL _searchPredicateExpansionAttempted;
}

@property (readonly, copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) CRSearchPredicate *searchPredicate;
@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *domains;
@property (nonatomic) unsigned long long implicitGroupThreshold;
@property (nonatomic) unsigned long long options;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } pageRange;
@property (copy, nonatomic) id /* block */ weightDecayer;
@property (copy, nonatomic) id /* block */ comparator;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)searchQueryForSearchTerm:(id)term preferredKinds:(id)kinds sendingAddress:(id)address recentsDomain:(id)domain;
+ (id /* block */)frecencyComparator;
+ (id /* block */)frecencyComparatorForSearch:(id)search preferredKinds:(id)kinds sendingAddress:(id)address queryOptions:(unsigned long long)options;
+ (id /* block */)rankedFrecencyComparatorWithPreferredSources:(id)sources;

/* instance methods */
- (id)init;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CRSearchQuery_h */