//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBKeyValuePair_h
#define NTPBKeyValuePair_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NTPBAVAsset.h"
#include "NTPBAVAssetKey.h"
#include "NTPBAppConfigurationResource.h"
#include "NTPBAsset.h"
#include "NTPBAudioPlaylistItem.h"
#include "NTPBCacheCoordinatorHints.h"
#include "NTPBDate.h"
#include "NTPBIssueReadingHistoryItem.h"
#include "NTPBNetworkSessionList.h"
#include "NTPBPersonalizationLocalData.h"
#include "NTPBPrivateDataControllerSyncState.h"
#include "NTPBReadingHistoryItem.h"

@class NSData, NSString;

@interface NTPBKeyValuePair : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 valueType; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasValueType;
@property (nonatomic) int valueType;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (retain, nonatomic) NTPBDate *dateValue;
@property (readonly, nonatomic) BOOL hasCacheCoordinatorHintsValue;
@property (retain, nonatomic) NTPBCacheCoordinatorHints *cacheCoordinatorHintsValue;
@property (readonly, nonatomic) BOOL hasRecordData;
@property (retain, nonatomic) NSData *recordData;
@property (readonly, nonatomic) BOOL hasReadingHistoryItem;
@property (retain, nonatomic) NTPBReadingHistoryItem *readingHistoryItem;
@property (readonly, nonatomic) BOOL hasNetworkSessionList;
@property (retain, nonatomic) NTPBNetworkSessionList *networkSessionList;
@property (readonly, nonatomic) BOOL hasPersonalizationLocalData;
@property (retain, nonatomic) NTPBPersonalizationLocalData *personalizationLocalData;
@property (readonly, nonatomic) BOOL hasAppConfigurationResource;
@property (retain, nonatomic) NTPBAppConfigurationResource *appConfigurationResource;
@property (readonly, nonatomic) BOOL hasPrivateDataControllerSyncState;
@property (retain, nonatomic) NTPBPrivateDataControllerSyncState *privateDataControllerSyncState;
@property (readonly, nonatomic) BOOL hasIssueReadingHistoryItem;
@property (retain, nonatomic) NTPBIssueReadingHistoryItem *issueReadingHistoryItem;
@property (readonly, nonatomic) BOOL hasAsset;
@property (retain, nonatomic) NTPBAsset *asset;
@property (readonly, nonatomic) BOOL hasAudioPlaylistItem;
@property (retain, nonatomic) NTPBAudioPlaylistItem *audioPlaylistItem;
@property (readonly, nonatomic) BOOL hasAvAsset;
@property (retain, nonatomic) NTPBAVAsset *avAsset;
@property (readonly, nonatomic) BOOL hasAvAssetKey;
@property (retain, nonatomic) NTPBAVAssetKey *avAssetKey;

/* instance methods */
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBKeyValuePair_h */