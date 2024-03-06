//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoRemotePassActionEnterValueRequest_h
#define NPKProtoRemotePassActionEnterValueRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface NPKProtoRemotePassActionEnterValueRequest : PBRequest<NSCopying>

@property (retain, nonatomic) NSString *requestUniqueID;
@property (retain, nonatomic) NSString *balanceIdentifier;
@property (retain, nonatomic) NSString *balanceLabel;
@property (retain, nonatomic) NSString *currentBalanceCurrency;
@property (nonatomic) long long currentBalanceAmount;
@property (readonly, nonatomic) BOOL hasPaymentPassActionData;
@property (retain, nonatomic) NSData *paymentPassActionData;

/* instance methods */
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

#endif /* NPKProtoRemotePassActionEnterValueRequest_h */