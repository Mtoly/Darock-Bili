//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBCard_h
#define _SFPBCard_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBCard-Protocol.h"
#include "_SFPBColor.h"
#include "_SFPBDrillDownMetadata.h"
#include "_SFPBImage.h"
#include "_SFPBURL.h"

@class NSArray, NSData, NSString;

@interface _SFPBCard : PBCodable<_SFPBCard, NSSecureCoding>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy) NSArray *cardSections;
@property (copy, nonatomic) NSData *intentMessageData;
@property (copy, nonatomic) NSString *intentMessageName;
@property (copy, nonatomic) NSData *intentResponseMessageData;
@property (copy, nonatomic) NSString *intentResponseMessageName;
@property (copy, nonatomic) NSArray *dismissalCommands;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *contextReferenceIdentifier;
@property (retain, nonatomic) _SFPBURL *urlValue;
@property (nonatomic) int source;
@property (copy, nonatomic) NSData *entityIdentifier;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic) BOOL flexibleSectionOrder;
@property (copy, nonatomic) NSArray *entityProtobufMessages;
@property (retain, nonatomic) _SFPBImage *titleImage;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (retain, nonatomic) _SFPBDrillDownMetadata *metadata;
@property (retain, nonatomic) _SFPBDrillDownMetadata *drilldownMetadata;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFacade:(id)facade;
- (void)clearCardSections;
- (void)addCardSections:(id)sections;
- (unsigned long long)cardSectionsCount;
- (id)cardSectionsAtIndex:(unsigned long long)index;
- (void)clearDismissalCommands;
- (void)addDismissalCommands:(id)commands;
- (unsigned long long)dismissalCommandsCount;
- (id)dismissalCommandsAtIndex:(unsigned long long)index;
- (void)clearEntityProtobufMessages;
- (void)addEntityProtobufMessages:(id)messages;
- (unsigned long long)entityProtobufMessagesCount;
- (id)entityProtobufMessagesAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBCard_h */