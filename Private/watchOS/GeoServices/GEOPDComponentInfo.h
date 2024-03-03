//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDComponentInfo_h
#define GEOPDComponentInfo_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDComponentFilter.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOPDComponentInfo : PBCodable<NSCopying> {
  /* instance variables */
  PBUnknownFields *_unknownFields;
  GEOPDComponentFilter *_filter;
  unsigned int _count;
  unsigned int _startIndex;
  int _type;
  int _urgency;
  BOOL _includeSource;
  struct { unsigned int x :1 has_count; unsigned int x :1 has_startIndex; unsigned int x :1 has_type; unsigned int x :1 has_urgency; unsigned int x :1 has_includeSource; } _flags;
}

/* instance methods */
- (id)initWithType:(int)type count:(unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDComponentInfo_h */