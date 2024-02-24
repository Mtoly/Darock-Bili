//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoGenerateTransactionKeyWithParametersResponse_h
#define NPKProtoGenerateTransactionKeyWithParametersResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface NPKProtoGenerateTransactionKeyWithParametersResponse : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasTransactionKeyIdentifier;
@property (retain, nonatomic) NSString *transactionKeyIdentifier;
@property (retain, nonatomic) NSMutableArray *transactionKeyCertChains;
@property (readonly, nonatomic) BOOL hasAppletIdentifier;
@property (retain, nonatomic) NSData *appletIdentifier;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

/* class methods */
+ (Class)transactionKeyCertChainType;

/* instance methods */
- (void)clearTransactionKeyCertChains;
- (void)addTransactionKeyCertChain:(id)chain;
- (unsigned long long)transactionKeyCertChainsCount;
- (id)transactionKeyCertChainAtIndex:(unsigned long long)index;
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

#endif /* NPKProtoGenerateTransactionKeyWithParametersResponse_h */