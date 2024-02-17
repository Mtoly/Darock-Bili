//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetVariantRenditionSpecificAttributePredicate_h
#define AVAssetVariantRenditionSpecificAttributePredicate_h
@import Foundation;

#include "NSPredicate.h"

@class NSDictionary, NSNumber, NSPredicateOperator;

@interface AVAssetVariantRenditionSpecificAttributePredicate : NSPredicate {
  /* instance variables */
  NSNumber *_value;
  NSPredicateOperator *_operator;
}

@property (readonly, nonatomic) NSDictionary *mediaSelectionOptionPlist;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithValue:(id)value mediaSelectionOption:(id)option operatorType:(unsigned long long)type;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)valueForAlternate:(id)alternate;
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)acceptVisitor:(id)visitor flags:(unsigned long long)flags;
- (id)predicateFormat;
- (id)description;
- (void)dealloc;
@end

#endif /* AVAssetVariantRenditionSpecificAttributePredicate_h */