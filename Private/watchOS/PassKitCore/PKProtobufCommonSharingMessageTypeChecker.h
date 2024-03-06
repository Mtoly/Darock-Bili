//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKProtobufCommonSharingMessageTypeChecker_h
#define PKProtobufCommonSharingMessageTypeChecker_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface PKProtobufCommonSharingMessageTypeChecker : PBCodable<NSCopying>

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasMessageType;
@property (retain, nonatomic) NSString *messageType;

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

#endif /* PKProtobufCommonSharingMessageTypeChecker_h */