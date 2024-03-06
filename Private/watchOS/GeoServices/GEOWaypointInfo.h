//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOWaypointInfo_h
#define GEOWaypointInfo_h
@import Foundation;

#include "PBCodable.h"
#include "GEOARInfo.h"
#include "GEOAddress.h"
#include "GEOEVChargingInfo.h"
#include "GEOFormattedString.h"
#include "GEOLatLng.h"
#include "GEOPBTransitArtwork.h"
#include "GEOStyleAttributes.h"
#include "GEOWaypointUUID.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOWaypointInfo : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_muid; unsigned int x :1 has_source; unsigned int x :1 read_unknownFields; unsigned int x :1 read_arInfo; unsigned int x :1 read_artwork; unsigned int x :1 read_evChargingInfo; unsigned int x :1 read_localizedAddress; unsigned int x :1 read_name; unsigned int x :1 read_position; unsigned int x :1 read_styleAttributes; unsigned int x :1 read_uniqueWaypointId; unsigned int x :1 read_waypointCaption; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) GEOLatLng *position;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) BOOL hasEvChargingInfo;
@property (retain, nonatomic) GEOEVChargingInfo *evChargingInfo;
@property (readonly, nonatomic) BOOL hasArInfo;
@property (retain, nonatomic) GEOARInfo *arInfo;
@property (readonly, nonatomic) BOOL hasLocalizedAddress;
@property (retain, nonatomic) GEOAddress *localizedAddress;
@property (readonly, nonatomic) BOOL hasUniqueWaypointId;
@property (retain, nonatomic) GEOWaypointUUID *uniqueWaypointId;
@property (readonly, nonatomic) BOOL hasWaypointCaption;
@property (retain, nonatomic) GEOFormattedString *waypointCaption;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)sourceAsString:(int)string;
- (int)StringAsSource:(id)source;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOWaypointInfo_h */