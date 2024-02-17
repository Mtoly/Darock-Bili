//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef ChannelPublishPayload_h
#define ChannelPublishPayload_h
@import Foundation;

#include "PBCodable.h"
#include "ChannelIdentity.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface ChannelPublishPayload : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 publishInitiateTimestampMillis; unsigned int x :1 publishPayloadExpiryTtlMillis; unsigned int x :1 pushPriority; unsigned int x :1 retryCount; unsigned int x :1 pendingPublishHint; unsigned int x :1 scheduledPublishHint; } _has;
}

@property (nonatomic) BOOL hasPublishInitiateTimestampMillis;
@property (nonatomic) unsigned long long publishInitiateTimestampMillis;
@property (readonly, nonatomic) BOOL hasChannelIdentity;
@property (retain, nonatomic) ChannelIdentity *channelIdentity;
@property (readonly, nonatomic) BOOL hasPublishPayload;
@property (retain, nonatomic) NSData *publishPayload;
@property (nonatomic) BOOL hasPublishPayloadExpiryTtlMillis;
@property (nonatomic) unsigned long long publishPayloadExpiryTtlMillis;
@property (nonatomic) BOOL hasPushPriority;
@property (nonatomic) int pushPriority;
@property (nonatomic) BOOL hasPendingPublishHint;
@property (nonatomic) BOOL pendingPublishHint;
@property (nonatomic) BOOL hasScheduledPublishHint;
@property (nonatomic) BOOL scheduledPublishHint;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) unsigned int retryCount;
@property (readonly, nonatomic) BOOL hasAdopter;
@property (retain, nonatomic) NSString *adopter;

/* instance methods */
- (id)pushPriorityAsString:(int)string;
- (int)StringAsPushPriority:(id)priority;
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

#endif /* ChannelPublishPayload_h */