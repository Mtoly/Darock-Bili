//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedStringArgument_h
#define GEOComposedStringArgument_h
@import Foundation;

#include "GEOComposedStringArgument_Artwork.h"
#include "GEOComposedStringArgument_Countdown.h"
#include "GEOComposedStringArgument_Distance.h"
#include "GEOComposedStringArgument_Duration.h"
#include "GEOComposedStringArgument_Frequency.h"
#include "GEOComposedStringArgument_Maneuver.h"
#include "GEOComposedStringArgument_Percentage.h"
#include "GEOComposedStringArgument_Power.h"
#include "GEOComposedStringArgument_Price.h"
#include "GEOComposedStringArgument_String.h"
#include "GEOComposedStringArgument_Substitution.h"
#include "GEOComposedStringArgument_Timestamp.h"
#include "GEOComposedStringArgument_TimestampList.h"
#include "GEOComposedStringArgument_URL.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface GEOComposedStringArgument : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL hasDefaultValue;
@property (nonatomic) BOOL hasOverrideValue;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) GEOComposedStringArgument_Artwork *artworkFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Countdown *countdownFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Distance *distanceFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Duration *durationFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Frequency *frequencyFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Maneuver *maneuverFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Percentage *percentageFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Power *powerFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Price *priceFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_String *stringFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Substitution *substitutionFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_Timestamp *timestampFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_TimestampList *timestampListFormat;
@property (readonly, nonatomic) GEOComposedStringArgument_URL *urlFormat;
@property (copy, nonatomic) NSDictionary *stringAttributes;

/* class methods */
+ (id)argumentForGeoFormatArgument:(id)argument;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_init;
- (id)_initWithGeoFormatArgument:(id)argument;
- (id)_stringReplacementWithOptions:(id)options;
- (id)_attributedStringReplacementWithOptions:(id)options;
- (id)replaceTokenWithOptions:(id)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* GEOComposedStringArgument_h */