//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef USOSchemaUSONode_h
#define USOSchemaUSONode_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData, NSString;

@interface USOSchemaUSONode : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 usoElementId; unsigned int x :1 usoVerbElementId; } _has;
}

@property (nonatomic) unsigned int usoElementId;
@property (nonatomic) BOOL hasUsoElementId;
@property (nonatomic) unsigned int usoVerbElementId;
@property (nonatomic) BOOL hasUsoVerbElementId;
@property (copy, nonatomic) NSString *entityLabel;
@property (nonatomic) BOOL hasEntityLabel;
@property (copy, nonatomic) NSString *verbLabel;
@property (nonatomic) BOOL hasVerbLabel;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteUsoElementId;
- (void)deleteUsoVerbElementId;
- (void)deleteEntityLabel;
- (void)deleteVerbLabel;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* USOSchemaUSONode_h */