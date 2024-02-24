//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef FLOWSchemaFLOWHomeAutomationCommand_h
#define FLOWSchemaFLOWHomeAutomationCommand_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaUUID.h"

@class NSArray, NSData;

@interface FLOWSchemaFLOWHomeAutomationCommand : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 commandType; unsigned int x :1 commandOutcome; unsigned int x :1 commandErrorReason; unsigned int x :1 commandDuration; } _has;
}

@property (retain, nonatomic) SISchemaUUID *commandId;
@property (nonatomic) BOOL hasCommandId;
@property (nonatomic) int commandType;
@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) int commandOutcome;
@property (nonatomic) BOOL hasCommandOutcome;
@property (nonatomic) int commandErrorReason;
@property (nonatomic) BOOL hasCommandErrorReason;
@property (nonatomic) unsigned int commandDuration;
@property (nonatomic) BOOL hasCommandDuration;
@property (copy, nonatomic) NSArray *homeAutomationRequests;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteCommandId;
- (void)deleteCommandType;
- (void)deleteCommandOutcome;
- (void)deleteCommandErrorReason;
- (void)deleteCommandDuration;
- (void)clearHomeAutomationRequests;
- (void)deleteHomeAutomationRequests;
- (void)addHomeAutomationRequests:(id)requests;
- (unsigned long long)homeAutomationRequestsCount;
- (id)homeAutomationRequestsAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FLOWSchemaFLOWHomeAutomationCommand_h */