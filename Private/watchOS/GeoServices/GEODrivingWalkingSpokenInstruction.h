//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEODrivingWalkingSpokenInstruction_h
#define GEODrivingWalkingSpokenInstruction_h
@import Foundation;

#include "PBCodable.h"
#include "GEOFormattedString.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEODrivingWalkingSpokenInstruction : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_shortChainedInstructionIndex; unsigned int x :1 read_unknownFields; unsigned int x :1 read_continueStage; unsigned int x :1 read_executionStages; unsigned int x :1 read_initialStage; unsigned int x :1 read_preparationStage; unsigned int x :1 read_proceedStage; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasProceedStage;
@property (retain, nonatomic) GEOFormattedString *proceedStage;
@property (readonly, nonatomic) BOOL hasContinueStage;
@property (retain, nonatomic) GEOFormattedString *continueStage;
@property (readonly, nonatomic) BOOL hasInitialStage;
@property (retain, nonatomic) GEOFormattedString *initialStage;
@property (readonly, nonatomic) BOOL hasPreparationStage;
@property (retain, nonatomic) GEOFormattedString *preparationStage;
@property (retain, nonatomic) NSMutableArray *executionStages;
@property (nonatomic) BOOL hasShortChainedInstructionIndex;
@property (nonatomic) unsigned int shortChainedInstructionIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)executionStageType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)clearExecutionStages;
- (void)addExecutionStage:(id)stage;
- (unsigned long long)executionStagesCount;
- (id)executionStageAtIndex:(unsigned long long)index;
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

#endif /* GEODrivingWalkingSpokenInstruction_h */