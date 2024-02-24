//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgEventTileSetState_h
#define GEOLogMsgEventTileSetState_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEOLogMsgEventTileSetState : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_durationInOldState; unsigned int x :1 has_newCoverage; unsigned int x :1 has_oldCoverage; unsigned int x :1 has_tileSetStateType; } _flags;
}

@property (nonatomic) BOOL hasDurationInOldState;
@property (nonatomic) double durationInOldState;
@property (nonatomic) BOOL hasTileSetStateType;
@property (nonatomic) int tileSetStateType;
@property (nonatomic) BOOL hasOldCoverage;
@property (nonatomic) double oldCoverage;
@property (nonatomic) BOOL hasNewCoverage;
@property (nonatomic) double newCoverage;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)tileSetStateTypeAsString:(int)string;
- (int)StringAsTileSetStateType:(id)type;
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

#endif /* GEOLogMsgEventTileSetState_h */