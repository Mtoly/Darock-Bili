//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef SCKDatabase_h
#define SCKDatabase_h
@import Foundation;

#include "SCKAsyncSerialQueue.h"
#include "SCKContainerProxying-Protocol.h"
#include "SCKDatabaseSchema.h"
#include "SCKDatabaseStoreCoordinator-Protocol.h"
#include "SCKDatabaseStoreCoordinatorObserver-Protocol.h"
#include "SCKStartupQueue.h"

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SCKDatabase : NSObject<SCKDatabaseStoreCoordinatorObserver>

@property (retain, nonatomic) SCKDatabaseSchema *schema;
@property (retain, nonatomic) NSObject<SCKDatabaseStoreCoordinator> *storeCoordinator;
@property (retain, nonatomic) NSObject<SCKContainerProxying> *container;
@property (retain, nonatomic) NSArray *mergeHandlers;
@property (retain, nonatomic) SCKStartupQueue *startupQueue;
@property (retain, nonatomic) SCKAsyncSerialQueue *ckSyncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableDictionary *observersByZoneName;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } observersLock;
@property long long status;
@property (retain, nonatomic) NSMutableDictionary *zoneSnapshotsByZoneName;

/* instance methods */
- (id)initWithSchema:(id)schema store:(id)store features:(long long)features containerProxy:(id)proxy;
- (id)initWithSchema:(id)schema store:(id)store features:(long long)features mergeHandlers:(id)handlers containerProxy:(id)proxy;
- (id)initWithSchema:(id)schema store:(id)store migrationPlan:(id)plan containerProxy:(id)proxy;
- (id)initWithSchema:(id)schema store:(id)store migrationPlan:(id)plan features:(long long)features containerProxy:(id)proxy;
- (void)readContentsOfZone:(id)zone withBlock:(id /* block */)block;
- (void)modifyContentsOfZone:(id)zone withCommand:(id)command;
- (void)addObserver:(id)observer forZone:(id)zone;
- (void)removeObserver:(id)observer forZone:(id)zone;
- (void)handleRemoteNotification:(id)notification completion:(id /* block */)completion;
- (void)pollForChangesWithCondition:(id)condition completion:(id /* block */)completion;
- (void)checkSyncingEnabledWithCompletion:(id /* block */)completion;
- (void)savePendingChangesToServerWithCompletion:(id /* block */)completion;
- (void)storeCoordinatorDiscoveredExternalChanges:(id)changes;
- (BOOL)t_flushChangesWithTimeout:(double)timeout;
- (void)_enqueueStartupSequenceWithFeatures:(long long)features;
- (void)_fetchDatabaseAndZoneChangesWithCompletion:(id /* block */)completion;
- (void)_fetchDatabaseChangesWithCompletion:(id /* block */)completion;
- (void)_fetchZoneChangesForZones:(id)zones completion:(id /* block */)completion;
- (void)_saveZoneToContainer:(id)container allowRecoveryAttempt:(BOOL)attempt completion:(id /* block */)completion;
- (void)_saveZonesToContainer:(id)container allowRecoveryAttempt:(BOOL)attempt completion:(id /* block */)completion;
- (void)_squashZoneForMerge:(id)merge zoneStore:(id)store;
- (void)_createZoneInContainerWithSchema:(id)schema completion:(id /* block */)completion;
- (void)_deleteAndRecreateAllZonesWithCompletion:(id /* block */)completion;
- (id)_zoneWithSchema:(id)schema zoneStore:(id)store;
- (id)_emptyZonesNeedingFirstSync;
- (id)_zonesNeedingFetch;
- (id)_zonesNeedingSave;
- (void)_reloadSnapshotOfZone:(id)zone fromStore:(id)store;
- (void)_recoverFromIdentityLossWithCompletion:(id /* block */)completion;
- (void)_runCKOperation:(id)ckoperation;
- (id)_sanitizeErrorForClients:(id)clients;
@end

#endif /* SCKDatabase_h */