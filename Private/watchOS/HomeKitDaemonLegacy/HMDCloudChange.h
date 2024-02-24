//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCloudChange_h
#define HMDCloudChange_h
@import Foundation;

#include "HMFObject.h"
#include "HMDBackingStoreChangeObject-Protocol.h"
#include "HMDBackingStoreModelObject.h"
#include "HMDBackingStoreRecordMapping-Protocol.h"
#include "HMDCloudRecord.h"

@class CKRecord, CKRecordID, NSArray, NSMutableSet, NSSet, NSString, NSUUID;

@interface HMDCloudChange : HMFObject<HMDBackingStoreChangeObject, HMDBackingStoreRecordMapping>

@property (retain, nonatomic) HMDBackingStoreModelObject *objectChange;
@property (nonatomic) unsigned long long changeType;
@property (nonatomic) unsigned long long applyType;
@property (readonly, nonatomic) NSMutableSet *rowIDsSet;
@property (readonly, nonatomic) NSUUID *parentObjectID;
@property (readonly, nonatomic) NSUUID *objectID;
@property (readonly, nonatomic) NSString *recordName;
@property (readonly, nonatomic) BOOL addChange;
@property (readonly, nonatomic) BOOL updateChange;
@property (readonly, nonatomic) BOOL deleteChange;
@property (readonly, nonatomic) BOOL invalidChange;
@property (readonly, nonatomic) BOOL dropAndDoNotApply;
@property (readonly, nonatomic) BOOL dropAfterApply;
@property (readonly, nonatomic) BOOL dropStagedAfterApply;
@property (readonly, nonatomic) BOOL pushAfterApply;
@property (readonly, nonatomic) NSArray *rowIDs;
@property (readonly, nonatomic) HMDCloudRecord *cloudRecord;
@property (readonly, nonatomic) HMDCloudRecord *deletedCloudRecord;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) HMDBackingStoreModelObject *change;
@property (readonly, nonatomic) NSSet *dependentUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *parentUuid;
@property (readonly, nonatomic) NSString *type;

/* class methods */
+ (id)shortDescription;

/* instance methods */
- (id)init;
- (id)_initWithObjectChange:(id)change cloudObjectRecord:(id)record;
- (id)initWithObjectChange:(id)change;
- (id)initWithCloudObjectRecord:(id)record;
- (id)shortDescription;
- (BOOL)isAdded;
- (BOOL)isUpdated;
- (BOOL)isDeleted;
- (BOOL)isInvalid;
- (BOOL)isDropAndDoNotApply;
- (BOOL)isDropAfterApply;
- (BOOL)isDropStagedAfterApply;
- (BOOL)isPushAfterApply;
- (void)forceChangeToDelete;
- (void)forceChangeToInvalid;
- (void)updateCloudRecord:(id)record;
- (void)updateDeletedCloudRecord:(id)record;
- (void)updateWithObjectChange:(id)change;
- (void)updateChangeWithRecord:(id)record;
- (void)resetRecord;
- (void)replayChange:(id)change stagedChange:(id)change;
@end

#endif /* HMDCloudChange_h */