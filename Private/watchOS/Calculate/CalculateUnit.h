//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 92.0.0.0.0
//
#ifndef CalculateUnit_h
#define CalculateUnit_h
@import Foundation;

#include "CalculateUnit.h"
#include "UnitInfo.h"

@class NSString;

@interface CalculateUnit : NSObject

@property (retain, nonatomic) UnitInfo *unitInfo;
@property (retain, nonatomic) CalculateUnit *nextSmallest;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int exponent;
@property (readonly, nonatomic) unsigned long long unitType;
@property (readonly, nonatomic) BOOL formatNextSmallest;

/* class methods */
+ (id)unitWithID:(int)id unitsInfo:(id)info exponent:(int)exponent;

/* instance methods */
- (BOOL)isNumerator;
- (BOOL)isDenominator;
- (id)compactNameForLocalization:(id)localization;
- (id)localizedNameForValue:(double)value localization:(id)localization retainingFormat:(BOOL)format;
- (long long)compare:(id)compare;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* CalculateUnit_h */