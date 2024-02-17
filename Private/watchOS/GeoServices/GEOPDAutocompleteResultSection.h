//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDAutocompleteResultSection_h
#define GEOPDAutocompleteResultSection_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteResultSection : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  struct { int *list; unsigned long long count; unsigned long long size; } _allowedTypeClientOnlySections;
  struct { int *list; unsigned long long count; unsigned long long size; } _excludedClientResultTypes;
  struct { int *list; unsigned long long count; unsigned long long size; } _includedClientResultTypes;
  NSMutableArray *_entries;
  NSString *_name;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _contentType;
  int _numVisibleResults;
  int _suggestionType;
  int _type;
  BOOL _enableMapsSuggestServerReranking;
  BOOL _enforceServerResultsOrder;
  BOOL _isSectionForClientOnlyResults;
  BOOL _shouldInterleaveClientResults;
  struct { unsigned int x :1 has_contentType; unsigned int x :1 has_numVisibleResults; unsigned int x :1 has_suggestionType; unsigned int x :1 has_type; unsigned int x :1 has_enableMapsSuggestServerReranking; unsigned int x :1 has_enforceServerResultsOrder; unsigned int x :1 has_isSectionForClientOnlyResults; unsigned int x :1 has_shouldInterleaveClientResults; unsigned int x :1 read_unknownFields; unsigned int x :1 read_allowedTypeClientOnlySections; unsigned int x :1 read_excludedClientResultTypes; unsigned int x :1 read_includedClientResultTypes; unsigned int x :1 read_entries; unsigned int x :1 read_name; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDAutocompleteResultSection_h */