//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgEventCuratedCollectionUsage_h
#define GEOLogMsgEventCuratedCollectionUsage_h
@import Foundation;

#include "PBCodable.h"
#include "GEOTouristInfo.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOLogMsgEventCuratedCollectionUsage : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_collectionFirstViewedDate; unsigned int x :1 has_collectionLastViewedDate; unsigned int x :1 has_collectionMuid; unsigned int x :1 has_viewsToday; unsigned int x :1 read_homeCountryCode; unsigned int x :1 read_homeMetroRegion; unsigned int x :1 read_touristInfo; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasCollectionMuid;
@property (nonatomic) unsigned long long collectionMuid;
@property (nonatomic) BOOL hasViewsToday;
@property (nonatomic) unsigned int viewsToday;
@property (nonatomic) BOOL hasCollectionFirstViewedDate;
@property (nonatomic) double collectionFirstViewedDate;
@property (nonatomic) BOOL hasCollectionLastViewedDate;
@property (nonatomic) double collectionLastViewedDate;
@property (readonly, nonatomic) BOOL hasTouristInfo;
@property (retain, nonatomic) GEOTouristInfo *touristInfo;
@property (readonly, nonatomic) BOOL hasHomeCountryCode;
@property (retain, nonatomic) NSString *homeCountryCode;
@property (readonly, nonatomic) BOOL hasHomeMetroRegion;
@property (retain, nonatomic) NSString *homeMetroRegion;

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
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOLogMsgEventCuratedCollectionUsage_h */