//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSqliteApplicationDataStoreRepository_h
#define FBSqliteApplicationDataStoreRepository_h
@import Foundation;

#include "FBApplicationDataStoreRepository-Protocol.h"
#include "FBApplicationDataStoreRepositoryDelegate-Protocol.h"

@class BSSqliteDatabaseConnection, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FBSqliteApplicationDataStoreRepository : NSObject<FBApplicationDataStoreRepository> {
  /* instance variables */
  NSURL *_storeURL;
  NSObject<OS_dispatch_queue> *_dbQueue;
  BSSqliteDatabaseConnection *_dbQueue_dbConnection;
  unsigned long long _dbQueue_batchDepth;
  int _dbQueue_firstUnlockToken;
  NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (weak, nonatomic) NSObject<FBApplicationDataStoreRepositoryDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_objectRequiresSerialization:(id)serialization;
+ (id)_objectForResultRow:(id)row index:(unsigned long long)index;
+ (id)_generateParameterizedQuery:(id)query forKeyList:(id)list outBindings:(id *)bindings;

/* instance methods */
- (id)initWithStorePath:(id)path;
- (void)dealloc;
- (id)applicationIdentifiersWithState;
- (id)keysForApplication:(id)application;
- (BOOL)containsKey:(id)key forApplication:(id)application;
- (id)objectForKey:(id)key forApplication:(id)application;
- (id)allObjectsForKeys:(id)keys;
- (void)close;
- (void)setObject:(id)object forKey:(id)key forApplication:(id)application;
- (void)removeObjectForKey:(id)key forApplication:(id)application;
- (void)removeObjectsForKeys:(id)keys forApplication:(id)application;
- (void)removeAllObjectsForApplication:(id)application;
- (void)flushSynchronously;
- (void)beginBatchedUpdate;
- (void)endBatchedUpdate;
- (id)migrateIdentifier:(id)identifier toIdentifier:(id)identifier;
- (BOOL)_isEligibleForSaving:(id)saving;
- (void)_dbQueue_load;
- (BOOL)_dbQueue_databaseIntegrityCheck;
- (id)_dbQueue_openDatabase;
- (id)urlByAppendingString:(id)string toURL:(id)url;
- (BOOL)_preserveFileAtURL:(id)url;
- (BOOL)_dbQueue_tryPreserveDamagedDatabase;
- (BOOL)_dbQueue_truncateDamagedDatabase;
- (BOOL)_dbQueue_loadDatabase;
- (id)_dbQueue_objectForKey:(id)key forApplication:(id)application;
- (BOOL)_dbQueue_containsKey:(id)key forApplication:(id)application;
- (id)_dbQueue_applicationIdentifiersWithState;
- (id)_dbQueue_keysForApplication:(id)application;
- (id)_dbQueue_objectsForKeys:(id)keys;
- (void)_dbQueue_notifyDelegateOfChangeForKeys:(id)keys application:(id)application;
- (void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)identifier;
- (void)_dbQueue_notifyDelegateOfLateLoad;
- (BOOL)_dbQueue_executeStatement:(id)statement bindings:(id)bindings resultRowHandler:(id /* block */)handler error:(out id *)error;
- (BOOL)_dbQueue_executeStatement:(id)statement bindings:(id)bindings resultRowHandler:(id /* block */)handler;
- (void)_dbQueue_performWithSavepoint:(id)savepoint handler:(id /* block */)handler;
- (long long)_dbQueue_databaseVersion;
- (void)_dbQueue_createTables;
- (BOOL)_inAlternateSystemApp;
@end

#endif /* FBSqliteApplicationDataStoreRepository_h */