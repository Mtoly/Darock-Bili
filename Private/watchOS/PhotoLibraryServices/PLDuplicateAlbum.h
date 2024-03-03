//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLDuplicateAlbum_h
#define PLDuplicateAlbum_h
@import Foundation;

#include "PLManagedAlbum.h"

@class NSSet;

@interface PLDuplicateAlbum : PLManagedAlbum

@property (@dynamic, nonatomic) long long processingVersion;
@property (@dynamic, nonatomic) short duplicateType;
@property (retain, @dynamic, nonatomic) NSSet *metadataMatchingAssets;
@property (retain, @dynamic, nonatomic) NSSet *perceptualMatchingAssets;

/* class methods */
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)library;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)context;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)context type:(short)type;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)context predicate:(id)predicate;

/* instance methods */
- (void)awakeFromInsert;
- (id)mutableMetadataMatchingAssets;
- (id)mutablePerceptualMatchingAssets;
- (void)addAssets:(id)assets type:(short)type;
- (void)removeInternalAssets:(id)assets;
- (void)updateAlbumType;
- (BOOL)supportsAssetOrderKeys;
- (id)duplicateAssetsFromCollection;
- (void)sortAssets;
- (BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:(id)assets;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)asset duplicateAssetVisibilityState:(short)state;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)assets;
- (id)albumAssetsFetchRequestForDuplicateSort;
- (void)removeAssetsAtIndexes:(id)indexes;
- (void)cleanupAlbumForDeletedDuplicateAsset;
@end

#endif /* PLDuplicateAlbum_h */