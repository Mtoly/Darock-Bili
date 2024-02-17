//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef LRSchemaLRRedactionSignal_h
#define LRSchemaLRRedactionSignal_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "LRSchemaLRComponentIdentifierRedactionSignal.h"
#include "LRSchemaLRTimespanRedactionSignal.h"

@class NSData;

@interface LRSchemaLRRedactionSignal : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 sensitivityState; unsigned int x :1 signalTimeNanosecondsSinceBoot; } _has;
}

@property (nonatomic) int sensitivityState;
@property (nonatomic) BOOL hasSensitivityState;
@property (nonatomic) unsigned long long signalTimeNanosecondsSinceBoot;
@property (nonatomic) BOOL hasSignalTimeNanosecondsSinceBoot;
@property (nonatomic) BOOL isEntireClockAffected;
@property (nonatomic) BOOL hasIsEntireClockAffected;
@property (retain, nonatomic) LRSchemaLRTimespanRedactionSignal *timeSpan;
@property (nonatomic) BOOL hasTimeSpan;
@property (retain, nonatomic) LRSchemaLRComponentIdentifierRedactionSignal *componentId;
@property (nonatomic) BOOL hasComponentId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSignal;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteSensitivityState;
- (void)deleteSignalTimeNanosecondsSinceBoot;
- (void)deleteIsEntireClockAffected;
- (void)deleteTimeSpan;
- (void)deleteComponentId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* LRSchemaLRRedactionSignal_h */