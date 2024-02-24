//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDSQLiteTwoPropertyComparisonPredicate_h
#define _HDSQLiteTwoPropertyComparisonPredicate_h
@import Foundation;

#include "HDSQLiteComparisonPredicate.h"

@class NSString;

@interface _HDSQLiteTwoPropertyComparisonPredicate : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSString *otherProperty;

/* instance methods */
- (id)initWithProperty:(id)property comparisonType:(long long)type otherProperty:(id)property;
- (id)description;
- (void)bindToStatement:(struct sqlite3_stmt *)statement bindingIndex:(int *)index;
- (id)SQLForEntityClass:(Class)class;
@end

#endif /* _HDSQLiteTwoPropertyComparisonPredicate_h */