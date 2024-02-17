//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOOriginalRouteLeg_h
#define GEOOriginalRouteLeg_h
@import Foundation;

#include "PBCodable.h"
#include "GEOEVStateInfo.h"
#include "GEOWaypointInfo.h"
#include "NSCopying-Protocol.h"

@class NSData, PBDataReader, PBUnknownFields;

@interface GEOOriginalRouteLeg : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_destinationWaypointInfo; unsigned int x :1 read_evStateInfo; unsigned int x :1 read_originWaypointInfo; unsigned int x :1 read_pathLeg; unsigned int x :1 read_zilchPoints; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasZilchPoints;
@property (retain, nonatomic) NSData *zilchPoints;
@property (readonly, nonatomic) BOOL hasPathLeg;
@property (retain, nonatomic) NSData *pathLeg;
@property (readonly, nonatomic) BOOL hasEvStateInfo;
@property (retain, nonatomic) GEOEVStateInfo *evStateInfo;
@property (readonly, nonatomic) BOOL hasOriginWaypointInfo;
@property (retain, nonatomic) GEOWaypointInfo *originWaypointInfo;
@property (readonly, nonatomic) BOOL hasDestinationWaypointInfo;
@property (retain, nonatomic) GEOWaypointInfo *destinationWaypointInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
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
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOOriginalRouteLeg_h */