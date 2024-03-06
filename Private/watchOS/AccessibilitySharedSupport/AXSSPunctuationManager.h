//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSPunctuationManager_h
#define AXSSPunctuationManager_h
@import Foundation;

#include "AXSSDatabaseManager.h"

@class NSArray;

@interface AXSSPunctuationManager : AXSSDatabaseManager {
  /* instance variables */
  BOOL _finishedInitialization;
}

@property (nonatomic) BOOL cloudKitSync;
@property (nonatomic) BOOL cloudKitPushInSameProcess;
@property (readonly, nonatomic) NSArray *punctuationGroups;

/* class methods */
+ (id)overrideDatabasePath;
+ (void)setOverrideDatabasePath:(id)path;
+ (void)initialize;
+ (id)sharedDatabase;

/* instance methods */
- (id)init;
- (void)_initializeDatabaseStartup;
- (void)_initializeSystemGroups;
- (id)punctuationEntriesForGroupUUID:(id)uuid;
- (BOOL)isProtectedDataAvailable;
- (void)_cloudKitUpdated:(id)updated;
- (void)_managedObjectChanged:(id)changed;
- (id)nextDefaultGroupName;
- (id)_databaseDirectoryPath;
- (id)_databaseFilePath;
- (void)userAuthChanged;
- (void)_setupDatabase;
- (BOOL)_saveIfPossible;
- (BOOL)isBasePunctuationGroup:(id)group;
- (void)addCloudRecordToPurge:(id)purge recordEntityType:(id)type;
- (id)cloudRecordsToPurge:(id)purge;
- (void)removeAllRecordsForPurge;
- (void)removeCloudRecordForPurge:(id)purge;
- (id)parentPunctuationGroup:(id)group;
- (id)mostBasePunctuationGroupForGroup:(id)group;
- (id)_punctuationGroupForEntry:(id)entry;
- (void)importPunctuationGroup:(id)group;
- (id)punctuationEntryObjectFromLocalObjects:(id)objects;
- (void)updatePunctuationGroup:(id)group;
- (void)updatePunctuationGroup:(id)group fromCloudKit:(BOOL)kit;
- (void)removePunctuationGroup:(id)group;
- (id)_punctuationEntryFromManagedObject:(id)object;
- (id)_punctuationGroupFromManagedObject:(id)object;
- (id)punctuationGroupsForContexts;
- (void)_filterAutoswitchContexts:(id)contexts punctuationGroupsForContexts:(id)contexts;
- (id)punctuationEntryForUUID:(id)uuid;
- (id)punctuationGroupForUUID:(id)uuid;
- (id)ruleToString:(long long)string;
- (long long)stringToRule:(id)rule;
- (void)updateEntry:(id)entry;
- (void)updateEntry:(id)entry fromCloudKit:(BOOL)kit;
- (void)removeEntry:(id)entry;
- (id)allPunctuationGroup;
- (id)somePunctuationGroup;
- (id)nonePunctuationGroup;
@end

#endif /* AXSSPunctuationManager_h */