//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _MKFModel_h
#define _MKFModel_h
@import Foundation;

#include "_MKFObject.h"
#include "MKFModel-Protocol.h"
#include "MKFModelDatabaseID.h"
#include "MKFModelModelIDDefaults-Protocol.h"

@class NSDate, NSString, NSUUID;

@interface _MKFModel : _MKFObject<MKFModel, MKFModelModelIDDefaults>

@property (copy, @dynamic, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) MKFModelDatabaseID *databaseID;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)modelWithModelID:(id)id context:(id)context error:(id *)error;
+ (id)modelWithModelID:(id)id context:(id)context;
+ (id)backingModelProtocol;

/* instance methods */
- (id)castIfModel;
- (void)willSave;
- (BOOL)validateForInsertOrUpdate:(id *)update;
- (BOOL)validateModelID:(id *)id error:(id *)error;
- (BOOL)validateWriterTimestamp:(id *)timestamp error:(id *)error;
- (id)hmd_debugIdentifier;
- (id)redactedDescription;
@end

#endif /* _MKFModel_h */