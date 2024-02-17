//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIIntervalDefinition_h
#define FIIntervalDefinition_h
@import Foundation;

#include "FIDictionaryRepresentable-Protocol.h"

@class HKQuantity;

@interface FIIntervalDefinition : NSObject<FIDictionaryRepresentable>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) HKQuantity *quantity;

/* class methods */
+ (id)intervalDefinitionWithTypeIdentifier:(long long)identifier quantity:(id)quantity;
+ (id)definitionFromDictionary:(id)dictionary error:(id *)error;

/* instance methods */
- (id)initWithTypeIdentifier:(long long)identifier quantity:(id)quantity;
- (id)dictionaryRepresentation;
- (id)byChangingType:(long long)type quantity:(id)quantity;
@end

#endif /* FIIntervalDefinition_h */