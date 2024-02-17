//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncManagerFetchShareParticipantsTask_h
#define HDCloudSyncManagerFetchShareParticipantsTask_h
@import Foundation;

#include "HDCloudSyncManagerPipelineTask.h"
#include "HDCloudSyncPipelineStageFetchShares.h"

@class NSArray;

@interface HDCloudSyncManagerFetchShareParticipantsTask : HDCloudSyncManagerPipelineTask {
  /* instance variables */
  BOOL _fetchAllShares;
  HDCloudSyncPipelineStageFetchShares *_fetchSharesStage;
}

@property (readonly, copy, nonatomic) NSArray *shares;

/* instance methods */
- (id)initWithManager:(id)manager context:(id)context fetchAllShares:(BOOL)shares accessibilityAssertion:(id)assertion completion:(id /* block */)completion;
- (id)pipelineForRepository:(id)repository;
@end

#endif /* HDCloudSyncManagerFetchShareParticipantsTask_h */