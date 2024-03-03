//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBModelUnindexedQuery_h
#define HMBModelUnindexedQuery_h
@import Foundation;

#include "HMBModelQuery.h"

@interface HMBModelUnindexedQuery : HMBModelQuery
/* class methods */
+ (id)queryWithSQLPredicate:(id)sqlpredicate ascending:(BOOL)ascending arguments:(id)arguments;

/* instance methods */
- (id)performQueryOn:(id)on arguments:(id)arguments;
@end

#endif /* HMBModelUnindexedQuery_h */