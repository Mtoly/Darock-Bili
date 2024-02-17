//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PLUSSchemaPLUSSuggesterMediaSuggestionMetadata_h
#define PLUSSchemaPLUSSuggesterMediaSuggestionMetadata_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface PLUSSchemaPLUSSuggesterMediaSuggestionMetadata : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 locality; unsigned int x :1 serverTreatment; unsigned int x :1 clientTreatment; } _has;
}

@property (nonatomic) int locality;
@property (nonatomic) BOOL hasLocality;
@property (nonatomic) int serverTreatment;
@property (nonatomic) BOOL hasServerTreatment;
@property (nonatomic) int clientTreatment;
@property (nonatomic) BOOL hasClientTreatment;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteLocality;
- (void)deleteServerTreatment;
- (void)deleteClientTreatment;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PLUSSchemaPLUSSuggesterMediaSuggestionMetadata_h */