//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCMathSpaceExpression_h
#define SCRCMathSpaceExpression_h
@import Foundation;

#include "SCRCMathExpression.h"

@interface SCRCMathSpaceExpression : SCRCMathExpression
/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)radicals treePosition:(id)position;
- (id)mathMLString;
- (BOOL)beginsWithSpace;
- (BOOL)endsWithSpace;
@end

#endif /* SCRCMathSpaceExpression_h */