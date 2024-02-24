//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBSearchViewExposure_h
#define NTPBSearchViewExposure_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface NTPBSearchViewExposure : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 areaPresentationReason; } _has;
}

@property (nonatomic) BOOL hasAreaPresentationReason;
@property (nonatomic) int areaPresentationReason;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;

/* instance methods */
- (id)areaPresentationReasonAsString:(int)string;
- (int)StringAsAreaPresentationReason:(id)reason;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBSearchViewExposure_h */