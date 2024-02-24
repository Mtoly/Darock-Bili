//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgEventRefineSearchSession_h
#define GEOLogMsgEventRefineSearchSession_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgEventRefineSearchSession : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_refineSearchType; unsigned int x :1 has_searchType; unsigned int x :1 read_searchString; unsigned int x :1 read_suggestionItems; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasSearchType;
@property (nonatomic) int searchType;
@property (nonatomic) BOOL hasRefineSearchType;
@property (nonatomic) int refineSearchType;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *suggestionItems;

/* class methods */
+ (Class)suggestionItemType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)searchTypeAsString:(int)string;
- (int)StringAsSearchType:(id)type;
- (id)refineSearchTypeAsString:(int)string;
- (int)StringAsRefineSearchType:(id)type;
- (void)clearSuggestionItems;
- (void)addSuggestionItem:(id)item;
- (unsigned long long)suggestionItemsCount;
- (id)suggestionItemAtIndex:(unsigned long long)index;
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

#endif /* GEOLogMsgEventRefineSearchSession_h */