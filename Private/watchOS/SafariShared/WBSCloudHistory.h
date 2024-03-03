//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSCloudHistory_h
#define WBSCloudHistory_h
@import Foundation;

#include "WBSCloudHistoryConfiguration.h"
#include "WBSCloudHistoryDataStore-Protocol.h"
#include "WBSCloudHistoryPushAgentProxy.h"
#include "WBSCloudHistoryServiceProtocol-Protocol.h"
#include "WBSCloudKitThrottlerDataStore-Protocol.h"
#include "WBSHistoryServiceDatabaseProtocol-Protocol.h"
#include "WBSOneShotTimer.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSString, WBSCloudKitThrottler;
@protocol OS_dispatch_queue, WBSCloudKitContainerManateeObserving, {unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>>="__ptr_"{__compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>>="__value_"^{SuddenTerminationDisabler}}};

@interface WBSCloudHistory : NSObject<WBSCloudKitThrottlerDataStore, WBSCloudHistoryServiceProtocol> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_cloudHistoryQueue;
  NSObject<OS_dispatch_queue> *_waitUntilMetadataHasLoadedQueue;
  NSObject<WBSHistoryServiceDatabaseProtocol> *_database;
  NSData *_pushThrottlerData;
  NSData *_fetchThrottlerData;
  NSData *_syncCircleSizeRetrievalThrottlerData;
  NSData *_longLivedSaveOperationData;
  unsigned long long _syncCircleSize;
  BOOL _saveChangesWhenHistoryLoads;
  BOOL _fetchChangesWhenHistoryLoads;
  struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _saveOperationSuddenTerminationDisabler;
  struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _fetchOperationSuddenTerminationDisabler;
  struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _replayLongLivedSaveOperationSuddenTerminationDisabler;
  BOOL _replayLongLivedSaveOperationHasBeenPerformed;
  WBSCloudHistoryConfiguration *_configuration;
  NSObject<WBSCloudHistoryDataStore> *_store;
  WBSCloudKitThrottler *_saveChangesThrottler;
  WBSCloudKitThrottler *_fetchChangesThrottler;
  WBSCloudKitThrottler *_syncCircleSizeRetrievalThrottler;
  WBSOneShotTimer *_serverBackoffTimer;
  BOOL _saveChangesWhenBackoffTimerFires;
  BOOL _fetchChangesWhenBackoffTimerFires;
  WBSCloudHistoryPushAgentProxy *_pushAgent;
  WBSOneShotTimer *_pushNotificationFetchTimer;
  NSMutableDictionary *_syncCircleSizeRetrievalCompletionHandlersByOperation;
  id /* block */ _fetchCompletionHandler;
  id /* block */ _saveCompletionHandler;
  NSObject<WBSCloudKitContainerManateeObserving> *_containerManateeObserver;
  NSMutableArray *_storeDeterminationCompletionBlocks;
  long long _currentManateeState;
  BOOL _manateeStateNeedsUpdate;
  BOOL _isWaitingForPCSIdentityUpdate;
  BOOL _determiningStoreType;
}

@property (nonatomic) unsigned long long numberOfDevicesInSyncCircle;
@property (nonatomic) BOOL cloudHistoryEnabled;
@property (nonatomic) BOOL removedHistoryItemsArePendingSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDatabase:(id)database configuration:(id)configuration completionBlock:(id /* block */)block;
- (void)_determineCloudHistoryStoreWithCompletion:(id /* block */)completion;
- (void)dealloc;
- (BOOL)isCloudHistoryEnabled;
- (void)saveChangesToCloudHistoryStore;
- (void)saveChangesToCloudHistoryStoreBypassingThrottler;
- (void)saveChangesBypassingThrottler:(BOOL)throttler completionHandler:(id /* block */)handler;
- (void)_registerSaveCompletionHandler:(id /* block */)handler;
- (void)_callAndResetSaveCompletionHandlerWithError:(id)error;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)window completion:(id /* block */)completion;
- (void)_saveVisits:(id)visits tombstones:(id)tombstones toCloudHistoryBypassingThrottler:(BOOL)throttler longLivedOperationPersistenceCompletion:(id /* block */)completion withCallback:(id /* block */)callback;
- (void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(BOOL)saved;
- (id)dateOfNextPermittedSaveChangesAttempt;
- (void)fetchAndMergeChanges;
- (void)fetchAndMergeChangesBypassingThrottler;
- (void)fetchAndMergeChangesBypassingThrottler:(BOOL)throttler completionHandler:(id /* block */)handler;
- (void)_registerFetchCompletionHandler:(id /* block */)handler;
- (void)_callAndResetFetchCompletionHandlerWithError:(id)error;
- (void)_getServerChangeTokenDataWithCompletion:(id /* block */)completion;
- (void)_setServerChangeToken:(id)token;
- (void)_pcsIdentitiesChangedNotification:(id)notification;
- (id)_manateeErrorCode:(id)code;
- (void)_handleManateeErrorIfNeeded:(id)needed;
- (void)_transitionCloudHistoryStoreToManateeState:(long long)state completion:(id /* block */)completion;
- (void)_deleteAllCloudHistoryAndSaveAgain;
- (void)_fetchAndMergeChangesWithServerChangeTokenData:(id)data withPriority:(long long)priority;
- (void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
- (void)_replayPersistedLongLivedSaveOperationIfNecessary;
- (void)_updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)generation completion:(id /* block */)completion;
- (void)_persistedLongLivedSaveOperationID:(id *)id databaseGeneration:(long long *)generation;
- (void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)id databaseGeneration:(long long)generation;
- (void)_removePersistedLongLivedSaveOperationDictionary;
- (void)_initializePushNotificationSupport;
- (void)_pushNotificationsAreInitializedWithCompletionHandler:(id /* block */)handler;
- (void)_setPushNotificationAreInitialized:(BOOL)initialized;
- (void)_pushNotificationReceived:(id)received;
- (void)_processPendingPushNotifications;
- (void)_fetchChangesInResponseToPushNotification:(id)notification;
- (void)_determineNumberOfDevicesInSyncCircleForOperation:(id)operation completionHandler:(id /* block */)handler;
- (void)_saveChangesWhenHistoryLoads;
- (void)_fetchChangesWhenHistoryLoads;
- (void)_registerForHistoryWasLoadedNotificationIfNecessary;
- (void)_loadMetadataAsynchronously;
- (void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterMetadataHasLoaded:(id /* block */)loaded;
- (long long)_priorityForSaveWithVisits:(id)visits tombstones:(id)tombstones bypassingThrottler:(BOOL)throttler;
- (long long)_estimatedPriorityForPotentialSaveAttempt;
- (long long)_resultFromError:(id)error;
- (double)_backoffTimeIntervalFromError:(id)error;
- (void)_backOffWithInterval:(double)interval;
- (void)_serverBackoffTimerFired:(id)fired;
- (void)_cloudHistoryConfigurationChanged:(id)changed;
- (id)recordOfPastOperationsForThrottler:(id)throttler;
- (void)setRecordOfPastOperations:(id)operations forThrottler:(id)throttler;
- (id)_currentSaveChangesThrottlerPolicyString;
- (id)_currentFetchChangesThrottlerPolicyString;
- (id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
- (void)_updateDeviceCountInResponseToPushNotification;
- (void)_updateThrottlerPolicies;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircle;
- (void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)circle;
- (void)_resetCloudHistoryDataWithCompletionHandler:(id /* block */)handler;
- (void)resetForAccountChange;
- (void)_resetForAccountChangeWithCompletionHandler:(id /* block */)handler;
- (void)updateConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)resetForAccountChangeWithCompletionHandler:(id /* block */)handler;
- (void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(id /* block */)handler;
@end

#endif /* WBSCloudHistory_h */