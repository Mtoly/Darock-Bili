//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSleepScheduleSyncEntity_h
#define HDSleepScheduleSyncEntity_h
@import Foundation;

#include "HDSampleSyncEntity.h"

@interface HDSleepScheduleSyncEntity : HDSampleSyncEntity
/* class methods */
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)version;
+ (id)syncEntityIdentifier;
+ (Class)healthEntityClass;
+ (Class)_syncedSampleTypeClass;
+ (id)_objectWithCodable:(id)codable collection:(id)collection;
+ (BOOL)supportsSyncStore:(id)store;
+ (BOOL)supportsDateBasedSharding;
+ (id)_basePruningPredicateForDate:(id)date profile:(id)profile;
@end

#endif /* HDSleepScheduleSyncEntity_h */