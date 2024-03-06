//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKApricotComplicationVendorCacheController_h
#define NTKApricotComplicationVendorCacheController_h
@import Foundation;

#include "CHSWidgetDescriptorProviderObserver-Protocol.h"
#include "NTKApricotComplicationVendorCache.h"

@class CHSWidgetDescriptorProvider, NSHashTable, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface NTKApricotComplicationVendorCacheController : NSObject<CHSWidgetDescriptorProviderObserver> {
  /* instance variables */
  NSMutableDictionary *_queue_appIdentifierToProvidesWidgetCache;
  NSURL *_persistenceUrl;
  NSObject<OS_dispatch_queue> *_queue;
  NSHashTable *_observers;
  CHSWidgetDescriptorProvider *_descriptorProvider;
}

@property (readonly, retain, nonatomic) NTKApricotComplicationVendorCache *cacheData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithUrl:(id)url;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)updateStatusForAppIdentifier:(id)identifier;
- (void)widgetStatusForAppIdentifier:(id)identifier queryIfNeeded:(BOOL)needed completion:(id /* block */)completion;
- (void)_fetchStatusForAppIdentifier:(id)identifier completion:(id /* block */)completion;
- (BOOL)_queue_providesWidgetForAppIdentifier:(id)identifier;
- (void)_queue_setProvidesWidget:(BOOL)widget forAppIdentifier:(id)identifier;
- (void)_loadCache;
- (void)_queue_readCache;
- (void)_queue_writeCache;
- (void)_queue_notifyObservers;
- (void)descriptorsDidChangeForDescriptorProvider:(id)provider;
- (void)_queue_handleDescriptorUpdateFromProviderWithDescriptors:(id)descriptors;
- (void)test_setProvidesWidget:(BOOL)widget forAppIdentifier:(id)identifier;
- (id)test_providesWidgetForAppIdentifier:(id)identifier;
@end

#endif /* NTKApricotComplicationVendorCacheController_h */