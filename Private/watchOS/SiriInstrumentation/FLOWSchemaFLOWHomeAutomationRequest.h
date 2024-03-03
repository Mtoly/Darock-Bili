//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef FLOWSchemaFLOWHomeAutomationRequest_h
#define FLOWSchemaFLOWHomeAutomationRequest_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "FLOWSchemaFLOWHomeAutomationRequestMetadata.h"
#include "SISchemaUUID.h"

@class NSArray, NSData;

@interface FLOWSchemaFLOWHomeAutomationRequest : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 homeAutomationRequestType; unsigned int x :1 homeAutomationRequestOutcome; unsigned int x :1 homeAutomationRequestDuration; } _has;
}

@property (retain, nonatomic) SISchemaUUID *homeAutomationRequestId;
@property (nonatomic) BOOL hasHomeAutomationRequestId;
@property (nonatomic) int homeAutomationRequestType;
@property (nonatomic) BOOL hasHomeAutomationRequestType;
@property (nonatomic) int homeAutomationRequestOutcome;
@property (nonatomic) BOOL hasHomeAutomationRequestOutcome;
@property (copy, nonatomic) NSArray *homeAutomationRequestErrorReasons;
@property (nonatomic) unsigned int homeAutomationRequestDuration;
@property (nonatomic) BOOL hasHomeAutomationRequestDuration;
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationRequestMetadata *homeAutomationRequestMetadata;
@property (nonatomic) BOOL hasHomeAutomationRequestMetadata;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteHomeAutomationRequestId;
- (void)deleteHomeAutomationRequestType;
- (void)deleteHomeAutomationRequestOutcome;
- (void)clearHomeAutomationRequestErrorReason;
- (void)deleteHomeAutomationRequestErrorReason;
- (void)addHomeAutomationRequestErrorReason:(id)reason;
- (unsigned long long)homeAutomationRequestErrorReasonCount;
- (id)homeAutomationRequestErrorReasonAtIndex:(unsigned long long)index;
- (void)deleteHomeAutomationRequestDuration;
- (void)deleteHomeAutomationRequestMetadata;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FLOWSchemaFLOWHomeAutomationRequest_h */