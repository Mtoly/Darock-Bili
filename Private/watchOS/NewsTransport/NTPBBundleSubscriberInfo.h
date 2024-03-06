//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBBundleSubscriberInfo_h
#define NTPBBundleSubscriberInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface NTPBBundleSubscriberInfo : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 startTimestamp; unsigned int x :1 bundleSubscriptionStatus; unsigned int x :1 isAmplifyUser; unsigned int x :1 isBundlePurchaser; unsigned int x :1 isStoreDemoModeEnabled; } _has;
}

@property (nonatomic) BOOL hasBundleSubscriptionStatus;
@property (nonatomic) int bundleSubscriptionStatus;
@property (retain, nonatomic) NSMutableArray *subscribedChannelIds;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) BOOL hasIsStoreDemoModeEnabled;
@property (nonatomic) BOOL isStoreDemoModeEnabled;
@property (nonatomic) BOOL hasIsBundlePurchaser;
@property (nonatomic) BOOL isBundlePurchaser;
@property (nonatomic) BOOL hasIsAmplifyUser;
@property (nonatomic) BOOL isAmplifyUser;

/* class methods */
+ (Class)subscribedChannelIdsType;

/* instance methods */
- (id)bundleSubscriptionStatusAsString:(int)string;
- (int)StringAsBundleSubscriptionStatus:(id)status;
- (void)clearSubscribedChannelIds;
- (void)addSubscribedChannelIds:(id)ids;
- (unsigned long long)subscribedChannelIdsCount;
- (id)subscribedChannelIdsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBBundleSubscriberInfo_h */