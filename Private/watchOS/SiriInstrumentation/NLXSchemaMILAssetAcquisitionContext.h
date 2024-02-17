//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NLXSchemaMILAssetAcquisitionContext_h
#define NLXSchemaMILAssetAcquisitionContext_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "NLXSchemaMILAssetAcquisitionEnded.h"
#include "NLXSchemaMILAssetAcquisitionFailed.h"
#include "NLXSchemaMILAssetAcquisitionStarted.h"
#include "SISchemaUUID.h"

@class NSData;

@interface NLXSchemaMILAssetAcquisitionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) NLXSchemaMILAssetAcquisitionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) NLXSchemaMILAssetAcquisitionEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) NLXSchemaMILAssetAcquisitionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteContextId;
- (void)deleteStartedOrChanged;
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

#endif /* NLXSchemaMILAssetAcquisitionContext_h */