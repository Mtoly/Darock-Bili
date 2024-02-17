//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBackingStoreCacheDeleteRecordOperation_h
#define HMDBackingStoreCacheDeleteRecordOperation_h
@import Foundation;

#include "HMDBackingStoreOperation.h"
#include "HMDBackingStoreCacheGroup.h"

@class NSArray;

@interface HMDBackingStoreCacheDeleteRecordOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *group;
@property (retain, nonatomic) NSArray *recordNames;

/* instance methods */
- (id)initWithGroup:(id)group recordNames:(id)names resultBlock:(id /* block */)block;
- (id)mainReturningError;
@end

#endif /* HMDBackingStoreCacheDeleteRecordOperation_h */