//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFBFactorPackStorage_h
#define TRIFBFactorPackStorage_h
@import Foundation;

#include "TRIAssetExtracting-Protocol.h"

@protocol TRIPaths;

@interface TRIFBFactorPackStorage : NSObject {
  /* instance variables */
  NSObject<TRIPaths> *_paths;
  NSObject<TRIAssetExtracting> *_extractor;
}

/* class methods */
+ (id)relPathForMAReferenceWithFactorName:(id)name;

/* instance methods */
- (id)init;
- (id)initWithPaths:(id)paths extractor:(id)extractor;
- (id)initWithPaths:(id)paths;
- (void)useNamespaceIdInSchema:(BOOL)schema;
- (BOOL)saveFactorLevelsForFactorPack:(id)pack populatingAssetsForFactorNames:(id)names aliasToUnaliasMap:(id)map factorLevelsByNamePath:(id *)path factorLevelsByIdPath:(id *)path;
- (BOOL)saveFactorPackToGlobal:(id)global forFactorNames:(id)names aliasToUnaliasMap:(id)map;
- (id)_writeFactorPack:(id)pack futurePath:(id)path forFactorNames:(id)names aliasToUnaliasMap:(id)map assetStore:(id)store tempDirRef:(id)ref;
- (id)loadFactorLevelsWithFactorPackId:(id)id namespaceName:(id)name;
- (id)loadFactorLevelsWithDir:(id)dir bufferSize:(unsigned long long *)size;
- (BOOL)updateSavedFactorLevelsWithFactorPackId:(id)id namespaceName:(id)name populatingAssetsForFactorNames:(id)names aliasToUnaliasMap:(id)map;
- (BOOL)updateSavedGlobalFactorPackAt:(id)at populatingAssetsForFactorNames:(id)names;
- (BOOL)_linkAssetsUpdatingFactorLevel:(id)level fromFactorPackWithId:(id)id usingAssetStore:(id)store currentFactorPackPath:(id)path futureFactorPackPath:(id)path;
- (id)_linkAssetsForFactorNames:(id)names aliasToUnaliasMap:(id)map copyingModifiedFactorLevelsWithPath:(id)path tempDirRef:(id)ref;
- (id)_linkAssetWithId:(id)id assetStore:(id)store forFactorName:(id)name currentFactorPackPath:(id)path futureFactorPackPath:(id)path;
- (BOOL)_referenceMAAssetWithId:(id)id assetStore:(id)store forFactorName:(id)name isFileFactor:(BOOL)factor currentFactorPackPath:(id)path futureFactorPackPath:(id)path;
- (BOOL)updateSavedFactorLevelsWithFactorPackId:(id)id namespaceName:(id)name deletingAssetsWithFactorNames:(id)names inUseAssetBehavior:(unsigned char)behavior;
- (BOOL)updateSavedGlobalFactorPackAt:(id)at deletingAssetsWithFactorNames:(id)names;
- (id)_removeAssetsWithFactorNames:(id)names copyingModifiedFactorLevelsWithPath:(id)path appendingToPathsToRemove:(id)remove appendingToMARefsToRemove:(id)remove tempDirRef:(id)ref;
- (id)pathForFactorLevelsWithFactorPackId:(id)id namespaceName:(id)name;
- (id)_pathForFactorLevelsWithFactorPackId:(id)id namespaceName:(id)name;
- (id)_parentDirForFactorLevelsWithNamespaceName:(id)name;
- (id)legacyPathForFactorLevelsWithFactorPackId:(id)id namespaceName:(id)name;
- (id)_legacyPathForFactorLevelsWithFactorPackId:(id)id namespaceName:(id)name;
- (id)_legacyParentDirForFactorLevelsWithNamespaceName:(id)name;
- (BOOL)removeUnreferencedFactorLevelsWithRemovedCount:(unsigned int *)count;
- (BOOL)_removeUnreferencedFactorPackSetsWithNamespaceName:(id)name removedCount:(unsigned int *)count;
- (BOOL)_removeUnreferencedFactorPackSetsWithParentDir:(id)dir removedCount:(unsigned int *)count;
- (void)reportFactorPackDiskUsagesUsingContext:(id)context;
- (void)_reportFactorPackDiskUsagesWithNamespaceName:(id)name namespaceDirName:(id)name context:(id)context;
- (BOOL)removeUnreferencedGlobalFactorPacksWithRemovedCount:(unsigned int *)count;
- (id)_globalFactorPackProviderPlist;
@end

#endif /* TRIFBFactorPackStorage_h */