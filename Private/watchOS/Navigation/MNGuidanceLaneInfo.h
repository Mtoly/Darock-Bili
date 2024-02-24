//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNGuidanceLaneInfo_h
#define MNGuidanceLaneInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSUUID;

@interface MNGuidanceLaneInfo : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) BOOL isForManeuver;
@property (readonly, nonatomic) NSArray *lanes;
@property (readonly, nonatomic) NSArray *titles;
@property (readonly, nonatomic) NSArray *instructions;
@property (retain, nonatomic) NSArray *primaryStrings;
@property (retain, nonatomic) NSArray *secondaryStrings;
@property (readonly, nonatomic) NSDictionary *variableOverrides;
@property (readonly, nonatomic) long long distanceDetailLevel;
@property (readonly, nonatomic) int composedGuidanceEventIndex;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithID:(id)id isForManeuver:(BOOL)maneuver lanes:(id)lanes titles:(id)titles instructions:(id)instructions variableOverrides:(id)overrides distanceDetailLevel:(long long)level composedGuidanceEventIndex:(int)index;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* MNGuidanceLaneInfo_h */