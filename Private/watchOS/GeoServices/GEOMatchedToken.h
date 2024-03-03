//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMatchedToken_h
#define GEOMatchedToken_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOMatchedToken : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_geoType; unsigned int x :1 read_unknownFields; unsigned int x :1 read_geoIds; unsigned int x :1 read_matchedToken; unsigned int x :1 wrote_anyField; } _flags;
}

@property (retain, nonatomic) NSString *matchedToken;
@property (nonatomic) BOOL hasGeoType;
@property (nonatomic) int geoType;
@property (readonly, nonatomic) unsigned long long geoIdsCount;
@property (readonly, nonatomic) unsigned long long * geoIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearGeoIds;
- (void)addGeoId:(unsigned long long)id;
- (unsigned long long)geoIdAtIndex:(unsigned long long)index;
- (void)setGeoIds:(unsigned long long *)ids count:(unsigned long long)count;
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
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOMatchedToken_h */