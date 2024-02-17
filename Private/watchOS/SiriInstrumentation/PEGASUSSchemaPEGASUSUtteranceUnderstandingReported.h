//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PEGASUSSchemaPEGASUSUtteranceUnderstandingReported_h
#define PEGASUSSchemaPEGASUSUtteranceUnderstandingReported_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaUUID.h"

@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSUtteranceUnderstandingReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *topU2IntentsMetadatas;
@property (copy, nonatomic) NSArray *topKGSAIntentsMetadatas;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteLinkId;
- (void)clearTopU2IntentsMetadata;
- (void)deleteTopU2IntentsMetadata;
- (void)addTopU2IntentsMetadata:(id)metadata;
- (unsigned long long)topU2IntentsMetadataCount;
- (id)topU2IntentsMetadataAtIndex:(unsigned long long)index;
- (void)clearTopKGSAIntentsMetadata;
- (void)deleteTopKGSAIntentsMetadata;
- (void)addTopKGSAIntentsMetadata:(id)metadata;
- (unsigned long long)topKGSAIntentsMetadataCount;
- (id)topKGSAIntentsMetadataAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PEGASUSSchemaPEGASUSUtteranceUnderstandingReported_h */