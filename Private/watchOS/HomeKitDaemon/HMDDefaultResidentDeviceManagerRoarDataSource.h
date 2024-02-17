//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDefaultResidentDeviceManagerRoarDataSource_h
#define HMDDefaultResidentDeviceManagerRoarDataSource_h
@import Foundation;

#include "HMDAppleAccountManager.h"
#include "HMDResidentDeviceManagerRoarDataSource-Protocol.h"

@class NSNotificationCenter, NSString;
@protocol OS_dispatch_queue;

@interface HMDDefaultResidentDeviceManagerRoarDataSource : NSObject<HMDResidentDeviceManagerRoarDataSource>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly) BOOL isResidentCapable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)firstCloudKitImportFuture;
- (id)createElectionAddOnWithContext:(id)context;
- (id)createPrimaryResidentDiscoveryManagerWithQueue:(id)queue;
- (id)createBackingStoreForHome:(id)home;
- (id)logIdentifierForHome:(id)home;
@end

#endif /* HMDDefaultResidentDeviceManagerRoarDataSource_h */