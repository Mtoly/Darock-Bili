//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFNextHourPrecipitation_h
#define WFNextHourPrecipitation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WFNextHourPrecipitationDescription.h"

@class NSArray, NSDate;

@interface WFNextHourPrecipitation : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSDate *readDate;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSArray *minutes;
@property (readonly, copy, nonatomic) NSArray *precipitationDescriptions;
@property (readonly, copy, nonatomic) NSArray *conditions;
@property (readonly, nonatomic) BOOL isRelevant;
@property (readonly, nonatomic) WFNextHourPrecipitationDescription *currentDescription;
@property (readonly, nonatomic) NSArray *activeMinutes;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithReadDate:(id)date startDate:(id)date expirationDate:(id)date minutes:(id)minutes conditions:(id)conditions descriptions:(id)descriptions;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* WFNextHourPrecipitation_h */