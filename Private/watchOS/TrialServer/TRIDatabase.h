//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIDatabase_h
#define TRIDatabase_h
@import Foundation;

#include "TRIStorageManagementProtocol-Protocol.h"
#include "_PASDatabaseMigrationProtocol-Protocol.h"

@class NSString, NSUserDefaults, _PASKVOHandler, _PASSqliteDatabase;
@protocol TRIPaths;

@interface TRIDatabase : NSObject<_PASDatabaseMigrationProtocol> {
  /* instance variables */
  NSObject<TRIPaths> *_paths;
  NSObject<TRIStorageManagementProtocol> *_storageManagement;
  NSString *_databasePath;
  _PASSqliteDatabase *_db;
  NSUserDefaults *_defaults;
  _PASKVOHandler *_kvoHandler;
  atomic BOOL _isQueryPlanLoggingEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithPaths:(id)paths storageManagement:(id)management;
- (id)initInMemoryAndPerformMigrations:(BOOL)migrations;
- (id)initWithPaths:(id)paths databasePath:(id)path storageManagement:(id)management performMigrations:(BOOL)migrations;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)block;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)block;
- (id /* block */)generalErrorHandlerWithOutError:(id *)error;
- (BOOL)vacuum;
- (id)createTempTableContainingRowsFromQuery:(id)query bind:(id /* block */)bind namePrefix:(id)prefix transaction:(id)transaction;
- (BOOL)dropTableWithName:(id)name transaction:(id)transaction;
- (void)closePermanently;
- (void)_updateQueryPlanLogging;
- (void)_enableQueryPlanLogging;
- (void)_disableQueryPlanLogging;
- (BOOL)migrateToVersion:(unsigned int)version;
- (id)databaseHandle;
- (id)migrations;
- (unsigned char)migration_addTaskCapability;
- (unsigned char)migration_conditionallyRemoveBMLTFactorPackInfo;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)version;
@end

#endif /* TRIDatabase_h */