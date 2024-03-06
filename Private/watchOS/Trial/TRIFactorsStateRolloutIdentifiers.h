//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFactorsStateRolloutIdentifiers_h
#define TRIFactorsStateRolloutIdentifiers_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface TRIFactorsStateRolloutIdentifiers : NSObject<NSCopying>

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;

/* instance methods */
- (id)initWithRolloutId:(id)id deploymentId:(int)id;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToIdentifiers:(id)identifiers;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)init;
@end

#endif /* TRIFactorsStateRolloutIdentifiers_h */