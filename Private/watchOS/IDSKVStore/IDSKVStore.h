//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSKVStore_h
#define IDSKVStore_h
@import Foundation;

@class CSDBThreadedRecordStore, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSKVStore : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_ivarQueue;
  NSObject<OS_dispatch_source> *_databaseCloseTimer;
  double _databaseLastUpdateTime;
}

@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) CSDBThreadedRecordStore *messageStore;
@property (nonatomic) unsigned int dataProtectionClass;

/* class methods */
+ (void)_invalidateCachesForMessageStore:(id)store;
+ (void)_initializeMessageStoreIfNeeded:(id)needed path:(id)path dataProtectionClass:(unsigned int)class;

/* instance methods */
- (id)initWithPath:(id)path storeName:(id)name dataProtectionClass:(unsigned int)class;
- (void)_onIvarQueue_persistSerializedValue:(id)value forKey:(id)key valueType:(char)type;
- (id)_onIvarQueue_serializedValueForKey:(id)key valueType:(char)type;
- (id)_onIvarQueue_serializedValuesUpToLimit:(unsigned long long)limit valueType:(char)type deleteContext:(id *)context;
- (void)_onIvarQueue_deleteUpToRowID:(unsigned long long)id valueType:(char)type;
- (void)_onIvarQueue_deleteDatesBefore:(id)before after:(id)after;
- (void)_onIvarQueue_deleteSerializedValueForKey:(id)key valueType:(char)type;
- (id)_onIvarQueue_storedKeysAfter:(id)after;
- (BOOL)persistData:(id)data forKey:(id)key error:(id *)error;
- (id)dataForKey:(id)key error:(id *)error;
- (id)datasUpToLimit:(unsigned long long)limit deleteContext:(id *)context error:(id *)error;
- (id)storedKeysAfterDate:(id)date error:(id *)error;
- (BOOL)deleteEntriesBeforeDate:(id)date afterDate:(id)date error:(id *)error;
- (BOOL)deleteBatchWithContext:(id)context error:(id *)error;
- (void)_performInitialHousekeepingOnIvarQueue;
- (void)__closeDatabaseOnIvarQueue;
- (void)_clearDatabaseCloseTimerOnIvarQueue;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (void)closeDatabaseSynchronously:(BOOL)synchronously;
- (void)deleteDatabase;
- (void)_onIvarQueue_performBlock:(id /* block */)block initializeStore:(BOOL)store;
- (void)_onIvarQueue_performBlock:(id /* block */)block initializeStore:(BOOL)store waitUntilDone:(BOOL)done;
@end

#endif /* IDSKVStore_h */