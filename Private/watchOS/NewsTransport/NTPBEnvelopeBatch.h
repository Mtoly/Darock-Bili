//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBEnvelopeBatch_h
#define NTPBEnvelopeBatch_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NTPBEnvelopeBatch : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 envelopeDroppedCountDueToSizeLimit; unsigned int x :1 majorVersion; unsigned int x :1 minorVersion; unsigned int x :1 patchVersion; } _has;
}

@property (retain, nonatomic) NSMutableArray *envelopes;
@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) int majorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) BOOL hasPatchVersion;
@property (nonatomic) int patchVersion;
@property (nonatomic) BOOL hasEnvelopeDroppedCountDueToSizeLimit;
@property (nonatomic) int envelopeDroppedCountDueToSizeLimit;

/* class methods */
+ (Class)envelopeType;

/* instance methods */
- (void)clearEnvelopes;
- (void)addEnvelope:(id)envelope;
- (unsigned long long)envelopesCount;
- (id)envelopeAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBEnvelopeBatch_h */