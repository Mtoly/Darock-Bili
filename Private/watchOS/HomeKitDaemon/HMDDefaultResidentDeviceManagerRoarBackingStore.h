//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDefaultResidentDeviceManagerRoarBackingStore_h
#define HMDDefaultResidentDeviceManagerRoarBackingStore_h
@import Foundation;

#include "HMDAppleAccountManager.h"
#include "HMDHome.h"
#include "HMDResidentDeviceManagerRoarBackingStore-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSMapTable, NSString;
@protocol OS_os_log;

@interface HMDDefaultResidentDeviceManagerRoarBackingStore : NSObject<HMFLogging, HMDResidentDeviceManagerRoarBackingStore> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_os_log> *_logger;
}

@property (readonly, weak) HMDHome *home;
@property (readonly, weak) HMDAppleAccountManager *appleAccountManager;
@property (readonly) NSString *logIdentifier;
@property (readonly) NSMapTable *residentDeviceByObjectID;
@property (nonatomic) BOOL hasAnyResident;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *cloudChangeUpdateNotificationName;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithHome:(id)home appleAccountManager:(id)manager;
- (id)_deviceWithIdsIdentifier:(id)identifier fromAccount:(id)account;
- (id)_deviceWithIdsDestination:(id)destination fromAccount:(id)account;
- (id)_deviceFromModel:(id)model;
- (id)_deviceFromModel:(id)model currentDevice:(id)device;
- (void)_updateHasAnyResident;
- (id)findResidents:(id)residents outHasResidents:(BOOL *)residents;
- (id)pruneDuplicateResidentModelsFrom:(id)from;
- (BOOL)residentModel:(id)model isTheSameAs:(id)as;
- (id)handleCloudResidentChange:(id)change currentResidents:(id)residents isCurrentDevicePrimaryResident:(BOOL)resident currentDevice:(id)device;
- (BOOL)_shouldUpdateDeviceIdentifiersForResident:(id)resident fromResidentDevice:(id)device;
- (BOOL)_addDeviceIdentifiersIfNecessary:(id)necessary fromResidentDevice:(id)device;
- (void)updateIdentifiersForAvailableResidentDevices:(id)devices;
- (void)_mapResidentsToMKFResidents:(id)mkfresidents operation:(id /* block */)operation finished:(id /* block */)finished;
- (void)updateReachabilityForResidents:(id)residents;
- (id)residentsRequiringReachabilityUpdate:(id)update;
@end

#endif /* HMDDefaultResidentDeviceManagerRoarBackingStore_h */