//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBLocationRecommendationMapping_h
#define NTPBLocationRecommendationMapping_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NTPBLocationRecommendationMapping : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 latitude; unsigned int x :1 longitude; } _has;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) NSMutableArray *recommendationProviders;

/* class methods */
+ (Class)recommendationProvidersType;

/* instance methods */
- (void)clearRecommendationProviders;
- (void)addRecommendationProviders:(id)providers;
- (unsigned long long)recommendationProvidersCount;
- (id)recommendationProvidersAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBLocationRecommendationMapping_h */