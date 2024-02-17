//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKProtoSendMessageRequest_h
#define NNMKProtoSendMessageRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface NNMKProtoSendMessageRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 sendingType; unsigned int x :1 includeAttachments; } _has;
}

@property (retain, nonatomic) NSMutableArray *tos;
@property (retain, nonatomic) NSMutableArray *ccs;
@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) NSString *subject;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) NSString *body;
@property (readonly, nonatomic) BOOL hasComposedMessageId;
@property (retain, nonatomic) NSString *composedMessageId;
@property (nonatomic) BOOL hasSendingType;
@property (nonatomic) unsigned int sendingType;
@property (readonly, nonatomic) BOOL hasReferenceMessageId;
@property (retain, nonatomic) NSString *referenceMessageId;
@property (nonatomic) BOOL hasIncludeAttachments;
@property (nonatomic) BOOL includeAttachments;
@property (readonly, nonatomic) BOOL hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (readonly, nonatomic) BOOL hasFrom;
@property (retain, nonatomic) NSString *from;

/* class methods */
+ (Class)toType;
+ (Class)ccType;

/* instance methods */
- (void)clearTos;
- (void)addTo:(id)to;
- (unsigned long long)tosCount;
- (id)toAtIndex:(unsigned long long)index;
- (void)clearCcs;
- (void)addCc:(id)cc;
- (unsigned long long)ccsCount;
- (id)ccAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NNMKProtoSendMessageRequest_h */