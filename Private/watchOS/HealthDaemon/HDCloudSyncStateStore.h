//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncStateStore_h
#define HDCloudSyncStateStore_h
@import Foundation;

#include "HDCloudSyncCachedZone.h"
#include "HDCloudSyncStateStore-Protocol.h"
#include "HDProfile.h"
#include "HDStateSyncEntitySchema.h"

@class NSMutableDictionary, NSString;

@interface HDCloudSyncStateStore : NSObject<HDCloudSyncStateStore> {
  /* instance variables */
  HDProfile *_profile;
}

@property (nonatomic) unsigned long long aggregateMergedDataLength;
@property (readonly, nonatomic) NSMutableDictionary *mergedData;
@property (readonly, copy, nonatomic) HDCloudSyncCachedZone *zone;
@property (readonly, nonatomic) HDStateSyncEntitySchema *entitySchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEntitySchema:(id)schema zone:(id)zone profile:(id)profile;
- (BOOL)data:(id *)data forKey:(id)key error:(id *)error;
- (BOOL)setData:(id)data forKey:(id)key error:(id *)error;
- (void)unitTest_setMergedData:(id)data;
@end

#endif /* HDCloudSyncStateStore_h */