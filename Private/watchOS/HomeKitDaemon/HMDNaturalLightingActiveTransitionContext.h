//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNaturalLightingActiveTransitionContext_h
#define HMDNaturalLightingActiveTransitionContext_h
@import Foundation;

#include "HMFObject.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSNumber;

@interface HMDNaturalLightingActiveTransitionContext : HMFObject<NSCopying>

@property (readonly, copy) NSDate *startDate;
@property (readonly) unsigned long long millisecondsElapsedSinceStartDate;
@property (readonly, copy) NSNumber *transitionChecksum;

/* instance methods */
- (id)initWithStartDate:(id)date millisecondsElapsedSinceStartDate:(unsigned long long)date transitionChecksum:(id)checksum;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)attributeDescriptions;
@end

#endif /* HMDNaturalLightingActiveTransitionContext_h */