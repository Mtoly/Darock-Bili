//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICURLBagProvider_h
#define ICURLBagProvider_h
@import Foundation;

@class MSVLRUDictionary, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject {
  /* instance variables */
  MSVLRUDictionary *_cache;
  NSObject<OS_dispatch_queue> *_accessQueue;
  NSObject<OS_dispatch_queue> *_persistenceQueue;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  NSMutableDictionary *_pendingOperationsForCacheKey;
  NSMutableSet *_cacheKeysScheduledForRefresh;
  NSMutableDictionary *_bagChangeNotificationReceivedForRequestContext;
}

@property (nonatomic) BOOL useAMSBag;
@property (nonatomic) BOOL useRawPayload;

/* class methods */
+ (id)sharedBagProvider;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)getBagForRequestContext:(id)context withCompletionHandler:(id /* block */)handler;
- (void)getBagForRequestContext:(id)context forceRefetch:(BOOL)refetch withCompletionHandler:(id /* block */)handler;
- (void)getBagAndURLMetricsForRequestContext:(id)context forceRefetch:(BOOL)refetch withCompletionHandler:(id /* block */)handler;
- (void)invalidateCache;
- (id)_getCacheKeyForRequestContext:(id)context;
- (void)_fetchBagForRequestContext:(id)context withCompletionHandler:(id /* block */)handler;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)notification;
- (void)_handleAMSBagChangedNotification:(id)notification;
- (id)_loadPlistAtPath:(id)path;
- (void)_loadCache;
- (void)_cleanBagCacheExcludingPaths:(id)paths;
- (void)_loadMonoCache;
- (void)_persistBagToDisk:(id)disk withKey:(id)key;
- (id)_cacheDirectoryPath;
- (id)_legacyCacheFilePath;
- (id)_amsProcessInfoFromRequestContext:(id)context;
- (id)_dictionaryFromBagPayloadDictionaryAddingKnownMissingKeys:(id)keys forProfileName:(id)name;
- (id)_knownMissingBagValuesDictionary;
@end

#endif /* ICURLBagProvider_h */