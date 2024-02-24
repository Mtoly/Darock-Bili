//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSoftwareUpdateDocumentationManager_h
#define HMDSoftwareUpdateDocumentationManager_h
@import Foundation;

#include "HMFObject.h"
#include "HMDFileManager-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFNetMonitorDelegate-Protocol.h"

@class HMFNetMonitor, NSArray, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDSoftwareUpdateDocumentationManager : HMFObject<HMFLogging, HMFNetMonitorDelegate> {
  /* instance variables */
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
  NSObject<OS_dispatch_queue> *_queue;
  HMFNetMonitor *_netMonitor;
}

@property (readonly) NSMutableSet *registeredMetadata;
@property (readonly) NSObject<HMDFileManager> *fileManager;
@property (readonly) NSArray *assets;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedManager;
+ (id)logCategory;

/* instance methods */
- (id)init;
- (id)initWithFileManager:(id)manager;
- (void)parseCachedAssets;
- (void)registerDocumentationMetadata:(id)metadata;
- (void)unregisterDocumentationMetadata:(id)metadata;
- (void)addAsset:(id)asset;
- (void)removeAsset:(id)asset;
- (id)assetForDocumentationMetadata:(id)metadata;
- (void)auditAsset:(id)asset;
- (void)networkMonitorIsReachable:(id)reachable;
@end

#endif /* HMDSoftwareUpdateDocumentationManager_h */