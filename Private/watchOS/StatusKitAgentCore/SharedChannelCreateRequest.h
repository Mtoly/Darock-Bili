//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SharedChannelCreateRequest_h
#define SharedChannelCreateRequest_h
@import Foundation;

#include "PBRequest.h"
#include "AuthCredential.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface SharedChannelCreateRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 channelOwnershipType; } _has;
}

@property (readonly, nonatomic) BOOL hasChannelTopic;
@property (retain, nonatomic) NSString *channelTopic;
@property (readonly, nonatomic) BOOL hasAuthCredential;
@property (retain, nonatomic) AuthCredential *authCredential;
@property (nonatomic) BOOL hasChannelOwnershipType;
@property (nonatomic) int channelOwnershipType;
@property (readonly, nonatomic) BOOL hasAdopter;
@property (retain, nonatomic) NSString *adopter;

/* instance methods */
- (id)channelOwnershipTypeAsString:(int)string;
- (int)StringAsChannelOwnershipType:(id)type;
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

#endif /* SharedChannelCreateRequest_h */