//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef VCCKShortcutSyncService_h
#define VCCKShortcutSyncService_h
@import Foundation;

#include "CKSyncEngineDataSource-Protocol.h"
#include "VCCKApplicationStateObserver.h"
#include "WFDatabaseObjectObserver-Protocol.h"
#include "WFShortcutsSyncService-Protocol.h"

@class CKRecordZoneID, CKSyncEngine, NSError *, NSMutableDictionary, NSString, WFDatabase;

@interface VCCKShortcutSyncService : NSObject<WFShortcutsSyncService, CKSyncEngineDataSource, WFDatabaseObjectObserver>

@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) CKSyncEngine *syncEngine;
@property (readonly, nonatomic) CKRecordZoneID *shortcutsZoneID;
@property (readonly, nonatomic) VCCKApplicationStateObserver *applicationObserver;
@property (readonly, nonatomic) NSMutableDictionary *filesReferencedUntilSaved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)forceReceiveAndSendAllChangesWithCompletionHandler:(id /* block */)handler;
- (id)initWithContainer:(id)container database:(id)database applicationObserver:(id)observer;
- (void)dealloc;
- (void)fetchAndModifyChangesInShortcutsZone;
- (void)fetchChangesInShortcutsZone;
- (void)fetchChangesInShortcutsZoneWithCompletion:(id /* block */)completion;
- (void)modifyPendingChangesInShortcutsZoneWithCompletion:(id /* block */)completion;
- (void)fetchAndModifyChangesInShortcutsZoneWithCompletion:(id /* block */)completion;
- (void)createShortcutsZone;
- (id)workflowRecordForReference:(id)reference properties:(id)properties;
- (void)sendChangedWorkflows;
- (void)sendChangedFolders;
- (void)addRecordIDsToSave:(id)save recordIDsToDelete:(id)delete;
- (void)sendWorkflowOrderingsIfNeeded;
- (void)sendSyncFlagsIfNeeded;
- (id)rootCollectionRecord;
- (id)collectionIdentifierForRecordID:(id)id;
- (id)workflowOrderingRecordForRecordID:(id)id;
- (id)syncFlagsRecord;
- (id)workflowRecordForRecordID:(id)id;
- (id)folderRecordForRecordID:(id)id;
- (id)autoShortcutsPreferencesRecordForRecordID:(id)id;
- (id)autoShortcutsPreferencesWithCloudKitAutoShortcutsPreferences:(id)preferences;
- (void)handleSavedWorkflowOrderingRecord:(id)record;
- (void)handleSavedWorkflowRecord:(id)record;
- (void)handleSavedFolderRecord:(id)record;
- (void)handleSavedSyncFlagsRecord:(id)record;
- (void)handleSavedAutoShortcutsPreferencesRecord:(id)record;
- (void)handleDeletedRecordWithID:(id)id;
- (BOOL)mergeLocalOrderingChangesWithRemoteOrderingChangesFromOrderingRecord:(id)record;
- (void)applyLegacyOrderedWorkflowIDsToRootCollection:(id)collection;
- (id)mergedOrderingFromLocalOrdering:(id)ordering previousOrdering:(id)ordering remoteOrdering:(id)ordering;
- (id)calculateSubsetForRemoteOrdering:(id)ordering withLocalOrdering:(id)ordering;
- (void)handleFetchedCollectionOrderingRecord:(id)record;
- (void)handleFetchedLegacyOrderingRecord:(id)record;
- (void)handleNameConflictsForFetchedWorkflowRecord:(id)record identifier:(id)identifier shouldMarkFetchedRecordAsTombstone:(BOOL *)tombstone;
- (void)handleFetchedWorkflowRecord:(id)record;
- (void)handleFetchedFolderRecord:(id)record;
- (void)handleFetchedSyncFlagsRecord:(id)record;
- (void)handleFetchedAutoShortcutsPreferencesRecord:(id)record;
- (void)handleFetchedDeletionOfRecordWithID:(id)id;
- (void)handleFetchedDeletionOfAutoShortcutsPreferencesWithRecordID:(id)id;
- (void)updateSyncTokenInDatabaseWithBlock:(id /* block */)block;
- (void)handleSendWorkflowOrderingConflictWithClientRecord:(id)record serverRecord:(id)record ancestorRecord:(id)record;
- (void)handleSendSyncFlagsConflictWithClientRecord:(id)record serverRecord:(id)record ancestorRecord:(id)record;
- (void)handleSendAutoShortcutsPreferencesConflictWithClientRecord:(id)record serverRecord:(id)record ancestorRecord:(id)record;
- (void)handleSendWorkflowConflictWithClientRecord:(id)record serverRecord:(id)record ancestorRecord:(id)record;
- (void)handleSendFolderConflictWithClientRecord:(id)record serverRecord:(id)record ancestorRecord:(id)record;
- (void)handleServerRecordChangedError:(id)error;
- (void)handleUnknownItemErrorForRecord:(id)record;
- (void)startObservingUserDefaults;
- (void)stopObservingUserDefaults;
- (void)start;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)databaseDidChange:(id)change modified:(id)modified inserted:(id)inserted removed:(id)removed;
- (void)syncEngine:(id)engine didSaveRecordZone:(id)zone;
- (void)syncEngine:(id)engine didDeleteRecordZoneWithID:(id)id;
- (void)syncEngine:(id)engine failedToSaveRecordZone:(id)zone error:(id)error;
- (void)syncEngine:(id)engine failedToDeleteRecordZoneWithID:(id)id error:(id)error;
- (void)syncEngine:(id)engine zoneWithIDChanged:(id)idchanged;
- (void)syncEngine:(id)engine zoneWithIDWasDeleted:(id)deleted;
- (void)syncEngine:(id)engine zoneWithIDWasPurged:(id)purged;
- (id)syncEngine:(id)engine recordToSaveForRecordID:(id)id;
- (void)syncEngine:(id)engine didSaveRecord:(id)record;
- (void)syncEngine:(id)engine failedToSaveRecord:(id)record error:(id)error;
- (void)syncEngine:(id)engine didDeleteRecordWithID:(id)id;
- (void)syncEngine:(id)engine failedToDeleteRecordWithID:(id)id error:(id)error;
- (void)syncEngine:(id)engine didFetchRecord:(id)record;
- (void)syncEngine:(id)engine recordWithIDWasDeleted:(id)deleted recordType:(id)type;
- (void)syncEngine:(id)engine didUpdateMetadata:(id)metadata;
@end

#endif /* VCCKShortcutSyncService_h */