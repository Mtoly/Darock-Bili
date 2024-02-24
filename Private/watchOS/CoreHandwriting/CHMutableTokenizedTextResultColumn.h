//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 445.201.0.0.0
//
#ifndef CHMutableTokenizedTextResultColumn_h
#define CHMutableTokenizedTextResultColumn_h
@import Foundation;

#include "CHTokenizedTextResultColumn.h"

@class NSArray;

@interface CHMutableTokenizedTextResultColumn : CHTokenizedTextResultColumn

@property (copy, @dynamic, nonatomic) NSArray *tokenRows;

/* instance methods */
- (id)initWithTokenRows:(id)rows;
- (id)copyWithZone:(struct _NSZone *)zone;
- (long long)addTokenRowWithTokens:(id)tokens;
- (void)setTokenRowWithTokens:(id)tokens atIndex:(long long)index;
- (void)removeTokenRowAtIndex:(long long)index;
- (void)sortTokenRows;
@end

#endif /* CHMutableTokenizedTextResultColumn_h */