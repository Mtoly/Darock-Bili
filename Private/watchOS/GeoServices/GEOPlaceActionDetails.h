//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPlaceActionDetails_h
#define GEOPlaceActionDetails_h
@import Foundation;

#include "PBCodable.h"
#include "GEOTransitPlaceCard.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOPlaceActionDetails : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_animationID; unsigned int x :1 has_businessID; unsigned int x :1 has_placeID; unsigned int x :1 has_searchResponseRelativeTimestamp; unsigned int x :1 has_targetID; unsigned int x :1 has_localSearchProviderID; unsigned int x :1 has_resultIndex; unsigned int x :1 read_actionUrl; unsigned int x :1 read_destinationApp; unsigned int x :1 read_photoId; unsigned int x :1 read_richProviderId; unsigned int x :1 read_showcaseId; unsigned int x :1 read_transitPlaceCard; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasBusinessID;
@property (nonatomic) unsigned long long businessID;
@property (nonatomic) BOOL hasPlaceID;
@property (nonatomic) long long placeID;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) BOOL hasSearchResponseRelativeTimestamp;
@property (nonatomic) double searchResponseRelativeTimestamp;
@property (nonatomic) BOOL hasResultIndex;
@property (nonatomic) int resultIndex;
@property (nonatomic) BOOL hasAnimationID;
@property (nonatomic) unsigned long long animationID;
@property (nonatomic) BOOL hasTargetID;
@property (nonatomic) unsigned long long targetID;
@property (readonly, nonatomic) BOOL hasPhotoId;
@property (retain, nonatomic) NSString *photoId;
@property (readonly, nonatomic) BOOL hasActionUrl;
@property (retain, nonatomic) NSString *actionUrl;
@property (readonly, nonatomic) BOOL hasTransitPlaceCard;
@property (retain, nonatomic) GEOTransitPlaceCard *transitPlaceCard;
@property (readonly, nonatomic) BOOL hasRichProviderId;
@property (retain, nonatomic) NSString *richProviderId;
@property (readonly, nonatomic) BOOL hasDestinationApp;
@property (retain, nonatomic) NSString *destinationApp;
@property (readonly, nonatomic) BOOL hasShowcaseId;
@property (retain, nonatomic) NSString *showcaseId;

/* class methods */
+ (id)actionDetailsWithTargetID:(unsigned long long)id;
+ (id)actionDetailsWithMapItem:(id)item timestamp:(double)timestamp resultIndex:(int)index;
+ (id)actionDetailsWithChildPlace:(id)place timestamp:(double)timestamp resultIndex:(int)index;
+ (id)actionDetailsWithMapItem:(id)item timestamp:(double)timestamp resultIndex:(int)index targetID:(unsigned long long)id;
+ (id)actionDetailsWithMapItem:(id)item timestamp:(double)timestamp resultIndex:(int)index targetID:(unsigned long long)id transitCardCategory:(int)category transitSystem:(id)system transitDepartureSequence:(id)sequence transitIncident:(id)incident;
+ (id)actionDetailsWithMapItem:(id)item childPlace:(id)place timestamp:(double)timestamp resultIndex:(int)index targetID:(unsigned long long)id transitCardCategory:(int)category transitSystem:(id)system transitDepartureSequence:(id)sequence transitIncident:(id)incident;
+ (id)actionDetailsWithDetails:(id)details timestamp:(double)timestamp;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)initWithMapItem:(id)item relativeTimestamp:(double)timestamp resultIndex:(int)index;
- (id)initWithMapItem:(id)item relativeTimestamp:(double)timestamp resultIndex:(int)index targetID:(unsigned long long)id;
- (id)initWithMapItem:(id)item childPlace:(id)place relativeTimestamp:(double)timestamp resultIndex:(int)index targetID:(unsigned long long)id transitCardCategory:(int)category transitSystem:(id)system transitDepartureSequence:(id)sequence transitIncident:(id)incident;
- (id)init;
- (id)initWithData:(id)data;
- (id)description;
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
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOPlaceActionDetails_h */