//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDTransitInfoSnippet_h
#define GEOPDTransitInfoSnippet_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "GEOStyleAttributes.h"
#include "GEOTimezone.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDTransitInfoSnippet : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSMutableArray *_artworks;
  NSMutableArray *_labels;
  NSString *_searchDisplayName;
  GEOLatLng *_stopLocationForTrip;
  GEOStyleAttributes *_styleAttributesForTrip;
  NSMutableArray *_systemNames;
  GEOTimezone *_timezone;
  unsigned long long _transitId;
  NSString *_transitName;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  BOOL _isHidden;
  struct { unsigned int x :1 has_transitId; unsigned int x :1 has_isHidden; unsigned int x :1 read_unknownFields; unsigned int x :1 read_artworks; unsigned int x :1 read_labels; unsigned int x :1 read_searchDisplayName; unsigned int x :1 read_stopLocationForTrip; unsigned int x :1 read_styleAttributesForTrip; unsigned int x :1 read_systemNames; unsigned int x :1 read_timezone; unsigned int x :1 read_transitName; unsigned int x :1 wrote_anyField; } _flags;
}

/* class methods */
+ (id)transitInfoSnippetForPlaceData:(id)data;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDTransitInfoSnippet_h */