//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef NoteContext_h
#define NoteContext_h
@import Foundation;

#include "AccountUtilities.h"
#include "NoteAccountObject.h"
#include "NoteStoreObject.h"

@class ICExclusiveLock, ICManagedObjectContextUpdater, ICSelectorDelayer, NSManagedObjectContext, NSMutableDictionary, NSNumber, NSPersistentStoreCoordinator;

@interface NoteContext : NSObject {
  /* instance variables */
  NoteStoreObject *_localStore;
  NoteAccountObject *_localAccount;
  NSManagedObjectContext *_nextIdContext;
  ICExclusiveLock *_nextIdLock;
  NSNumber *_nextId;
  ICExclusiveLock *_objectCreationLock;
  unsigned long long _notificationCount;
  BOOL _logChanges;
  BOOL _indexInBatches;
  BOOL _hasPriorityInSaveConflicts;
  BOOL _inMigrator;
  NSMutableDictionary *_notePropertyObjectsRealized;
}

@property (retain, nonatomic) AccountUtilities *accountUtilities;
@property (nonatomic) BOOL isMainContext;
@property (nonatomic) BOOL usePrivateQueue;
@property (retain, nonatomic) ICManagedObjectContextUpdater *mocUpdater;
@property (retain, nonatomic) ICSelectorDelayer *externalChangeNotificationDelayer;
@property (readonly, retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

/* class methods */
+ (id)sharedContext;
+ (id)mainContextObjectFromObject:(id)object;
+ (BOOL)shouldLogIndexing;
+ (BOOL)databaseIsCorrupt:(id)corrupt;
+ (void)setTestsNotesRootPath:(id)path;
+ (void)clearTestsNotesRootPath;
+ (id)fileProtectionOption;
+ (id)fileURLProtectionOption;
+ (id)defaultNotesSortDescriptors;
+ (id)generateGUID;
+ (id)storeOptions;
+ (void)removeSqliteAndIdxFiles;
+ (void)removeConflictingSqliteAndIdxFiles;
+ (id)visibleNotesPredicate;
+ (id)visibleNotesIncludingEmptyBodyContentPredicate;
+ (id)newFetchRequestForAccounts;
+ (id)newFetchRequestForStores;
+ (id)newFetchRequestForNotes;
+ (id)newlyAddedAttachmentInContext:(id)context;
+ (unsigned long long)countOfVisibleNotesInCollectionIncludingNotesWithoutBodyContent:(id)content;
+ (unsigned long long)countOfVisibleNotesInCollection:(id)collection;
+ (id)allVisibleNotesMatchingPredicate:(id)predicate context:(id)context;
+ (id)allVisibleNotesMatchingPredicate:(id)predicate sorted:(BOOL)sorted context:(id)context;
+ (id)allVisibleNotesMatchingPredicate:(id)predicate sorted:(BOOL)sorted context:(id)context fetchLimit:(unsigned long long)limit;
+ (unsigned long long)countOfVisibleNotesMatchingPredicate:(id)predicate context:(id)context;
+ (unsigned long long)countOfVisibleNotesMatchingPredicate:(id)predicate includingNoteWithoutBodyContent:(BOOL)content context:(id)context;
+ (id)pathForPersistentStore;
+ (id)pathForIndex;
+ (id)urlForPersistentStore;
+ (id)backupsDirectoryURL;
+ (void)backupPersistentStore:(id)store;
+ (BOOL)isTooLowOnDiskSpace;
+ (BOOL)isDataProtectionError:(id)error;
+ (id)managedObjectModel;
+ (id)persistentStoreCoordinator;
+ (id)newManagedObjectContext;

/* instance methods */
- (void)_createLocalAccount:(id *)account andStore:(id *)store;
- (BOOL)setUpLocalAccountAndStore;
- (BOOL)setUpLastIndexTid;
- (void)forceSetUpUniqueObjects;
- (void)setUpUniqueObjects;
- (BOOL)setUpCoreDataStack;
- (void)tearDownCoreDataStack;
- (id)init;
- (id)initForMainContext;
- (id)initForMigrator;
- (id)initWithPrivateQueue;
- (id)initWithPrivateQueue:(BOOL)queue;
- (id)initWithAccountUtilities:(id)utilities;
- (id)initWithAccountUtilities:(id)utilities inMigrator:(BOOL)migrator;
- (id)initWithAccountUtilities:(id)utilities inMigrator:(BOOL)migrator isMainContext:(BOOL)context usePrivateQueue:(BOOL)queue;
- (void)dealloc;
- (id)visibleNotesPredicate;
- (id)liveNotesNeedingBodiesPredicate;
- (id)newFRCForAccountsWithDelegate:(id)delegate;
- (id)newFRCForStoresWithDelegate:(id)delegate;
- (id)newFRCForCollection:(id)collection delegate:(id)delegate;
- (id)newFRCForCollection:(id)collection delegate:(id)delegate performFetch:(BOOL)fetch;
- (id)newFRCForFetchRequest:(id)request delegate:(id)delegate performFetch:(BOOL)fetch;
- (id)newFetchRequestForNotes;
- (void)clearCaches;
- (void)sortNotes:(id)notes;
- (void)batchFaultNotes:(id)notes;
- (id)newlyAddedNote;
- (id)newlyAddedNoteWithGUID:(id)guid;
- (id)newlyCreatedNoteFromDefaultStore;
- (id)newlyAddedAttachment;
- (id)collectionForObjectID:(id)id;
- (id)storeForObjectID:(id)id;
- (void)deleteNote:(id)note;
- (void)deleteNoteRegardlessOfConstraints:(id)constraints;
- (void)deleteChanges:(id)changes;
- (void)enableChangeLogging:(BOOL)logging;
- (void)invalidate;
- (BOOL)saveOutsideApp:(id *)app;
- (BOOL)save:(id *)save;
- (BOOL)saveSilently:(id *)silently;
- (id)allVisibleNotes;
- (unsigned long long)countOfVisibleNotes;
- (id)allVisibleNotesInCollection:(id)collection;
- (id)allVisibleNotesInCollection:(id)collection sorted:(BOOL)sorted;
- (unsigned long long)countOfVisibleNotesInCollection:(id)collection;
- (id)allVisibleNotesMatchingPredicate:(id)predicate;
- (id)allVisibleNotesMatchingPredicate:(id)predicate sorted:(BOOL)sorted;
- (unsigned long long)countOfVisibleNotesMatchingPredicate:(id)predicate;
- (id)visibleNoteForObjectID:(id)id;
- (id)visibleNotesForIntegerIds:(id)ids;
- (id)mostRecentlyModifiedNoteInCollection:(id)collection;
- (id)allNotes;
- (unsigned long long)countOfNotes;
- (id)allNotesInCollection:(id)collection;
- (unsigned long long)countOfNotesInCollection:(id)collection;
- (id)allNotesMatchingPredicate:(id)predicate;
- (unsigned long long)countOfNotesMatchingPredicate:(id)predicate;
- (id)noteForObjectID:(id)id;
- (id)notesForIntegerIds:(id)ids;
- (id)noteForGUID:(id)guid;
- (id)storeForExternalIdentifier:(id)identifier;
- (id)allNotesWithoutBodiesInCollection:(id)collection;
- (id)collectionForInfo:(id)info;
- (id)newlyAddedStore;
- (id)allStores;
- (id)storesInCollection:(id)collection;
- (id)faultedInStoresForAccounts:(id)accounts;
- (unsigned long long)countOfStores;
- (id)allAccounts;
- (id)allAccountsAsFaults:(BOOL)faults prefechedRelationshipKeyPaths:(id)paths;
- (id)newlyAddedAccount;
- (id)accountForAccountId:(id)id;
- (id)defaultStoreForNewNote;
- (id)localStore;
- (id)localAccount;
- (BOOL)forceDeleteAccount:(id)account;
- (BOOL)deleteAccount:(id)account;
- (BOOL)deleteStore:(id)store;
- (BOOL)shouldDisableLocalStore;
- (BOOL)hasMultipleEnabledStores;
- (id)_notePropertyObjectForKey:(id)key;
- (void)setPropertyValue:(id)value forKey:(id)key;
- (id)propertyValueForKey:(id)key;
- (void)handleMigration;
- (id)getNextIdObject;
- (id)nextIndex;
- (void)setHasPriorityInSaveConflicts:(BOOL)conflicts;
- (BOOL)shouldObserveDarwinNotifications;
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)logging;
- (void)resetNotificationCount;
- (id)noteChangeWithType:(int)type store:(id)store;
- (void)managedObjectContextWillSaveNotification:(id)notification;
- (void)trackChanges:(id)changes;
- (void)cleanUpLocks;
- (void)updateForRecentChanges;
- (void)postNotesChangedExternally;
- (long long)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)id andTrigger:(id)trigger;
@end

#endif /* NoteContext_h */