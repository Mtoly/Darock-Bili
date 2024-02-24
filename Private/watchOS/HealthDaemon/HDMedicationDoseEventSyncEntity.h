//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMedicationDoseEventSyncEntity_h
#define HDMedicationDoseEventSyncEntity_h
@import Foundation;

#include "HDSampleSyncEntity.h"

@interface HDMedicationDoseEventSyncEntity : HDSampleSyncEntity
/* class methods */
+ (id)syncEntityIdentifier;
+ (Class)healthEntityClass;
+ (Class)_syncedSampleTypeClass;
+ (id)_objectWithCodable:(id)codable collection:(id)collection;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)version;
+ (id)_basePruningPredicateForDate:(id)date profile:(id)profile;
+ (BOOL)supportsSyncStore:(id)store;
+ (BOOL)generateSyncObjectsForSession:(id)session syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })range profile:(id)profile messageHandler:(id)handler error:(id *)error;
+ (long long)nextSyncAnchorWithSession:(id)session startSyncAnchor:(long long)anchor profile:(id)profile error:(id *)error;
@end

#endif /* HDMedicationDoseEventSyncEntity_h */