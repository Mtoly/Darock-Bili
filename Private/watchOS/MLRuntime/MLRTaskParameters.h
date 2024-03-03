//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef MLRTaskParameters_h
#define MLRTaskParameters_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface MLRTaskParameters : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSDictionary *recipeUserInfo;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithParametersDict:(id)dict;
- (id)initWithDESRecipe:(id)desrecipe;
- (id)initWithURL:(id)url error:(id *)error;
- (id)description;
- (float)floatValueForKey:(id)key defaultValue:(float)value;
- (double)doubleValueForKey:(id)key defaultValue:(double)value;
- (BOOL)boolValueForKey:(id)key defaultValue:(BOOL)value;
- (long long)integerValueForKey:(id)key defaultValue:(long long)value;
- (unsigned long long)unsignedIntegerValueForKey:(id)key defaultValue:(unsigned long long)value;
- (id)stringValueForKey:(id)key defaultValue:(id)value;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MLRTaskParameters_h */