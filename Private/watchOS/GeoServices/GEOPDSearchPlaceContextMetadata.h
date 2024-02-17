//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDSearchPlaceContextMetadata_h
#define GEOPDSearchPlaceContextMetadata_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDContextualPhotoMetadata.h"
#include "GEOPDNearbyPlacesMetadata.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDSearchPlaceContextMetadata : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSMutableArray *_alternateSearchableNames;
  GEOPDContextualPhotoMetadata *_contextualPhotoMetadata;
  NSString *_interpretedCategory;
  NSString *_matchedDisplayNameLanguageCode;
  NSString *_matchedDisplayName;
  GEOPDNearbyPlacesMetadata *_nearbyPlacesMetadata;
  NSString *_normalizedQuery;
  NSString *_secondaryNameOverrideLanguage;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _taxonomyTypeForClientization;
  BOOL _isDefaultName;
  BOOL _shouldPartiallyClientizeResult;
  struct { unsigned int x :1 has_taxonomyTypeForClientization; unsigned int x :1 has_isDefaultName; unsigned int x :1 has_shouldPartiallyClientizeResult; unsigned int x :1 read_unknownFields; unsigned int x :1 read_alternateSearchableNames; unsigned int x :1 read_contextualPhotoMetadata; unsigned int x :1 read_interpretedCategory; unsigned int x :1 read_matchedDisplayNameLanguageCode; unsigned int x :1 read_matchedDisplayName; unsigned int x :1 read_nearbyPlacesMetadata; unsigned int x :1 read_normalizedQuery; unsigned int x :1 read_secondaryNameOverrideLanguage; unsigned int x :1 wrote_anyField; } _flags;
}

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

#endif /* GEOPDSearchPlaceContextMetadata_h */