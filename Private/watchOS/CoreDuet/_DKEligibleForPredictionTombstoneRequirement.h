//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKEligibleForPredictionTombstoneRequirement_h
#define _DKEligibleForPredictionTombstoneRequirement_h
@import Foundation;

#include "_DKTombstoneRequirement.h"

@interface _DKEligibleForPredictionTombstoneRequirement : _DKTombstoneRequirement
/* instance methods */
- (id)eligibleForPredictionKey;
- (id)predicate;
- (id)eventPredicate;
- (id)propertiesToFetch;
- (void)assignPropertiesToTombstone:(id)tombstone extractedFromEvent:(id)event;
- (void)assignPropertiesToTombstone:(id)tombstone extractedFromPartialEvent:(id)event;
- (id)identifier;
@end

#endif /* _DKEligibleForPredictionTombstoneRequirement_h */