//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNDailyRoutineRelevantContext_h
#define LNDailyRoutineRelevantContext_h
@import Foundation;

#include "LNRelevantContext.h"

@interface LNDailyRoutineRelevantContext : LNRelevantContext

@property (readonly, nonatomic) long long situation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSituation:(long long)situation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)analyticsDescription;
- (id)asCondition;
@end

#endif /* LNDailyRoutineRelevantContext_h */