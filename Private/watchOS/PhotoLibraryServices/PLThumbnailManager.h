//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLThumbnailManager_h
#define PLThumbnailManager_h
@import Foundation;

#include "PLThumbnailManagerCore.h"

@class NSLock, NSMutableArray, NSMutableSet, NSPersistentStore, PLLazyObject;

@interface PLThumbnailManager : PLThumbnailManagerCore {
  /* instance variables */
  NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
  NSMutableSet *_requestedThumbnailFixAssets;
  NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
  NSLock *_fixLock;
  BOOL _shouldRebuildThumbnails;
  BOOL _didCheckShouldRebuildThumbnails;
  BOOL _hasExceededThumbnailRebuildRequestLimit;
  BOOL _isRebuildingThumbnails;
  NSPersistentStore *_migrationStore;
  PLLazyObject *_slowPersistenceManagers;
}

@property (retain, nonatomic) id observerToken;

/* class methods */
+ (id)_thumbnailRebuildIndicatorPathWithPathManager:(id)manager;
+ (id)thumbnailIdentifierWithAssetUUID:(id)uuid directory:(id)directory filename:(id)filename bundleScope:(unsigned short)scope pathManager:(id)manager;
+ (BOOL)hasRebuildingThumbnailsIndicatorAndRebuildingWithPathManager:(id)manager;
+ (id)masterThumbFilename;

/* instance methods */
- (id)_contextForConfigurationChanges;
- (id)initWithPhotoLibraryPathManager:(id)manager storeFromMigration:(id)migration;
- (void)dealloc;
- (id)imageTableForFormat:(unsigned short)format;
- (id)imageTableForFormat:(unsigned short)format readOnly:(BOOL)only;
- (void)removeObsoleteMetadata;
- (BOOL)wantsTableOnlyRebuild;
- (void)reStampConfigAsNeedingTableThumbMigration;
- (void)_removeMasterThumbDirectoriesWithFileManagerDelegate:(id)delegate;
- (BOOL)resetThumbnailsWithResetType:(long long)type deferHintChanges:(BOOL)changes inContext:(id)context;
- (BOOL)resetThumbnailsForced:(BOOL)forced isMissingTables:(BOOL)tables inContext:(id)context;
- (long long)removeAllThumbnailsInContextForUrgentCacheDeleteRequest:(id)request dryRun:(BOOL)run count:(unsigned long long *)count;
- (void)addRebuildThumbnailsRequest;
- (BOOL)hasRebuildThumbnailsRequest;
- (void)removeRebuildThumbnailsRequest:(const char *)request;
- (void)_recordRebuildThumbnailsAttempt;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (id)_missingThumbnailPredicate;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)limit library:(id)library error:(id *)error;
- (BOOL)hasMissingThumbnailsInLibrary:(id)library;
- (id)_rebuildThumbnailsQueue;
- (void)continueRebuildingTableThumbsInLibrary:(id)library;
- (void)rebuildAllMissingThumbnailsInLibrary:(id)library;
- (BOOL)isRebuildingThumbnails;
- (BOOL)hasExceededRebuildThumbnailRequestLimit;
- (void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)library;
- (struct CGImage *)newImageForAsset:(id)asset format:(id)format;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)identifier;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)identifier withToken:(id)token;
- (id)newSlowPersistenceManagers;
- (void)discardCachedThumbnailDownscalerContexts;
- (BOOL)_performUncompressedTableDownscaleIntoDatas:(id)datas image:(id)image assetUUID:(id)uuid;
- (BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)identifier thumbnailIndex:(unsigned long long)index image:(id)image assetUUID:(id)uuid;
- (void)setThumbnailsForAsset:(id)asset withImage:(id)image;
- (BOOL)setThumbnailsForThumbIdentifier:(id)identifier thumbnailIndex:(unsigned long long)index assetUUID:(id)uuid kind:(short)kind extension:(id)extension withImage:(id)image;
- (void)deleteThumbnailsWithIdentifier:(id)identifier orIndex:(unsigned long long)index uuid:(id)uuid;
- (id)dataForPhoto:(id)photo format:(unsigned short)format allowPlaceholder:(BOOL)placeholder width:(int *)width height:(int *)height bytesPerRow:(int *)row dataWidth:(int *)width dataHeight:(int *)height imageDataOffset:(int *)offset;
- (void)preheatThumbnailDataWithFormat:(unsigned short)format thumbnailIndexes:(id)indexes;
- (id)placeholderDataForFormat:(unsigned short)format photoImageSize:(struct CGSize { double x0; double x1; })size width:(int *)width height:(int *)height bytesPerRow:(int *)row dataWidth:(int *)width dataHeight:(int *)height imageDataOffset:(int *)offset;
- (id)_tableDescriptions;
- (long long)_diskFootprintOfTableThumbnailTables;
- (id)indexStatisticsForLibrary:(id)library;
- (id)thumbnailJPEGPathForPhoto:(id)photo;
- (BOOL)_thumbnailLoadingAssetIsHiddenOrTrashed:(id)trashed;
- (id)_dataForAsset:(id)asset format:(unsigned short)format width:(int *)width height:(int *)height bytesPerRow:(int *)row dataWidth:(int *)width dataHeight:(int *)height imageDataOffset:(int *)offset imageDataFormat:(unsigned short *)format;
- (unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)id;
- (id)thumbManagerForFormatID:(unsigned short)id;
- (id)thumbManagerForFormatID:(unsigned short)id readOnly:(BOOL)only;
@end

#endif /* PLThumbnailManager_h */