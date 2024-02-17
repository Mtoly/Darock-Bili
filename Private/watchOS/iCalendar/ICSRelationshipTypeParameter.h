//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef ICSRelationshipTypeParameter_h
#define ICSRelationshipTypeParameter_h
@import Foundation;

#include "ICSPredefinedValue.h"

@interface ICSRelationshipTypeParameter : ICSPredefinedValue
/* class methods */
+ (id)relationshipTypeParameterFromICSString:(id)icsstring;
+ (id)relationshipParameterFromCode:(unsigned long long)code;

/* instance methods */
- (void)_ICSStringWithOptions:(unsigned long long)options appendingToString:(id)string;
- (Class)classForCoder;
@end

#endif /* ICSRelationshipTypeParameter_h */