//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLModelMigrator_h
#define PLModelMigrator_h
@import Foundation;

#include "NSProgressReporting-Protocol.h"
#include "PLDeviceRestoreMigrationPostProcessingSupport.h"
#include "PLDeviceRestoreMigrationSupport.h"
#include "PLThumbnailManager.h"

@class BOOL *, NSDictionary, NSFileManager, NSProgress, NSString, PLCoreAnalyticsEventManager, PLLazyObject, PLPhotoLibraryPathManager, PLXPCTransaction;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLModelMigrator : NSObject<NSProgressReporting> {
  /* instance variables */
  double _startTime;
  PLXPCTransaction *_transaction;
  NSDictionary *_syncedPropertiesByUUID;
  PLThumbnailManager *_thumbnailManager;
  PLLazyObject *_lazyCoreAnalysticsEventManager;
  PLLazyObject *_lazyDeviceRestoreMigrationSupport;
  PLLazyObject *_lazyDeviceRestoreMigrationPostProcessingSupport;
  PLLazyObject *_lazyMigrationLogger;
  BOOL _didCreateSqliteErrorFileForLightweightMigration;
  BOOL _isPostProcessingLightWeightMigration;
  NSObject<OS_dispatch_queue> *_fileSystemLoadQueue;
  NSObject<OS_dispatch_group> *_fileSystemLoadGroup;
}

@property (retain, nonatomic) NSFileManager *fileManager;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } containedObjectsLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } storeMetadataLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } lightweightMigrationLock;
@property (retain) NSProgress *progress;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } recordMigrationMetadataLock;
@property BOOL didRecordCurrentMigrationMetadata;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) BOOL cloudPhotoLibraryEnabled;
@property (copy) NSDictionary *options;
@property (readonly) PLCoreAnalyticsEventManager *analyticsEventManager;
@property (readonly, nonatomic) PLDeviceRestoreMigrationPostProcessingSupport *postProcessingToken;
@property (readonly) PLDeviceRestoreMigrationSupport *deviceRestoreMigrationSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)executeBatchDeleteWithEntityName:(id)name predicate:(id)predicate managedObjectContext:(id)context error:(id *)error;
+ (BOOL)executeBatchUpdateWithEntityName:(id)name predicate:(id)predicate propertiesToUpdate:(id)update managedObjectContext:(id)context error:(id *)error;
+ (BOOL)enumerateObjectsWithIncrementalSaveDefaultBatchSizeFetchRequest:(id)request managedObjectContext:(id)context count:(unsigned long long *)count error:(id *)error block:(id /* block */)block;
+ (BOOL)graphPersonResetRequiredForPreviousStoreVersion:(unsigned long long)version;
+ (BOOL)performFaceAnalysisResetWithResetLevel:(long long)level pathManager:(id)manager context:(id)context;
+ (int)currentModelVersion;
+ (BOOL)resetThumbnailIndexesAndInitiateThumbnailRebuildRequestIfSuccessfulForForThumbnailManager:(id)manager deferHintChanges:(BOOL)changes inContext:(id)context;
+ (BOOL)markAssetsWithThumbsForTableRebuildInContext:(id)context;
+ (BOOL)shouldPromptUserForLibrarySchemaMismatch;
+ (BOOL)waitForDataMigratorToExit;
+ (id)_readNumberWithKey:(id)key fromMetadataWithMOC:(id)moc pathManager:(id)manager error:(id *)error;
+ (BOOL)_readBooleanFlagWithKey:(id)key fromMetadataWithMOC:(id)moc pathManager:(id)manager;
+ (BOOL)_writeNumber:(id)number forKey:(id)key pathManager:(id)manager error:(id *)error;
+ (id)extractPathToAssetUUIDRecoveryMappingFromDatabasePath:(id)path;
+ (BOOL)shouldImportAssetsFromDCIMSubDirectoryAtURL:(id)url assetsKind:(int *)kind;
+ (id)schemaIncompatibilityDetailsForStoreMetadata:(id)metadata model:(id)model;
+ (BOOL)rebuildMomentsInContext:(id)context pathManager:(id)manager deleteExistingMoments:(BOOL)moments targetedAssetOIDs:(id)oids;

/* instance methods */
- (void)filesystemImportResultsUpdateKeywordWithImportedAssets:(id)assets;
- (BOOL)sceneStepRequiredForPreviousStoreVersion:(unsigned long long)version;
- (BOOL)markAllSceneAnalysisStatesDirtyAndClearDistanceIdentitiesInStoreAndClearSceneprints:(id)sceneprints;
- (BOOL)resetManualOrderForNonFavoritePeopleInManagedObjectContext:(id)context;
- (BOOL)resetManualOrderForNonFavoritePeopleInStore:(id)store;
- (BOOL)faceQualityResetRequiredForPreviousStoreVersion:(unsigned long long)version;
- (BOOL)resetFaceQualityInStore:(id)store;
- (BOOL)_markAllProcessedAnalysisStatesDirtyForWorkerType:(short)type withStartingWorkerFlags:(int)flags inStore:(id)store;
- (BOOL)deleteAllAssetAnalysisStatesInStore:(id)store;
- (BOOL)deleteAnalysisStatesInStore:(id)store forWorkerType:(short)type;
- (BOOL)fixupUnknownAnalysisStatesInStore:(id)store;
- (BOOL)fixupStatesWithUnreachableAssetUUIDsInStore:(id)store;
- (BOOL)touchAnalysisStateSortTokensInStoreInStore:(id)store;
- (BOOL)clearVisionWorkerCache;
- (BOOL)resetRejectedFacesOnAllPersonsInStore:(id)store;
- (BOOL)markAllDirtyFaceAnalysisStatesWithFaceDetectionWorkerFlagsInStore:(id)store;
- (BOOL)markUserConfirmedFacesAndCorrespondingFaceAnalysisStatesDirtyInStore:(id)store;
- (BOOL)resetAnalysisStateForVideosWithMoc:(id)moc;
- (BOOL)reconsiderAllowedForAnalysisOnAssetsMarkedNotAllowedInStore:(id)store;
- (id)initWithPathManager:(id)manager;
- (id)_migrationThumbnailManagerWithStore:(id)store;
- (id)newDeviceRestoreMigrationSupport;
- (id)migrationLogger;
- (void)migrationLoggerClose;
- (id)newShortLivedLibraryWithName:(const char *)name;
- (id)newShortLivedLibraryForRebuildWithName:(const char *)name;
- (BOOL)isCloudPhotoLibraryEnabled;
- (void)_validateCurrentModelVersionFailedWithNoVersionFromServer;
- (void)_validateCurrentModelVersionFailedWithMismatchedVersion:(long long)version;
- (void)_validateCurrentModelVersionAttempt:(long long)attempt;
- (void)validateCurrentModelVersion;
- (unsigned long long)_assetCountForStore:(id)store;
- (unsigned long long)_assetCountForLibrary:(id)library;
- (unsigned long long)_assetCountForContext:(id)context;
- (BOOL)postProcessThumbnailsOnlyIfVersionMismatchOrMissing:(BOOL *)missing coordinator:(id)coordinator;
- (BOOL)_fixIncorrectThumbnailTablesInStore:(id)store deferHintChanges:(BOOL)changes;
- (id)managedObjectContextForMigrationWithName:(const char *)name persistentStoreCoordinator:(id)coordinator concurrencyType:(unsigned long long)type;
- (id)managedObjectContextForMigrationInStore:(id)store name:(const char *)name concurrencyType:(unsigned long long)type;
- (BOOL)_verifyCloudAssetsLocalAvailability:(id)availability;
- (BOOL)_disableICloudPhoto;
- (BOOL)_forceSoftResetSync;
- (BOOL)_removeEvents:(id)events;
- (BOOL)debug_resetThumbnailsAndInitiateRebuildRequestInStore:(id)store;
- (long long)checkForceRebuildIndicatorFile;
- (long long)migrateOrCreateDatabaseIfNecessaryWithPersistentContainer:(id)container migrationPolicy:(unsigned int)policy error:(id *)error;
- (BOOL)shouldCreateDatabase;
- (BOOL)_createPhotoDataDirectoryIfNecessary:(BOOL *)necessary error:(id *)error;
- (long long)promptUserIfNeededForRebuildReason:(id)reason migrationError:(id)error;
- (long long)createNewDatabaseWithMigrationType:(long long)type forceRebuildReason:(id)reason coordinator:(id)coordinator error:(id *)error;
- (short)_migrationHistoryOriginFromLatestDataMigration;
- (void)_recordCurrentVersionMetadataIfNeededForDataMigrationInPersistentStore:(id)store;
- (BOOL)_recordCurrentVersionMetadataInPersistentStore:(id)store migrationType:(long long)type forceRebuildReason:(id)reason sourceModelVersion:(id)version updateLegacyMigrationState:(BOOL)state journalRebuildRequred:(BOOL)requred;
- (void)loadFileSystemAssetsNotifyEnter;
- (void)loadFileSystemAssetsNotifyLeave;
- (void)loadFileSystemAssetsNotifyCompleted:(id /* block */)completed;
- (void)loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)reason completionHandler:(id /* block */)handler;
- (void)loadFacesFileSystemDataIntoDatabase;
- (void)migratePersonContactInfo;
- (void)importAfterCrash:(id)crash dictionariesByPhotoStreamID:(id)id completionBlock:(id /* block */)block;
- (long long)legacyMigrationState;
- (BOOL)updateCompletedMigrationStateWithError:(id *)error;
- (BOOL)isPhotoLibraryDatabaseReadyForOpen:(id *)open;
- (id)archivedAssetUUIDForURL:(id)url;
- (void)archiveAssetUUIDForPathPlist:(id)plist;
- (id)generatePathToAssetUUIDRecoveryMapping;
- (id)_iTunesPhotosLastSyncMetadata;
- (void)_generateAlbumMetadataFromLastiTunesSyncedPlist;
- (id)_eventNameFromDate:(id)date;
- (void)_loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)reason progress:(id)progress;
- (BOOL)isLoadingFacesFromFileSystem;
- (void)setLoadingFacesFromFileSystem:(BOOL)system;
- (void)_loadFacesFileSystemDataIntoDatabase;
- (void)_migratePersonContactInfo;
- (void)handleGreenChanges:(id)changes;
- (void)cleanupModelForDataMigrationForRestoreType:(long long)type;
- (void)removeUnpairedTimelapsePreviewsInContext:(id)context fromDuplicatedUUIDs:(id)uuids;
- (void)_repairPotentialModelCorruptionInLibrary:(id)library;
- (void)dontImportFileSystemDataIntoDatabaseWithPhotoLibrary:(id)library;
- (void)forceImportFileSystemDataIntoDatabaseWithPhotoLibrary:(id)library;
- (void)pausePhotoStreams;
- (void)resumePhotoStreams;
- (void)_addUBFBundleScopedOrderedAssetsToImport:(id)import onDiskURLsToSkip:(id)skip;
- (void)_repairInProgressDCIMLockedAssetTransfersInOrderedAssetsToImport:(id)import baseDirectory:(id)directory photoDataLockedAssetsURL:(id)url photoDataCPLAssetsURL:(id)url photoStreamsBaseURL:(id)url;
- (void)_repairInProgressLockedAssetTransfersInOrderedAssetsToImport:(id)import;
- (id)_orderedAssetsToImportInLibrary:(id)library;
- (id)_orderedAssetsToImportInLibrary:(id)library cameraRollOnly:(BOOL)only;
- (void)_rebuildAssetsFromJournal:(id)journal inLibrary:(id)library progress:(id)progress progressFraction:(id)fraction;
- (void)_importAllDCIMAssetsInLibrary:(id)library progress:(id)progress progressFraction:(id)fraction rebuildComplete:(BOOL)complete;
- (void)_importAfterCrash:(id)crash dictionariesByPhotoStreamID:(id)id completionBlock:(id /* block */)block;
- (id)_dateWithiTunesTimeInterval:(double)interval;
- (id)_newSyncedPropertiesByAssetUUIDs:(BOOL)uuids;
- (void)_applySyncedProperties:(id)properties toAsset:(id)asset;
- (id)_syncedPropertiesForAssetUUID:(id)uuid;
- (void)_prepareForImportDeleteCorruptAssetsWithImporter:(id)importer context:(id)context;
- (id)_importFileSystemImportAssets:(id)assets intoLibrary:(id)library forceUpdate:(BOOL)update progress:(id)progress;
- (long long)attemptLightweightMigrationFromVersion:(id)version onStore:(id)store withMetadata:(id)metadata orStoreURL:(id)url options:(id)options coordinator:(id)coordinator migrationPolicy:(unsigned int)policy error:(id *)error;
- (void)_setIsPostProcessingLightWeightMigration:(BOOL)migration;
- (BOOL)validateModelEntityNames:(out id *)names;
- (BOOL)postProcessMigratedStore:(id)store migrationUUID:(id)uuid fromVersion:(int)version progress:(id)progress progressUnitCount:(unsigned long long)count;
- (BOOL)_shouldTriggerLightweightMigrationFailureForInternalTesting;
- (void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)asset fixAddedDate:(BOOL)date isMegaBackup:(BOOL)backup;
- (BOOL)processWelterweightMigrationStageOnStore:(id)store migrationUUID:(id)uuid fromVersion:(int)version toVersion:(int)version migrationContext:(id)context progress:(id)progress progressUnitCount:(unsigned long long)count;
- (BOOL)isPostProcessingLightweightMigration;
- (BOOL)_migrateTransformableUUIDsToStringsInStore:(id)store;
- (BOOL)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStagedStore:(id)store;
- (BOOL)_fixupBrokenBurstPicksInStore:(id)store;
- (BOOL)skipDataProtectionForFilePath:(id)path;
- (void)applyDataProtectionToAllPhotosFilesOnce;
- (BOOL)_postProcessFromVersion6006Store:(id)store;
- (BOOL)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)context error:(id *)error;
- (BOOL)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)store;
- (BOOL)_updateKindSubtypeForPanoramaPhotosNeedsReset:(BOOL)reset inStore:(id)store;
- (BOOL)_fixupImportedEventsInStore:(id)store;
- (BOOL)_fixupImportedAssetsInStore:(id)store;
- (BOOL)_fixupAlbumOrderInAlbumListInStore:(id)store;
- (BOOL)_resetAlbumToFolderOrderKeyForAlbums:(id)albums;
- (BOOL)_populateAlbumAndFolderOrderKeysInStagedStore:(id)store;
- (BOOL)_populateVideoCpFieldsInStagedStore:(id)store;
- (void)_populateFaceRegionsForAsset:(id)asset;
- (BOOL)_populateFaceRegionsInStore:(id)store;
- (BOOL)_fixupSharedStreamOrientationsInStore:(id)store;
- (BOOL)_fixupCloudResourcesInStore:(id)store;
- (BOOL)_fixupKeyAssetsForAlbumsInStore:(id)store;
- (BOOL)_cleanupInvalidAlbumsAndFoldersInStore:(id)store;
- (BOOL)_fixupSyncedAssetAttributesInStore:(id)store;
- (BOOL)rebuildTargetedMomentsInStore:(id)store targetedAssetOIDs:(id)oids;
- (BOOL)rebuildAllMomentsInStore:(id)store deleteExistingMoments:(BOOL)moments;
- (BOOL)_rebuildMomentsInStore:(id)store deleteExistingMoments:(BOOL)moments targetedAssetOIDs:(id)oids;
- (BOOL)_regenerateMonthHighlightTitlesWithStore:(id)store;
- (BOOL)_addUUIDsToCollectionLists:(id)lists skipMomentLists:(BOOL)lists;
- (BOOL)_addLocationHashesToAssets:(id)assets;
- (BOOL)_migrateAssetLocationData:(id)data;
- (BOOL)_removeInvalidAdjustmentResourceDataInStore:(id)store;
- (BOOL)_fixDuplicatedRootFolderAndOrphanedAlbumsInStore:(id)store;
- (BOOL)_setupRootFolderInStore:(id)store;
- (BOOL)_forceAlbumMetadataToDiskInStore:(id)store;
- (BOOL)_persistMetadataToFileSystemForAlbum:(id)album;
- (BOOL)_fixCorruptedOrientationsInStore:(id)store;
- (BOOL)_performChangesOnBatchFetchedObjects:(id)objects inMOC:(id)moc batchSize:(unsigned long long)size objectHandler:(id /* block */)handler error:(id *)error;
- (int)_migrateLegacySlomoAdjustmentsForAsset:(id)asset;
- (BOOL)_migrateLegacySlomoAdjustmentsInStore:(id)store fromLegacySLMFormat:(BOOL)slmformat;
- (BOOL)_fixAdjustedAssets:(id)assets;
- (BOOL)_fixVisibleBurstAsset:(id)asset;
- (BOOL)_fixDuplicatedAssets:(id)assets;
- (BOOL)_fixNonDuplicatedAssets:(id)assets adjusted:(BOOL)adjusted;
- (void)_removeFileAt:(id)at forResource:(id)resource;
- (BOOL)_validateOrDeleteFileAtPath:(id)path forCloudResource:(id)resource;
- (void)_fixPathForResource:(id)resource withPath:(id)path;
- (BOOL)_fixVideoJPGPath:(id)jpgpath;
- (BOOL)_resetFailedAssets:(id)assets;
- (BOOL)_resetFailedCloudMasters:(id)masters;
- (BOOL)_resetUploadAttempts:(id)attempts;
- (BOOL)_fixCloudMasterCloudLocalState:(id)state;
- (BOOL)_populateRepresentativeAssets:(id)assets;
- (BOOL)_populateLatLongInAsset:(id)asset;
- (BOOL)_persistMemoriesInStore:(id)store;
- (BOOL)_persistPersonsInStore:(id)store;
- (BOOL)_removeOldPersonMetadataInStore:(id)store;
- (BOOL)_populateNilOriginalFilenameOnMaster:(id)master;
- (BOOL)_populateNilOriginalFilename:(id)filename;
- (BOOL)_flattenUnknownCustomRenderedValues:(id)values;
- (id)_dateForFirstCRVSPhoto;
- (BOOL)_fixCustomRenderedValues:(id)values;
- (BOOL)_deleteAllMemoriesInStore:(id)store;
- (BOOL)_applyDataProtectionToDCIMFromClassBToClassC;
- (BOOL)_removeCameraRollInStore:(id)store;
- (BOOL)_fixLastPrefetchDateInStore:(id)store;
- (BOOL)_fixLocallyAvailableFlagForThumbnailsInStore:(id)store;
- (BOOL)_updateKeyAssetInMemory:(id)memory;
- (BOOL)_fixMemoriesWithAssetLists:(id)lists;
- (BOOL)_processDeletesForUUIDs:(id)uuids;
- (BOOL)_deleteOrphanedUnverifiedPeople:(id)people;
- (void)_handleCreateOptionsUsingContext:(id)context;
- (BOOL)_fixAlbumAndFolderSortAscending:(id)ascending;
- (BOOL)_fixFaceAlgorithmVersion:(id)version;
- (BOOL)_fixKeywordsInStagedStore:(id)store;
- (BOOL)_repersistDuplicatedAssets:(id)assets;
- (BOOL)_generateAddedDateForAssetsInStore:(id)store;
- (BOOL)_isReasonableCreationDate:(id)date;
- (BOOL)fixPossiblyIncorrectAddedDateForAsset:(id)asset;
- (BOOL)_fixIncorrectAddedDateForAssetsInStore:(id)store;
- (BOOL)_addCameraCaptureDeviceForAssetsInStore:(id)store;
- (BOOL)_tagScreenshotsForAssetsInStore:(id)store;
- (BOOL)_addCloudKindSubtypeAndBurstFlagsInStore:(id)store;
- (BOOL)_fixupSharedVideosWithoutThumbnailsInStore:(id)store;
- (BOOL)_fixCloudSharedVideosInStore:(id)store;
- (BOOL)_fixCloudSharedGIFsInStore:(id)store;
- (BOOL)_fixOriginalPropertiesForCloudSharedAssetsInStore:(id)store;
- (BOOL)_purgeCloudSharedResourcesInStore:(id)store;
- (BOOL)_moveCloudSharedDerivativesInStore:(id)store;
- (BOOL)_saveChangesToPhotoIrisInStore:(id)store matchingPredicate:(id)predicate countChanged:(unsigned long long *)changed error:(id *)error changeBlock:(id /* block */)block;
- (BOOL)_markOldPhotoIrisEditsEvaluatedInStore:(id)store;
- (BOOL)_persistPhotoIrisVisibilityStateToDiskInStore:(id)store;
- (BOOL)_fixWhitelistOwnerForPendingInvitationsInStore:(id)store;
- (BOOL)_repushMemoriesWithNewFeaturesInStore:(id)store;
- (BOOL)_fixZeroDurationPhotoIrisWithLocalResourcesInStore:(id)store assumeAdjustedIrisIsVisible:(BOOL)visible;
- (BOOL)_markPhotoIrisVideoOrphansInStore:(id)store;
- (BOOL)_fixItemIdentifierForVideoCmplInStore:(id)store;
- (BOOL)_fixLocalPathForVideoCmplDerivativesInStore:(id)store;
- (BOOL)_fixEmptyVideoResourcePathsInStore:(id)store;
- (BOOL)_populateHasAdjustmentsForAssetsInStore:(id)store;
- (BOOL)_fixVideoDimensionsForAsset:(id)asset;
- (BOOL)_fixVideoDimensionsInStore:(id)store;
- (BOOL)_persistPlaceAnnotationData:(id)data;
- (BOOL)_persistVideoComplPropertiesInStore:(id)store;
- (BOOL)_fixupAssetPersistence:(id)persistence;
- (BOOL)_moveMyPhotoStreamToAlbumsListInStore:(id)store;
- (BOOL)_performMigrationCacheDateCreatedOnResources:(BOOL)resources cacheItemIdentifierOnResources:(BOOL)resources store:(id)store;
- (BOOL)_migrateOriginalColorSpaceInStagedStore:(id)store;
- (BOOL)_migrateRejectedFacesGroupInStagedStore:(id)store;
- (BOOL)_migrateDetectedFacesGroupInStagedStore:(id)store;
- (BOOL)_removeInvalidImportSessionAlbums:(id)albums;
- (BOOL)_createImportSessionAlbums:(id)albums;
- (BOOL)_persistImportSessionAlbumType:(id)type;
- (BOOL)_setImportedByInPLCloudMaster:(id)master;
- (BOOL)_revalidateImportSessionDates:(id)dates;
- (BOOL)_migrateCloudResourcesRelationshipsInStagedStore:(id)store;
- (BOOL)_populateAdjustmentTimestampsOnAssets:(id)assets;
- (BOOL)_populateUserKeyFacePickSourceForPersonInStore:(id)store;
- (BOOL)_convertNameSourceFromBoolToIntForDeferredRebuildFaceInStore:(id)store;
- (BOOL)_removingDuplicatedCloudAssetGuid:(id)guid;
- (BOOL)_fixInitialSyncMarker;
- (BOOL)_removeAutoloopWorkerStatesInStore:(id)store;
- (BOOL)_setPlaybackStyleForAnimatedGIFsInStore:(id)store;
- (BOOL)_fixMovieAttributesInStore:(id)store;
- (BOOL)_updatePlaybackWithBatchUpdateRequest:(id)request targetDescription:(id)description inContext:(id)context;
- (BOOL)_updatePlaybackStylesAndVariationsInStore:(id)store;
- (BOOL)_runMigrationStepWithPrettyFunction:(const char *)function store:(id)store migrationHandler:(id /* block */)handler;
- (BOOL)_runMigrationStepWithName:(id)name fetchRequest:(id)request store:(id)store migrationHandler:(id /* block */)handler;
- (id)_dateForVariations;
- (BOOL)_identifyVariationsAndDepthAdjustmentsForAsset:(id)asset;
- (id)_fetchRequestToIdentifyBakedInVariationsCandidatesIncludingLongExposure:(BOOL)exposure;
- (id)_fetchRequestToIdentifyAdjustedDepthAndVariationsCandidates;
- (BOOL)_identifyVariationsAndDepthAdjustmentsIncludingBakedInLongExposure:(BOOL)exposure inStore:(id)store;
- (BOOL)_nukeWallpaperRemnantsInStore:(id)store;
- (BOOL)_deletePersistentHistoryInStore:(id)store;
- (BOOL)_addUUIDsToExistingKeywordsInStore:(id)store;
- (BOOL)_updateSuggestionStartAndEndDatesInStore:(id)store;
- (BOOL)_deleteOrphanedExtendedAttributes:(id)attributes;
- (BOOL)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)assets inManagedObjectContext:(id)context error:(id *)error;
- (BOOL)_deleteCloudSharedAndSynced:(BOOL)synced assetReferencesInStore:(id)store;
- (BOOL)_deletePhotoStreamAssetReferencesInStore:(id)store;
- (BOOL)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)context error:(id *)error;
- (void)repairSingletonObjectsInDatabase;
- (void)_failed_repairSingletonObjectsWithMissingLibraryDirectory;
- (void)_failed_repairSingletonObjectsWithInvalidFileTypeLibraryDirectory;
- (void)_failed_repairSingletonObjectsWithMissingDatabaseFile;
- (void)_failed_repairSingletonObjectsWithInvalidDatabaseFile;
- (void)_failed_repairSingletonObjectsWithNoPersistentStores;
- (void)_failed_repairSingletonObjectsInNewDatabaseWithNoPersistentStores;
- (void)_failed_repairSingletonObjectsWithErrorTypePLPhotosErrorLibraryRequiresMigration;
- (void)_failed_repairSingletonObjectsWithErrorTypePLPhotosErrorLibraryTooNew;
- (void)_failed_repairSingletonObjectsWithErrorTypePLPhotosErrorInvalidState;
- (void)_failed_repairSingletonObjectsWithErrorTypePLPhotosErrorInvalidURL;
- (void)_failed_repairSingletonObjectsWithErrorTypeOtherPhotosError;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_CORRUPT;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_NOTADB;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_FULL;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_PERM;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_CANTOPEN;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_ERROR;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_LOCKED;
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_MISUSE;
- (void)_failed_repairSingletonObjectsWithErrorTypeOtherSQLiteError;
- (void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreOpenError;
- (void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreTimeoutError;
- (void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreIncompatibleVersionHashError;
- (void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreIncompatibleSchemaError;
- (void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreTypeMismatchError;
- (void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreInvalidTypeError;
- (void)_failed_repairSingletonObjectsWithErrorTypeNSCoreDataError;
- (void)_failed_repairSingletonObjectsWithErrorTypeOtherCoreDataError;
- (void)_failed_repairSingletonObjectsWithError:(id)error;
- (void)_failed_repairSingletonObjectsWithNilContextError:(id)error;
- (void)_failed_repairSingletonObjectsInNewDatabaseWithNilContextError:(id)error;
- (void)_failed_repairSingletonObjectsInNewDatabaseWithRepairError:(id)error;
- (void)_failed_repairSingletonObjectsWithRepairError:(id)error;
- (void)_failed_recordCurrentVersionMetadata;
- (void)_repairMetadataAndSingletonsForMigrationType:(long long)type forceRebuildReason:(id)reason journalRebuildRequired:(BOOL)required;
- (BOOL)_recoverSingleBurstPhotos:(id)photos;
- (BOOL)_setUserTypeOnKeyFace:(id)face;
- (BOOL)_refreshTriggerValues:(id)values;
- (BOOL)_fixMergedPeopleThatShouldBeVerified:(id)verified;
- (BOOL)_fixRejectedKeyFace:(id)face;
- (BOOL)_trimInvalidAlbumAssetsMappingRecords;
- (BOOL)_fixupCroppedUnadjustedAssets:(id)assets;
- (BOOL)_fixCustomKeyAssetForAlbum:(id)album;
- (BOOL)_removeUntrackedCloudResourceImageDerivativesInStore:(id)store;
- (id)_dateForWideGamutCapture;
- (BOOL)_rebuildWideCaptureThumbsInStore:(id)store;
- (BOOL)_tryToPromoteUnknownAssetsInStore:(id)store;
- (BOOL)_fixMasterCloudLocalStateEnum:(id)enum;
- (BOOL)_fixTrashedDate:(id)date;
- (BOOL)_fixZeroTrashedDateForEntityName:(id)name inManagedObjectContext:(id)context;
- (BOOL)_populateCloudResourceLocalStateInStor:(id)stor;
- (BOOL)_fixRawWithZeroDimensions:(id)dimensions;
- (BOOL)_fixIncorrectHeifMetadataInStore:(id)store;
- (void)_fixIncorrectHeifMetadataForAsset:(id)asset;
- (id)_predicateForInconsistentHeifAssets;
- (BOOL)_repushAssetsMatchingPredicate:(id)predicate inStore:(id)store withMaster:(BOOL)master;
- (BOOL)_repushAssetsWithAnyUserConfirmedFaceInStore:(id)store;
- (BOOL)_fixAssetMasterResources:(id)resources;
- (BOOL)_fixNilCloudMasterGUID:(id)guid;
- (BOOL)_persistStoreUUIDToMobileCPLPlist:(id)cplplist;
- (BOOL)_repushPersonsWithMergeTargetInStore:(id)store;
- (BOOL)_deletePersonsMissingUUIDInStore:(id)store;
- (BOOL)_retryQuarantinedAssetsAndFixResourceRelation:(id)relation;
- (BOOL)_unquarantinedQuarantinedItems:(id)items;
- (BOOL)_unquarantineClass:(Class)class inManagedObject:(id)object;
- (BOOL)_fixUTIforSlowMoInStore:(id)store;
- (BOOL)_removeAutoloopCacheIfExists;
- (BOOL)_storeContainsFaceCrops:(id)crops success:(BOOL *)success;
- (BOOL)_markMigrationVerifiedTypePersonsInStore:(id)store;
- (BOOL)_populateCloudNameSourceOnFacesInStore:(id)store;
- (BOOL)_populateCloudVerifiedTypeOnPersonsInStore:(id)store;
- (BOOL)_removeUntrackedPersonMetadataInStore:(id)store;
- (BOOL)_ensureAllUserVerifiedPersonsHaveFaceCropsInStore:(id)store;
- (BOOL)_filterSceneClassificationsInStore:(id)store;
- (BOOL)_deleteVideoThumbsMadeFromPreferredFrameInStore:(id)store;
- (BOOL)_resetAnalysisStateForVideosInStore:(id)store;
- (BOOL)_fixImportedAssetsFromCMMSavedInDCIMWithWrongSavedAssetType:(id)type;
- (BOOL)_deleteExtraneousAdjustedFullSizeResourcesForSloMoAssetsWithStore:(id)store;
- (BOOL)_updateMissingFileSystemVolumeUuidInStore:(id)store;
- (BOOL)_updateCPLMarkerFiles;
- (BOOL)_updateAlbumDatesInStore:(id)store;
- (BOOL)_fixKindSubtypeForLoopingVideoLivePhotosInStore:(id)store;
- (BOOL)_fixWhiteBalanceValuesInStore:(id)store;
- (BOOL)_fixHasLocationSmartAlbum:(id)album;
- (BOOL)_reconstructImageExtendedAttributes:(id)attributes;
- (BOOL)_removeUnneededAnalysisStateTableEntries:(id)entries;
- (BOOL)_fixSidecarUTIsAndDataStoreSubtype:(id)subtype;
- (BOOL)_fixUTIForRDMigrationInStore:(id)store;
- (BOOL)_regenerateSharedStreamsDataStoreKeysDataInStore:(id)store deferHintChanges:(BOOL)changes;
- (BOOL)_fixLocationValuesInStore:(id)store;
- (BOOL)_invalidateReverseGeocodingDataInStore:(id)store;
- (BOOL)_emptyResourceTablesInStagedStore:(id)store;
- (BOOL)_migrateVideoKeyFrameTimeValuesInStagedStore:(id)store;
- (BOOL)migratePurgeableResources;
- (BOOL)_renumberLocalAvailabilityAndLocalAvailabilityTargetsInStore:(id)store;
- (BOOL)_migrateVersionSpecific1kResourcesInStore:(id)store deferHintChanges:(BOOL)changes;
- (BOOL)_fixupResourceTypeUnknownInStore:(id)store;
- (BOOL)_regenerateReferenceKeyDataInStore:(id)store;
- (BOOL)_requestAvailabilityChangeForAssetsMissing1kResourcesInStore:(id)store;
- (BOOL)_move1kResourcesOutOfMastersDir:(id)dir;
- (BOOL)_verifyAndFixBrokenLocalAvailabilityForResourceWithFileIDsInStore:(id)store;
- (BOOL)_relocateCPLMarkerFiles;
- (BOOL)_cleanupLegacyFiles;
- (BOOL)relocateOriginalUBFPaths:(id)ubfpaths;
- (BOOL)_removeCloudSharedFileAtPath:(id)path withFileManager:(id)manager error:(id *)error;
- (BOOL)_removeAllSharedAssetDCIMFilesInStore:(id)store;
- (BOOL)_fixSharedStreamVideoResourcesInStore:(id)store;
- (BOOL)_fixUploadedButNotRemotelyAvailalbeCPLResourcesInStore:(id)store;
- (BOOL)_fixUnpushedVideoComplementResourcesInStore:(id)store;
- (BOOL)_fixAdjustedFingerprintsInStore:(id)store;
- (BOOL)_fixInvalidPostMigrationFileSystemImportedAssets:(id)assets;
- (BOOL)_scavengeCameraProcessingAdjustmentMetadataForAssetsInStore:(id)store;
- (BOOL)_runPairingForAssetsInStore:(id)store;
- (BOOL)_repairOrphanedProjectAlbumsInStore:(id)store;
- (BOOL)_repushAllUserSmartAlbum:(id)album;
- (BOOL)_repairTableThumbFragmentation;
- (BOOL)_repairLegacyMigrationDuplicateVersionCloudResources:(id)resources;
- (BOOL)_migrateCandidateBitsToDeferredProcessingCandidateOptions:(id)options;
- (BOOL)_moveGpsHorizontalAccuracyToNewAttribute:(id)attribute;
- (BOOL)_migrateMetadataAndMigrationHistoryWithStore:(id)store;
- (BOOL)_repairReframedAssetsWithoutSOCAvailableBitWithStore:(id)store;
- (BOOL)_clearAvalancheUUIDOnCloudSharedAssetsWithStore:(id)store;
- (BOOL)_copyAssetDescriptionToAccessibilityDescription:(id)description;
- (BOOL)_removeAllLocalVideoKeyFrameResourcesRevert14037InStore:(id)store;
- (BOOL)_removeResourceModelManualIdentityConstraintInStore:(id)store;
- (BOOL)_repairCTMOriginalVideosWithSOCAvailableBitInStore:(id)store;
- (BOOL)_persistResourceTypeAttributeOnAlternateImageResourcesInStore:(id)store;
- (BOOL)_addRAWPackedBadgeAttributeForAllRAWAssetsInStore:(id)store;
- (BOOL)_addLocalVideoKeyFrameResourceInStore:(id)store deferHintChanges:(BOOL)changes;
- (BOOL)_repairCTMOriginalVideosWithoutAdjustmentsInStore:(id)store;
- (BOOL)_refactorLargeVideoRecipeResourcesInStore:(id)store;
- (BOOL)_removeDuplicatedCloudSharedComments:(id)comments;
- (BOOL)_invalidateZeroHDRGainInStore:(id)store;
- (BOOL)_resetDeferredRepairAdjustmentFailureAndCloudRecoveryStateInStore:(id)store;
- (BOOL)_resetAssetLocationShiftingAndRevGeoInStore:(id)store;
- (id)_loadOriginalVideoMetadataFromAsset:(id)asset timeZoneLookup:(id)lookup error:(id *)error;
- (BOOL)_updateMogulSubtypeAndSetHighFrameRateStateOnAssetsInStore:(id)store;
- (BOOL)_convertAssetDepthStatesToDepthTypeInStore:(id)store;
- (void)_convertImplicitDownloadAndKeepOriginalsEnabledToExplicit;
- (BOOL)_unQuarantineAssetsIfPossibleInStore:(id)store;
- (BOOL)_resetLimitedLibraryFilterDataInStore:(id)store;
- (BOOL)_repairDuplicateSingletonFetchingAlbumsInStore:(id)store;
- (BOOL)_deleteEmptyFolderWithProjectRootCloudGUIDOfWrongKindInStore:(id)store;
- (BOOL)_deleteLocalVideoKeyFrameResourcesForNonVideosInStore:(id)store deferHintChanges:(BOOL)changes;
- (BOOL)_discardUnusedCustomRenderedValuesInStore:(id)store;
- (BOOL)_migrateResourceUTIAndCodecInStagedStore:(id)store;
@end

#endif /* PLModelMigrator_h */