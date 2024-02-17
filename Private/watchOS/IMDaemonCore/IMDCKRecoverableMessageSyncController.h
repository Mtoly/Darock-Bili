//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDCKRecoverableMessageSyncController_h
#define IMDCKRecoverableMessageSyncController_h
@import Foundation;

#include "IMDCKAbstractSyncController.h"
#include "IMDCKMessageSyncCKOperationFactory.h"
#include "IMDRecordZoneManager.h"
#include "SyncTokenStoreProviding-Protocol.h"

@protocol OS_dispatch_queue;

@interface IMDCKRecoverableMessageSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) NSObject<SyncTokenStoreProviding> *syncTokenStore;
@property (retain, nonatomic) IMDCKMessageSyncCKOperationFactory *CKOperationFactory;

/* class methods */
+ (id)sharedInstance;
+ (id)_zoneChangesOptionsDictionaryUsingToken:(id)token zoneID:(id)id resultsLimit:(unsigned long long)limit;
+ (id)_fetchRecoverableMessagesCKConfiguration:(id)ckconfiguration;
+ (id)_fetchOperationFactory:(id)factory token:(id)token batchSize:(unsigned long long)size activity:(id)activity;

/* instance methods */
- (id)init;
- (id)initWithSyncTokenStore:(id)store;
- (void)syncWithType:(long long)type withActivity:(id)activity withCompletion:(id /* block */)completion;
- (void)_readRecordsWithType:(long long)type attemptCount:(unsigned long long)count activity:(id)activity completion:(id /* block */)completion;
- (void)_onRecordRead:(id)read;
- (void)_onRecoverableMessagePartRecordReadWithDeleteDate:(id)date messageGUID:(id)guid partBody:(id)body;
- (void)_onRecordDeleted:(id)deleted type:(id)type;
- (void)_onChangeTokenUpdated:(id)updated token:(id)token data:(id)data;
- (void)_onRecordZoneFetchComplete:(id)complete token:(id)token tokenData:(id)data moreComing:(BOOL)coming error:(id)error;
- (void)_onReadComplete:(long long)complete error:(id)error activity:(id)activity completion:(id /* block */)completion;
- (void)clearLocalSyncState:(unsigned long long)state;
- (id)_syncTokenKey;
- (id)_syncTokenStore;
- (BOOL)_zoneCreated;
- (void)_writeRecordsWithType:(long long)type activity:(id)activity completion:(id /* block */)completion;
- (void)_onRecordWrite:(id)write error:(id)error recordNameToPartIndexAndRowID:(id)id;
- (void)_onWriteComplete:(long long)complete error:(id)error shouldWriteMore:(BOOL)more activity:(id)activity completion:(id /* block */)completion;
- (void)syncRemovedRecoverableMessagesToCloudKitWithCompletion:(id /* block */)completion;
- (void)_deleteRecoverableMessagesWithRecordIDs:(id)ids completion:(id /* block */)completion;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)limit;
- (id)_constructRecoverableMessageRecordIDUsingTombStoneDictionary:(id)dictionary;
- (unsigned long long)_deleteBatchSize;
- (id)_fetchRecordsOperationWithActivity:(id)activity;
- (id)_saveRecordsOperationWithMap:(id)map activity:(id)activity;
- (id)_writeRecoverableMessagesCKConfiguration:(id)ckconfiguration;
- (id)_saveRecoverableMessagesOperationFactory:(id)factory token:(id)token batchSize:(unsigned long long)size recordNameToPartIndexAndRowID:(id)id activity:(id)activity;
- (void)_processRecordDeletionCompletion:(id)completion error:(id)error completionBlock:(id /* block */)block;
- (id)createCKRecordforRecoverableMessageMetadata:(id)metadata zoneID:(id)id recordNameToPartIndexAndRowID:(id)id;
- (void)_scheduleOperation:(id)operation;
- (long long)syncControllerRecordType;
- (void)deleteRecoverableMessageZone;
- (id)recoverableGUIDFromMessageGUID:(id)guid chatGUID:(id)guid partIndex:(long long)index;
@end

#endif /* IMDCKRecoverableMessageSyncController_h */