//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCloudChangeNode_h
#define HMDCloudChangeNode_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCloudChange.h"
#include "HMDCloudChangeNode.h"

@class NSMapTable, NSString, NSUUID;

@interface HMDCloudChangeNode : HMFObject

@property (copy, nonatomic) NSString *recordName;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSUUID *parentUuid;
@property (copy, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL forceDelete;
@property (readonly, nonatomic) BOOL orphaned;
@property (weak, nonatomic) HMDCloudChangeNode *parent;
@property (retain, nonatomic) HMDCloudChange *change;
@property (retain, nonatomic) NSMapTable *children;

/* class methods */
+ (id)shortDescription;

/* instance methods */
- (id)init;
- (id)_initWithUUID:(id)uuid parentUUID:(id)uuid recordName:(id)name type:(id)type change:(id)change;
- (id)initWithRecordMapping:(id)mapping;
- (id)initWithModel:(id)model;
- (id)initWithChange:(id)change;
- (id)initWithCloudRecord:(id)record;
- (id)shortDescription;
- (id)description;
- (void)logChangeTreeWithIndent:(id)indent;
- (void)addChild:(id)child;
- (void)removeChild:(id)child;
- (void)updateRecordMapping:(id)mapping;
- (void)_updateWithModel:(id)model;
- (void)_updateWithChange:(id)change;
- (void)_updateWithCloudRecord:(id)record;
- (void)deleteChildren;
- (id)_allNodesInBranch;
- (void)_markBranchOrphaned;
@end

#endif /* HMDCloudChangeNode_h */