//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBLocalZone_h
#define HMBLocalZone_h
@import Foundation;

#include "HMFObject.h"
#include "HMBLocalDatabase.h"
#include "HMBLocalSQLContext.h"
#include "HMBLocalZoneConfiguration.h"
#include "HMBLocalZoneDelegate-Protocol.h"
#include "HMBLocalZoneID-Protocol.h"
#include "HMBMirrorProtocol-Protocol.h"
#include "HMBModelContainer.h"
#include "HMFLogging-Protocol.h"

@class NAFuture, NSHashTable, NSMutableDictionary, NSString;

@interface HMBLocalZone : HMFObject<HMFLogging> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
}

@property (readonly, nonatomic) NSHashTable *observersForAllModels;
@property (readonly, nonatomic) NSMutableDictionary *modelObserversByModelID;
@property (readonly, nonatomic) NSHashTable *mirrorOutputObservers;
@property (readonly, nonatomic) HMBLocalSQLContext *sql;
@property (nonatomic) BOOL hasStartedUp;
@property (nonatomic) unsigned long long zoneRow;
@property (retain, nonatomic) NAFuture *shutdownFuture;
@property (weak, nonatomic) HMBLocalDatabase *localDatabase;
@property (readonly, nonatomic) HMBModelContainer *modelContainer;
@property (readonly, nonatomic) HMBLocalZoneConfiguration *configuration;
@property (readonly, nonatomic) NSObject<HMBLocalZoneID> *zoneID;
@property (readonly, nonatomic) NSObject<HMBMirrorProtocol> *mirror;
@property (weak, nonatomic) NSObject<HMBLocalZoneDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)outputBlockRowForTuple:(id)tuple activity:(id)activity;
+ (BOOL)shouldMirrorInputExternalData:(id)data overwriteExistingExternalData:(id)data;
+ (id)outputModelFromUpdateModel:(id)model mergedModel:(id)model;
+ (id)logCategory;

/* instance methods */
- (id)fetchModelWithModelID:(id)id error:(id *)error;
- (id)fetchModelWithModelID:(id)id ofType:(Class)type error:(id *)error;
- (id)fetchModelsWithParentModelID:(id)id ofType:(Class)type error:(id *)error;
- (id)fetchModelsWithParentModelID:(id)id error:(id *)error;
- (id)fetchAllModelsWithError:(id *)error;
- (id)fetchModelsOfType:(Class)type error:(id *)error;
- (id)fetchModelWithRecordRow:(unsigned long long)row error:(id *)error;
- (id)fetchModelWithModelID:(id)id recordRow:(unsigned long long *)row error:(id *)error;
- (id)fetchRecordRowWithModelID:(id)id returning:(unsigned long long)returning error:(id *)error;
- (id)fetchRecordRowWithExternalID:(id)id returning:(unsigned long long)returning error:(id *)error;
- (id)fetchRecordRowsWithModelIDs:(id)ids error:(id *)error;
- (id)queryAllRowRecordsReturning:(unsigned long long)returning;
- (id)setExternalID:(id)id externalData:(id)data forRecordRow:(unsigned long long)row;
- (BOOL)removeAllRecordsWithError:(id *)error;
- (id)objectFromData:(id)data encoding:(unsigned long long)encoding storageLocation:(unsigned long long)location recordRowID:(unsigned long long)id error:(id *)error;
- (id)update:(id)update remove:(id)remove;
- (id)update:(id)update;
- (id)remove:(id)remove;
- (id)createOutputBlockWithError:(id *)error;
- (id)createInputBlockWithType:(unsigned long long)type error:(id *)error;
- (unsigned long long)insertBlockWithType:(unsigned long long)type options:(id)options items:(id)items error:(id *)error;
- (unsigned long long)insertBlockToRemoveAllModelsWithType:(unsigned long long)type modelTypes:(id)types options:(id)options error:(id *)error;
- (unsigned long long)insertBlockToRemoveChildModelsWithType:(unsigned long long)type parentModelID:(id)id options:(id)options error:(id *)error;
- (unsigned long long)insertBlockToRemoveModelsAndDescendantModelsWithType:(unsigned long long)type modelIDs:(id)ids depth:(unsigned long long)depth options:(id)options error:(id *)error;
- (BOOL)_insertDeletionItemsForModelsAndDescendantModelsWithBlockRow:(unsigned long long)row context:(id)context type:(unsigned long long)type modelIDs:(id)ids currentDepth:(unsigned long long)depth maximumDepth:(unsigned long long)depth options:(id)options error:(id *)error;
- (id)fetchReadyBlocksWithType:(unsigned long long)type error:(id *)error;
- (id)fetchItemsInBlock:(id)block error:(id *)error;
- (BOOL)removeBlockWithRow:(unsigned long long)row error:(id *)error;
- (id)queryModelsOfType:(Class)type predicate:(id)predicate;
- (id)queryModelsOfType:(Class)type filter:(id /* block */)filter;
- (id)queryModelsOfType:(Class)type properties:(id)properties filter:(id /* block */)filter;
- (id)fetchModels;
- (id)queryModelsOfType:(Class)type;
- (id)queryModelsWithParentModelID:(id)id;
- (id)queryModelsWithParentModelID:(id)id ofType:(Class)type;
- (id)queryModelsRecursivelyStartingWithModelID:(id)id;
- (id)queryModelsUsingQuery:(id)query;
- (id)queryModelsUsingQuery:(id)query arguments:(id)arguments;
- (id)countModelsUsingQuery:(id)query arguments:(id)arguments error:(id *)error;
- (void)rebuildIndexesIfNeeded;
- (void)addMirrorOutputObserver:(id)observer;
- (void)removeMirrorOutputObserver:(id)observer;
- (id)allMirrorOutputObservers;
- (id)fetchOptionsForOutputBlock:(unsigned long long)block error:(id *)error;
- (id)fetchRecordsForOutputBlock:(unsigned long long)block error:(id *)error;
- (id)markGroupAsSentWithOutputBlock:(unsigned long long)block tuples:(id)tuples;
- (BOOL)removeOutputBlockWithRow:(unsigned long long)row error:(id *)error;
- (id)createMirrorInputWithError:(id *)error;
- (void)migrateUnsupportedModels;
- (id)observersForModelWithID:(id)id;
- (void)queueIncompleteProcesses;
- (id)triggerProcessForBlockRow:(unsigned long long)row;
- (id)initWithLocalDatabase:(id)database zoneID:(id)id zoneRow:(unsigned long long)row configuration:(id)configuration mirror:(id)mirror;
- (void)dealloc;
- (void)addObserverForAllModels:(id)models;
- (void)addObserver:(id)observer forModelWithID:(id)id;
- (void)removeObserverForAllModels:(id)models;
- (void)removeObserver:(id)observer forModelWithID:(id)id;
- (id)externalDataForModelID:(id)id error:(id *)error;
- (id)externalDataForExternalID:(id)id error:(id *)error;
- (id)externalIDForModelID:(id)id error:(id *)error;
- (id)modelIDForExternalID:(id)id error:(id *)error;
- (id)setExternalData:(id)data forModelID:(id)id;
- (id)setExternalData:(id)data forExternalID:(id)id;
- (void)startUp;
- (BOOL)destroyWithError:(id *)error;
- (id)flush;
- (id)addModels:(id)models andRemoveModelIDs:(id)ids options:(id)options;
- (id)updateModels:(id)models andRemoveModelIDs:(id)ids options:(id)options;
- (id)createModels:(id)models options:(id)options;
- (id)addModels:(id)models options:(id)options;
- (id)updateModels:(id)models options:(id)options;
- (id)removeModelIDs:(id)ids options:(id)options;
- (id)removeModelsWithParentModelID:(id)id options:(id)options;
- (id)removeModelsAndDescendantModelsWithIDs:(id)ids depth:(unsigned long long)depth options:(id)options;
- (id)removeAllModelsOfTypes:(id)types options:(id)options;
- (id)createLocalInputWithError:(id *)error;
- (id)shutdown;
- (id)logIdentifier;
- (id)attributeDescriptions;
@end

#endif /* HMBLocalZone_h */