//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PEGASUSSchemaPEGASUSWebAnswerCitationInfoTier1_h
#define PEGASUSSchemaPEGASUSWebAnswerCitationInfoTier1_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData, NSString;

@interface PEGASUSSchemaPEGASUSWebAnswerCitationInfoTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *subText;
@property (nonatomic) BOOL hasSubText;
@property (copy, nonatomic) NSArray *citationIndices;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteSubText;
- (void)clearCitationIndices;
- (void)deleteCitationIndices;
- (void)addCitationIndices:(int)indices;
- (unsigned long long)citationIndicesCount;
- (int)citationIndicesAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PEGASUSSchemaPEGASUSWebAnswerCitationInfoTier1_h */