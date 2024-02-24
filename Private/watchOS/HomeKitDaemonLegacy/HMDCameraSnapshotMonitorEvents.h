//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSnapshotMonitorEvents_h
#define HMDCameraSnapshotMonitorEvents_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCameraBulletinBoard-Protocol.h"
#include "HMDCameraSnapshotManager.h"
#include "HMDCharacteristicsAvailabilityListener.h"
#include "HMDCharacteristicsAvailabilityListenerDelegate-Protocol.h"
#include "HMDHAPAccessory.h"
#include "HMDHomeMessageReceiver-Protocol.h"
#include "HMDNotificationRegistration.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFMessageDispatcher, NSMutableSet, NSNotificationCenter, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotMonitorEvents : HMFObject<HMFTimerDelegate, HMFLogging, HMDCharacteristicsAvailabilityListenerDelegate, HMDHomeMessageReceiver> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_workQueue;
  HMFMessageDispatcher *_msgDispatcher;
  HMDCameraSnapshotManager *_snapshotManager;
  NSMutableSet *_snapShotNotificationResponseTimers;
  HMDHAPAccessory *_accessory;
  NSString *_bulletinImagesDirectory;
  NSNotificationCenter *_notificationCenter;
  NSObject<HMDCameraBulletinBoard> *_bulletinBoard;
  HMDNotificationRegistration *_notificationRegistration;
}

@property (readonly) NSString *logIdentifier;
@property (readonly) NSUUID *uniqueIdentifier;
@property (copy) NSSet *bulletinSnapshotCharacteristics;
@property (retain) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;

/* instance methods */
- (id)initWithSnapshotManager:(id)manager accessory:(id)accessory workQueue:(id)queue msgDispatcher:(id)dispatcher;
- (id)initWithSnapshotManager:(id)manager accessory:(id)accessory workQueue:(id)queue msgDispatcher:(id)dispatcher bulletinBoard:(id)board notificationCenter:(id)center;
- (void)registerForMessages;
- (void)dealloc;
- (void)listener:(id)listener didUpdateAvailableCharacteristics:(id)characteristics;
- (void)handleBulletinBoardNotificationDidUpdateNotification:(id)notification;
- (void)handleCharacteristicsChangedNotification:(id)notification;
- (void)handleCameraSettingsDidUpdateNotification:(id)notification;
- (void)timerDidFire:(id)fire;
@end

#endif /* HMDCameraSnapshotMonitorEvents_h */