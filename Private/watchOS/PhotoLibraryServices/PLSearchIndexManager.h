//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSearchIndexManager_h
#define PLSearchIndexManager_h
@import Foundation;

#include "PLClientServerTransaction.h"
#include "PLPhotoLibrary.h"
#include "PLSearchIndexDateFormatter.h"
#include "PLSearchIndexManagerDatabaseConnectionDelegate-Protocol.h"
#include "PLSearchIndexSceneTaxonomyProvider.h"
#include "PLSearchMetadataStore.h"
#include "PLSpotlightDonationManager.h"
#include "PLThrottleTimer.h"
#include "PLZeroKeywordStore.h"
#include "PSIDatabase.h"

@class NSCountedSet, NSDate, NSDictionary, NSHashTable, NSMutableDictionary, NSString, PLPhotoLibraryPathManager;
@protocol OS_dispatch_queue;

@interface PLSearchIndexManager : NSObject {
  /* instance variables */
  PLSearchIndexDateFormatter *_dateFormatter;
  PLPhotoLibraryPathManager *_pathManager;
  PLPhotoLibrary *_photoLibrary;
  PSIDatabase *_db;
  PLZeroKeywordStore *_zeroKeywordStore;
  PLSearchMetadataStore *_searchMetadataStore;
  PLThrottleTimer *_throttleTimer;
  PLClientServerTransaction *_serverTransaction;
  double _serverTransactionStartTime;
  PLSearchIndexSceneTaxonomyProvider *_sceneTaxonomyProvider;
  NSDictionary *_searchSystemInfo;
  NSObject<OS_dispatch_queue> *_queue;
  NSDictionary *_inqUUIDsToProcess;
  NSMutableDictionary *_inqGraphDataByUUID;
  NSMutableDictionary *_inqSynonymsByIndexCategoryMask;
  BOOL _receivedUpdatesWhileIndexing;
  BOOL _hasScheduledCloseIndex;
  BOOL _hasValidSearchIndex;
  BOOL _hasValidSearchSupportingData;
  BOOL _shouldCheckDatabaseIntegrity;
  BOOL _shouldLimitIndexingWhileOnBattery;
  BOOL _isTrackingRebuild;
  long long _rebuildReason;
  long long _updateState;
  double _lastIndexingStartTime;
  BOOL _startedIndexing;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
  BOOL _searchIndexInvalidated;
  NSHashTable *_blocksOnQueueAfterDelay;
}

@property BOOL _indexing;
@property (copy, nonatomic) id /* block */ _inqAfterIndexingDidIterate;
@property (readonly, copy, nonatomic) NSCountedSet *_pauseReasons;
@property (readonly, nonatomic) PLSpotlightDonationManager *spotlightDonationManager;
@property (nonatomic) double lastKnownElapsedIndexingTime;
@property (retain, nonatomic) NSDate *dateOfLastSearchIndexRebuild;
@property (retain, nonatomic) NSString *photoLibraryTypeDescription;
@property (retain, nonatomic) NSDate *dateBeganIndexingOnBattery;
@property (retain, nonatomic) NSDate *datePausedIndexingOnBattery;
@property (readonly) PSIDatabase *database;
@property (weak) NSObject<PLSearchIndexManagerDatabaseConnectionDelegate> *databaseConnectionDelegate;
@property (readonly) BOOL indexingPaused;

/* class methods */
+ (id)fetchAssetsWithUUIDs:(id)uuids managedObjectContext:(id)context error:(id *)error;
+ (id)fetchAlbumsWithUUIDs:(id)uuids managedObjectContext:(id)context error:(id *)error;
+ (id)fetchMemoriesWithUUIDs:(id)uuids managedObjectContext:(id)context error:(id *)error;
+ (id)fetchHighlightsWithUUIDs:(id)uuids managedObjectContext:(id)context error:(id *)error;
+ (id)fetchMomentsWithUUIDs:(id)uuids managedObjectContext:(id)context error:(id *)error;
+ (id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)context error:(id *)error;
+ (id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)context error:(id *)error;
+ (id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)context error:(id *)error;
+ (id)fetchHighlightUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)context error:(id *)error;
+ (id)fetchMomentUUIDsToPopulateAssetSearchIndexWithManagedObjectContext:(id)context error:(id *)error;
+ (BOOL)_isUnboundedIndexingAllowed;
+ (BOOL)_isIndexingAllowedByDAS;
+ (int)currentSearchIndexVersion;
+ (id)localeForSearchIndex;
+ (BOOL)shouldIndexFilenames;
+ (void)setShouldIndexFilenames:(BOOL)filenames;

/* instance methods */
- (id)initWithPathManager:(id)manager;
- (void)dealloc;
- (BOOL)_onQueueSync:(id /* block */)sync;
- (BOOL)_onQueueAsync:(id /* block */)async;
- (BOOL)_onQueueAsyncWithDelay:(double)delay perform:(id /* block */)perform;
- (BOOL)_inqUpdateSearchSystemInfo:(id)info forKey:(id)key logMessage:(id)message;
- (BOOL)_inqUpdateVersion;
- (long long)_inqSpotlightRequestedRebuild;
- (BOOL)_inqUpdateLocale;
- (BOOL)_inqUpdateSceneTaxonomySHA:(id)sha;
- (BOOL)_inqUpdateWordEmbeddingVersion:(id)version;
- (BOOL)_inqUpdateFeatureFlags;
- (BOOL)_inqUpdateFeaturedContentAllowed:(BOOL)allowed;
- (void)_inqStartTrackingRebuildWithReason:(long long)reason;
- (void)_inqEndTrackingRebuildIfNeeded;
- (void)_inqStartTrackingUpdateIfAble;
- (void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
- (void)_inqEndTrackingUpdateIfNeeded;
- (unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(BOOL)load;
- (void)enqueuedUUIDsCountWithCompletionHandler:(id /* block */)handler;
- (void)_inqAddUpdatesWithUUIDs:(id)uuids forKey:(id)key;
- (BOOL)_inqIsIndexingPaused;
- (BOOL)isIndexingPaused;
- (void)_inqSetIndexingPaused:(BOOL)paused reason:(id)reason;
- (BOOL)_setIndexingPaused:(BOOL)paused synchronously:(BOOL)synchronously reason:(id)reason;
- (void)pauseIndexingWithReason:(id)reason;
- (void)unpauseIndexingWithReason:(id)reason;
- (void)_throttleTimerFire:(id)fire;
- (void)_inqCloseSearchIndexAndDelete:(BOOL)delete withCompletion:(id /* block */)completion;
- (void)ensureSearchIndexExistsWithCompletionHandler:(id /* block */)handler;
- (void)invalidate;
- (void)dropSearchIndexWithCompletion:(id /* block */)completion;
- (void)_inqResetSearchIndexWithReason:(long long)reason dropCompletion:(id /* block */)completion;
- (void)resetSearchIndexWithReason:(long long)reason dropCompletion:(id /* block */)completion;
- (void)donateSearchEntitiesToSpotlightWithCompletion:(id /* block */)completion;
- (id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)updates;
- (id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)updates;
- (id)_updatesEnsuringMutableArraysFromUpdates:(id)updates;
- (void)applyUpdates:(id)updates completion:(id /* block */)completion;
- (void)applyGraphUpdates:(id)updates supportingData:(id)data completion:(id /* block */)completion;
- (id)_assetUUIDsWithGraphDataInSpotlight;
- (BOOL)_removeFileAtPath:(id)path description:(id)description;
- (void)_inqScheduleCloseIndexIfNeeded;
- (void)_inqTakeClientServerTransactionIfNeeded;
- (void)_inqDropClientServerTransactionIfNeeded;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_inqCloseIndexIfAbleOrForce:(BOOL)force isDelete:(BOOL)delete;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqEnsureSpotlightDonationManagerExists;
- (void)_inqEnsureSearchSystemInfoExists;
- (void)_inqUpdateUUIDsToProcessWithSpotlightProgress;
- (void)_inqEnsureSearchProgressExists;
- (id)_inqRequestGraphDataForHighlightUUIDs:(id)uuids momentUUIDs:(id)uuids photoLibrary:(id)library singleAssetOnly:(BOOL)only error:(id *)error;
- (void)_inqIndexPhotoLibrary;
- (void)_inqEnsureSceneTaxonomyProxyExists;
- (void)_inqEnsurePhotoLibraryExists;
- (id)_inqPhotoLibrary;
- (long long)_inqRebuildReasonIfSearchIndexIsValid;
- (id)_wordEmbeddingVersion;
- (long long)_inqRebuildReasonIfSearchSupportingDataIsValid;
- (id)_assetUUIDsToRemoveFromUUIDsToProcess:(id)process;
- (id)_collectionUUIDsToRemoveFromUUIDsToProcess:(id)process;
- (void)_inqValidateSearchIndexWithCompletionHandler:(id /* block */)handler;
- (BOOL)_shouldResumeIndexingBasedOnDevicePowerStatusOrDAS;
- (void)resumeIndexingIfAllowed;
- (void)_inqResumeIndexingIfNeeded;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)keywords andAssetUUIDsBySocialGroup:(id)group;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)keywords;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetUUIDsBySocialGroup:(id)group;
- (void)indexSingleAssetWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)_fetchMemoriesToIndexWithUUIDs:(id)uuids managedObjectContext:(id)context result:(id /* block */)result;
- (id)_featuredPersonLocalIdentifiersFromPhotosGraphData:(id)data photosGraphVersion:(long long)version;
- (id)searchIndexManagerSignpostLog;
- (void)_inqUpdateFeaturedContentForSearch:(BOOL)search;
- (void)_preferencesDidChange;
- (void)_beginObservingPhotosPreferences;
- (void)_stopObservingPhotosPreferences;
- (void)_beginObservingPowerSourceChanges;
- (void)_stopObservingPowerSourceChanges;
- (void)_handlePowerSourceChange;
- (BOOL)_isIndexing;
- (void)_setIndexing:(BOOL)indexing;
- (void)_setInqAfterIndexingDidIterate:(id /* block */)iterate;
@end

#endif /* PLSearchIndexManager_h */