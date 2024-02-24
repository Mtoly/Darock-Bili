//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLEngineTransientRepository_h
#define CPLEngineTransientRepository_h
@import Foundation;

#include "CPLEngineStorage.h"
#include "CPLAbstractObject-Protocol.h"
#include "CPLPlatformObject.h"

@class BOOL *, NSString;

@interface CPLEngineTransientRepository : CPLEngineStorage<CPLAbstractObject>

@property (readonly, nonatomic) unsigned long long countOfUnmingledRecords;
@property (nonatomic) unsigned long long maximumCountOfRecordsInBatches;
@property (readonly, nonatomic) BOOL hasUnmingledChanges;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)orderedClassesForDelete;
+ (id)orderedClassesForChanges;
+ (id)orderedClassesForChangesForLargeSync;

/* instance methods */
- (id)initWithEngineStore:(id)store name:(id)name;
- (unsigned long long)scopeType;
- (BOOL)hasUnmingledChangesForScope:(id)scope;
- (id)batchStorageForScope:(id)scope;
- (id)cachedRecordWithScopedIdentifier:(id)identifier;
- (BOOL)shouldKeepDeleteChange:(id)change forRecordWithScopedIdentifier:(id)identifier;
- (BOOL)deleteRecordsForScopeIndex:(long long)index maxCount:(long long)count deletedCount:(long long *)count error:(id *)error;
- (BOOL)hasRecordWithScopedIdentifier:(id)identifier;
- (id)changeWithScopedIdentifier:(id)identifier;
- (BOOL)hasStashedRecordWithScopedIdentifier:(id)identifier;
- (id)_sharedDeleteFromDelete:(id)delete;
- (BOOL)_appendBatchToStorage:(id)storage alreadyMingled:(BOOL)mingled countOfAssetChanges:(unsigned long long *)changes error:(id *)error;
- (BOOL)appendBatch:(id)batch alreadyMingled:(BOOL)mingled countOfAssetChanges:(unsigned long long *)changes error:(id *)error;
- (id)nextBatchOfRemappedRecordsInScope:(id)scope maximumCount:(unsigned long long)count;
- (BOOL)popChangeBatchOfRemappedRecords:(id *)records scope:(id)scope maximumCount:(unsigned long long)count error:(id *)error;
- (id)unmingledChangeWithScopedIdentifier:(id)identifier;
- (id)allUnmingledChangesWithClass:(Class)class scopeIdentifier:(id)identifier;
- (id)allUnmingledNonDeletedChangesWithClass:(Class)class scopeIdentifier:(id)identifier;
- (id)allUnmingledDeletedChangesWithClass:(Class)class scopeIdentifier:(id)identifier;
- (id)allUnmingledChangesWithClass:(Class)class relatedScopedIdentifier:(id)identifier;
- (id)allUnmingledChangesWithScopeIdentifier:(id)identifier;
- (BOOL)markUnmingledChangeWithScopedIdentifierAsMingled:(id)mingled error:(id *)error;
- (BOOL)hasMingledRecordsForScopeWithIdentifier:(id)identifier;
- (BOOL)hasUnmingledNonStashedRecordsForScopeWithIdentifier:(id)identifier;
- (BOOL)hasOnlyMingledRecordsWithScopeIdentifier:(id)identifier;
- (BOOL)resetMingledRecordsForScopeWithIdentifier:(id)identifier error:(id *)error;
- (BOOL)resetMingledRecordsWithScopeFilter:(id)filter error:(id *)error;
- (BOOL)deleteMingledRecordsForScopeWithIdentifier:(id)identifier error:(id *)error;
- (BOOL)resetTransientRepositoryForScopeWithIdentifier:(id)identifier error:(id *)error;
- (BOOL)hasUnmingledOrStashedRecordsWithScopeFilter:(id)filter;
- (BOOL)stashChangeWithScopedIdentifier:(id)identifier error:(id *)error;
- (BOOL)unstashRecordsForScopeWithIdentifier:(id)identifier maxCount:(unsigned long long)count hasMore:(BOOL *)more error:(id *)error;
- (BOOL)hasStashedChangesForScopeWithIdentifier:(id)identifier;
- (BOOL)openWithError:(id *)error;
@end

#endif /* CPLEngineTransientRepository_h */