//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef FLOWLINKSchemaFLOWLINKActionContext_h
#define FLOWLINKSchemaFLOWLINKActionContext_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "FLOWLINKSchemaFLOWLinkActionCancelled.h"
#include "FLOWLINKSchemaFLOWLinkActionEnded.h"
#include "FLOWLINKSchemaFLOWLinkActionFailed.h"
#include "FLOWLINKSchemaFLOWLinkActionStarted.h"

@class NSData;

@interface FLOWLINKSchemaFLOWLINKActionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWLINKSchemaFLOWLinkActionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLinkActionEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLinkActionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLinkActionCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteStartedOrChanged;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteCancelled;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FLOWLINKSchemaFLOWLINKActionContext_h */