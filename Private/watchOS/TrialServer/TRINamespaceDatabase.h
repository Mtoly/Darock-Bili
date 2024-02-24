//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRINamespaceDatabase_h
#define TRINamespaceDatabase_h
@import Foundation;

#include "TRIDatabase.h"

@interface TRINamespaceDatabase : NSObject {
  /* instance variables */
  TRIDatabase *_db;
}

/* instance methods */
- (id)init;
- (id)initWithDatabase:(id)database;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)block;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)block;
- (BOOL)addOrUpdateDynamicNamespaceWithName:(id)name compatibilityVersion:(unsigned int)version defaultsFileURL:(id)url teamId:(id)id appContainerId:(id)id appContainerType:(long long)type cloudKitContainer:(int)container;
- (struct { unsigned long long x0; })removeDynamicNamespaceRecordWithNamespaceName:(id)name;
- (BOOL)_enumerateDynamicNamespaceRecordsWithWhereClause:(id)clause bind:(id /* block */)bind block:(id /* block */)block;
- (id)dynamicNamespaceRecordWithNamespaceName:(id)name;
- (BOOL)enumerateDynamicNamespaceRecordsWithBlock:(id /* block */)block;
- (BOOL)enumerateDynamicNamespaceRecordsForContainer:(int)container teamId:(id)id block:(id /* block */)block;
- (BOOL)enumerateAppContainerIdsForContainer:(int)container block:(id /* block */)block;
- (struct { unsigned long long x0; })setFetched:(BOOL)fetched forDynamicNamespaceName:(id)name;
- (BOOL)hasUnfetchedNamespaceForTeamId:(id)id;
@end

#endif /* TRINamespaceDatabase_h */