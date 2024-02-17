//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef CDASchemaCDAParticipant_h
#define CDASchemaCDAParticipant_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaUUID.h"

@class NSData;

@interface CDASchemaCDAParticipant : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 goodnessScore; unsigned int x :1 deviceClass; unsigned int x :1 productType; } _has;
}

@property (nonatomic) unsigned int goodnessScore;
@property (nonatomic) BOOL hasGoodnessScore;
@property (nonatomic) int deviceClass;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) unsigned int productType;
@property (nonatomic) BOOL hasProductType;
@property (retain, nonatomic) SISchemaUUID *electionParticipantId;
@property (nonatomic) BOOL hasElectionParticipantId;
@property (retain, nonatomic) SISchemaUUID *rotatedElectionParticipantId;
@property (nonatomic) BOOL hasRotatedElectionParticipantId;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteGoodnessScore;
- (void)deleteDeviceClass;
- (void)deleteProductType;
- (void)deleteElectionParticipantId;
- (void)deleteRotatedElectionParticipantId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* CDASchemaCDAParticipant_h */