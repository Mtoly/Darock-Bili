//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBPrivateCloudZoneRebuilder_h
#define HMBPrivateCloudZoneRebuilder_h
@import Foundation;

#include "HMFObject.h"
#include "HMBCloudZone.h"
#include "HMBCloudZoneRebuilder-Protocol.h"
#include "HMBCloudZoneRebuilderStatus.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class CKRecord, HMFTimer, NAFuture, NSString, NSUUID;

@interface HMBPrivateCloudZoneRebuilder : HMFObject<HMFTimerDelegate, HMFLogging, HMBCloudZoneRebuilder> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
}

@property (retain, nonatomic) CKRecord *previousSentinelRebuildRecord;
@property (retain, nonatomic) NSUUID *lastRebuildUUID;
@property (retain, nonatomic) HMFTimer *uploadMonitorWatchdogTimer;
@property (weak, nonatomic) HMBCloudZone *cloudZone;
@property (retain, nonatomic) NAFuture *rebuildCompleteFuture;
@property (copy) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL zoneRebuildInProgress;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithCloudZone:(id)zone;
- (id)zoneStartUp;
- (void)handleIdentityLost;
- (void)rebuild;
- (BOOL)isZoneRebuildInProgress;
- (void)handleZoneChanged;
- (void)timerDidFire:(id)fire;
- (id)logIdentifier;
@end

#endif /* HMBPrivateCloudZoneRebuilder_h */