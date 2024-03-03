//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REActivityRelevanceProvider_h
#define REActivityRelevanceProvider_h
@import Foundation;

#include "RERelevanceProvider.h"

@interface REActivityRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) BOOL closedActiveEngergy;
@property (readonly, nonatomic) BOOL closedExerciseTime;
@property (readonly, nonatomic) BOOL closedStandHour;

/* class methods */
+ (id)relevanceSimulatorID;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)dictionaryEncoding;
- (id)initWithActiveEnergyState:(BOOL)state exerciseTimeState:(BOOL)state standHourState:(BOOL)state;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)_hash;
- (id)description;
@end

#endif /* REActivityRelevanceProvider_h */