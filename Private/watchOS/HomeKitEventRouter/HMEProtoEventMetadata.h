//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMEProtoEventMetadata_h
#define HMEProtoEventMetadata_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface HMEProtoEventMetadata : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 timestamp; unsigned int x :1 cachePolicy; unsigned int x :1 combinePolicy; unsigned int x :1 qos; } _has;
}

@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasCachePolicy;
@property (nonatomic) unsigned int cachePolicy;
@property (nonatomic) BOOL hasCombinePolicy;
@property (nonatomic) unsigned int combinePolicy;
@property (nonatomic) BOOL hasQos;
@property (nonatomic) unsigned int qos;

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

#endif /* HMEProtoEventMetadata_h */