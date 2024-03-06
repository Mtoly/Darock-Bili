//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDDepartureFrequency_h
#define GEOPDDepartureFrequency_h
@import Foundation;

#include "PBCodable.h"
#include "GEOTransitDepartureFrequency-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSString, PBUnknownFields;

@interface GEOPDDepartureFrequency : PBCodable<GEOTransitDepartureFrequency, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_displayDepartureFrequency; unsigned int x :1 has_earliestDepartureTime; unsigned int x :1 has_latestDepartureTime; unsigned int x :1 has_maxDepartureFrequency; unsigned int x :1 has_minDepartureFrequency; unsigned int x :1 has_isEstimated; } _flags;
}

@property (readonly, nonatomic) NSDate *firstTimeInFrequency;
@property (readonly, nonatomic) NSDate *lastTimeInFrequency;
@property (readonly, nonatomic) double frequencyForSorting;
@property (readonly, nonatomic) long long frequencyType;
@property (readonly, nonatomic) BOOL isEstimate;
@property (readonly, nonatomic) long long displayFrequency;
@property (readonly, nonatomic) long long minFrequency;
@property (readonly, nonatomic) long long maxFrequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasMinDepartureFrequency;
@property (nonatomic) unsigned int minDepartureFrequency;
@property (nonatomic) BOOL hasMaxDepartureFrequency;
@property (nonatomic) unsigned int maxDepartureFrequency;
@property (nonatomic) BOOL hasEarliestDepartureTime;
@property (nonatomic) unsigned int earliestDepartureTime;
@property (nonatomic) BOOL hasLatestDepartureTime;
@property (nonatomic) unsigned int latestDepartureTime;
@property (nonatomic) BOOL hasIsEstimated;
@property (nonatomic) BOOL isEstimated;
@property (nonatomic) BOOL hasDisplayDepartureFrequency;
@property (nonatomic) unsigned int displayDepartureFrequency;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (BOOL)isValidAtDate:(id)date;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOPDDepartureFrequency_h */