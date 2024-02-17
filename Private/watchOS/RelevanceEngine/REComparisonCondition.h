//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REComparisonCondition_h
#define REComparisonCondition_h
@import Foundation;

#include "RECondition.h"

@interface REComparisonCondition : RECondition
/* class methods */
+ (id)trueCondition;
+ (id)falseCondition;
+ (id)conditionForLeftFeature:(id)feature relation:(long long)relation rightFeature:(id)feature;

/* instance methods */
- (BOOL)_validForRanking;
- (id)_inflectionFeatureValuePairs;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* REComparisonCondition_h */