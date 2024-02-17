//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCCloudDataSource_h
#define BCCloudDataSource_h
@import Foundation;

#include "BDSCloudKitSupportSignOutDeleteWithoutInstance-Protocol.h"

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface BCCloudDataSource : NSObject<BDSCloudKitSupportSignOutDeleteWithoutInstance>

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

/* class methods */
+ (void)deleteCloudDataWithCompletion:(id /* block */)completion;
+ (id)_documentsDirectoryURL;
+ (id)_sharedRootDirectoryURL;
+ (id)_sharedLegacyRootDirectoryURL;

/* instance methods */
- (id)initWithManagedObjectModel:(id)model;
- (id)initWithManagedObjectModel:(id)model nameOnDisk:(id)disk;
- (id)initWithManagedObjectModel:(id)model rootDirectoryURL:(id)url legacyRootDirectoryURL:(id)url nameOnDisk:(id)disk;
- (id)_persistentStoreOptions;
- (void)_logIf:(BOOL)if error:(id)error operation:(id)operation;
- (BOOL)_setupPersistentStoreWithRootDirectoryURL:(id)url legacyRootDirectoryURL:(id)url nameOnDisk:(id)disk;
- (void)_setupManagedObjectContext;
- (BOOL)_directoryExistsForStoreAtURL:(id)url;
- (void)_createDirectoryForStoreAtURL:(id)url;
- (void)_deleteDirectoryForStoreAtURL:(id)url;
- (void)_migrateAndDestroyStoreAtLegacyURL:(id)url toModernURL:(id)url;
- (BOOL)_addStoreAtURL:(id)url;
@end

#endif /* BCCloudDataSource_h */