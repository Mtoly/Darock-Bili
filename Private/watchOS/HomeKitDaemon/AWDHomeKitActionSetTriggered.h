//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef AWDHomeKitActionSetTriggered_h
#define AWDHomeKitActionSetTriggered_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface AWDHomeKitActionSetTriggered : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 timestamp; unsigned int x :1 duration; unsigned int x :1 errorCode; unsigned int x :1 numAccessories; unsigned int x :1 triggerSource; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (readonly, nonatomic) BOOL hasTransaction;
@property (retain, nonatomic) NSString *transaction;
@property (nonatomic) BOOL hasTriggerSource;
@property (nonatomic) int triggerSource;
@property (nonatomic) BOOL hasNumAccessories;
@property (nonatomic) unsigned int numAccessories;
@property (readonly, nonatomic) BOOL hasClientMetricIdentifier;
@property (retain, nonatomic) NSString *clientMetricIdentifier;

/* instance methods */
- (id)triggerSourceAsString:(int)string;
- (int)StringAsTriggerSource:(id)source;
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

#endif /* AWDHomeKitActionSetTriggered_h */