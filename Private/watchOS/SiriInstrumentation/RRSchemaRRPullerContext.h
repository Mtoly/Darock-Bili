//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef RRSchemaRRPullerContext_h
#define RRSchemaRRPullerContext_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "RRSchemaRRPullerEnded.h"
#include "RRSchemaRRPullerFailed.h"

@class NSData;

@interface RRSchemaRRPullerContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) RRSchemaRRPullerEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) RRSchemaRRPullerFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteEnded;
- (void)deleteFailed;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* RRSchemaRRPullerContext_h */