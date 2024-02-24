//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef TPCategoryRule_h
#define TPCategoryRule_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface TPCategoryRule : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *category;

/* class methods */
+ (id)ruleWithPrefix:(id)prefix category:(id)category;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)isEqualToCategoryRule:(id)rule;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* TPCategoryRule_h */