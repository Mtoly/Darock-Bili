//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSConditionAttribute_h
#define RBSConditionAttribute_h
@import Foundation;

#include "RBSAttribute.h"

@class NSString;

@interface RBSConditionAttribute : RBSAttribute

@property (readonly, copy, nonatomic) NSString *condition;
@property (readonly, nonatomic) long long value;

/* class methods */
+ (id)attributeWithCondition:(id)condition value:(long long)value;

/* instance methods */
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* RBSConditionAttribute_h */