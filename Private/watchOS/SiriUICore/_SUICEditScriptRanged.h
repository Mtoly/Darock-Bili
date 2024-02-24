//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef _SUICEditScriptRanged_h
#define _SUICEditScriptRanged_h
@import Foundation;

#include "_SUICEditScript.h"
#include "_SUICAtomRanged.h"

@class NSString;

@interface _SUICEditScriptRanged : _SUICEditScript {
  /* instance variables */
  long long _options;
  _SUICAtomRanged *_currentScriptAtom;
}

@property (readonly, weak, nonatomic) NSString *stringA;
@property (readonly, weak, nonatomic) NSString *stringB;

/* class methods */
+ (id)editScriptFromString:(id)string toString:(id)string;
+ (id)editScriptFromString:(id)string toString:(id)string chunkSize:(long long)size orderAtomsAscending:(BOOL)ascending operationPrecedence:(long long)precedence options:(long long)options;
+ (id)editScriptForSmallestSingleEditFromString:(id)string toString:(id)string;
+ (id)editScriptForSmallestSingleEditFromString:(id)string toString:(id)string chunkSize:(long long)size;

/* instance methods */
- (id)initWithOperationPrecedence:(long long)precedence dataClass:(Class)class chunkSize:(long long)size stringA:(id)a stringB:(id)b orderAtomsAscending:(BOOL)ascending options:(long long)options;
- (id)applyToString:(id)string;
- (void)initializeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)operation editIndex:(unsigned long long)index newText:(id)text indexInArrayB:(unsigned long long)b;
- (void)finalizeCurrentScriptAtom;
- (void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long *)difference andReverseIndexOfLastDifference:(long long *)difference shouldShortenFirstDifference:(BOOL)difference;
- (void)computeSmallestSingleEdit;
@end

#endif /* _SUICEditScriptRanged_h */