//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFContentCompoundPredicate_h
#define WFContentCompoundPredicate_h
@import Foundation;

#include "WFContentPredicate.h"
#include "WFContentPropertyContainer-Protocol.h"

@class NSArray, NSSet;

@interface WFContentCompoundPredicate : WFContentPredicate<WFContentPropertyContainer>

@property (readonly) unsigned long long compoundPredicateType;
@property (readonly, copy) NSArray *subpredicates;
@property (readonly, nonatomic) NSSet *containedProperties;

/* class methods */
+ (id)andPredicateWithSubpredicates:(id)subpredicates;
+ (id)orPredicateWithSubpredicates:(id)subpredicates;
+ (id)notPredicateWithSubpredicate:(id)subpredicate;

/* instance methods */
- (id)initWithType:(unsigned long long)type subpredicates:(id)subpredicates;
- (id)description;
- (void)evaluateWithObject:(id)object propertySubstitutor:(id /* block */)substitutor completionHandler:(id /* block */)handler;
@end

#endif /* WFContentCompoundPredicate_h */