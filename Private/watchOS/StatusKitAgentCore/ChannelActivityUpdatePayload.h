//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef ChannelActivityUpdatePayload_h
#define ChannelActivityUpdatePayload_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface ChannelActivityUpdatePayload : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 updateType; } _has;
}

@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) int updateType;
@property (retain, nonatomic) NSMutableArray *participantPayloads;
@property (readonly, nonatomic) BOOL hasPadding;
@property (retain, nonatomic) NSData *padding;

/* class methods */
+ (Class)participantPayloadType;

/* instance methods */
- (id)updateTypeAsString:(int)string;
- (int)StringAsUpdateType:(id)type;
- (void)clearParticipantPayloads;
- (void)addParticipantPayload:(id)payload;
- (unsigned long long)participantPayloadsCount;
- (id)participantPayloadAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* ChannelActivityUpdatePayload_h */