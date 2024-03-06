//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFMutableItemUpdateOutcome_h
#define HFMutableItemUpdateOutcome_h
@import Foundation;

#include "HFItemUpdateOutcome.h"

@class NSDictionary, NSMutableDictionary;

@interface HFMutableItemUpdateOutcome : HFItemUpdateOutcome

@property (retain, nonatomic) NSMutableDictionary *mutableResults;
@property (retain, nonatomic) NSDictionary *results;
@property (@dynamic, nonatomic) unsigned long long outcomeType;

/* instance methods */
- (id)initWithResults:(id)results type:(unsigned long long)type;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (void)safeSetObject:(id)object forKey:(id)key;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)allKeys;
- (void)addResultsFromOutcome:(id)outcome;
- (void)addResultsFromDictionary:(id)dictionary;
- (void)removeObjectsForKeys:(id)keys;
- (void)removeObjectForKey:(id)key;
@end

#endif /* HFMutableItemUpdateOutcome_h */