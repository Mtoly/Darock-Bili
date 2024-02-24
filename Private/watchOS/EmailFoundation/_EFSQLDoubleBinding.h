//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EFSQLDoubleBinding_h
#define _EFSQLDoubleBinding_h
@import Foundation;

#include "EFSQLBinding.h"

@interface _EFSQLDoubleBinding : EFSQLBinding

@property (readonly, nonatomic) double doubleValue;

/* instance methods */
- (id)initWithDouble:(double)double;
- (void)bindTo:(struct sqlite3_stmt *)to withSQLIndex:(int)sqlindex;
@end

#endif /* _EFSQLDoubleBinding_h */