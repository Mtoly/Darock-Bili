//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncStore_h
#define HDCloudSyncStore_h
@import Foundation;

#include "HDCloudSyncShardPredicate.h"
#include "HDProfile.h"
#include "HDSyncIdentity.h"
#include "HDSyncStore-Protocol.h"
#include "NSCopying-Protocol.h"

@class HDSharingPredicate, NSString, NSUUID;

@interface HDCloudSyncStore : NSObject<NSCopying, HDSyncStore> {
  /* instance variables */
  long long _syncProvenance;
  long long _syncEpoch;
  int _syncProtocolVersion;
}

@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, copy, nonatomic) HDSyncIdentity *syncIdentity;
@property (readonly, nonatomic) BOOL canPush;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HDCloudSyncShardPredicate *shardPredicate;
@property (readonly, copy, nonatomic) NSString *sharingIdentifier;
@property (readonly, nonatomic) HDSharingPredicate *sharingPredicate;
@property (readonly, nonatomic) BOOL syncTombstonesOnly;
@property (readonly, nonatomic) BOOL supportsRebase;
@property (readonly) int protocolVersion;
@property (readonly) long long syncStoreType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)samplesDeletedInProfile:(id)profile byUser:(BOOL)user intervals:(id)intervals;
+ (id)syncStoreForProfile:(id)profile storeIdentifier:(id)identifier syncCircleName:(id)name ownerIdentifier:(id)identifier syncIdentity:(id)identity containerIdentifier:(id)identifier error:(id *)error;
+ (id)shardPredicatesForProfile:(id)profile syncCircleName:(id)name currentDate:(id)date error:(id *)error;
+ (id)createOrUpdateShardStoresForProfile:(id)profile throughDate:(id)date syncCircleName:(id)name ownerIdentifier:(id)identifier containerIdentifier:(id)identifier syncIdentity:(id)identity error:(id *)error;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)syncStoreForEpoch:(long long)epoch;
- (id)syncStoreForProtocolVersion:(int)version;
- (id)syncStoreForTombstoneSyncOnly:(BOOL)only;
- (id)receivedSyncAnchorMapWithError:(id *)error;
- (BOOL)resetReceivedSyncAnchorMapWithError:(id *)error;
- (BOOL)replacePersistedAnchorMap:(id)map error:(id *)error;
- (BOOL)clearAllSyncAnchorsWithError:(id *)error;
- (id)getPersistedAnchorMapWithError:(id *)error;
- (id)_syncAnchorMapByStrippingBlockedEntities:(id)entities;
- (BOOL)persistState:(id)state error:(id *)error;
- (id)persistedStateWithError:(id *)error;
- (BOOL)replaceFrozenAnchorMap:(id)map updateDate:(id)date error:(id *)error;
- (long long)syncProvenance;
- (long long)syncEpoch;
- (id)syncStoreIdentifier;
- (id)databaseIdentifier;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncEntityDependenciesForSyncEntity:(Class)entity;
- (BOOL)canRecieveSyncObjectsForEntityClass:(Class)class;
- (id)primaryOrderedSyncEntities;
- (id)orderedSyncEntities;
- (BOOL)enforceSyncEntityOrdering;
- (BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)class;
- (BOOL)shouldContinueAfterAnchorValidationError:(id)error;
- (BOOL)shouldEnforceSequenceOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)class;
- (void)setExpectedSequenceNumber:(long long)number forSyncEntityClass:(Class)class;
@end

#endif /* HDCloudSyncStore_h */