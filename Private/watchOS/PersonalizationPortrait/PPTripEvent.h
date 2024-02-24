//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPTripEvent_h
#define PPTripEvent_h
@import Foundation;

#include "PPScoredEvent.h"

@class NSArray;

@interface PPTripEvent : PPScoredEvent

@property (readonly, nonatomic) NSArray *tripParts;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStartDate:(id)date endDate:(id)date tripParts:(id)parts;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)destinations;
- (id)destinationsBasedTitle;
- (id)description;
@end

#endif /* PPTripEvent_h */