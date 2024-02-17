//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncManagerTaskQueue_h
#define HDCloudSyncManagerTaskQueue_h
@import Foundation;

#include "HDCloudSyncManagerTask.h"
#include "HDCloudSyncManagerTaskQueueDelegate-Protocol.h"

@class NSMutableArray;

@interface HDCloudSyncManagerTaskQueue : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSMutableArray *_pendingTasks;
  long long _pendingTasksBeingSorted;
  BOOL _isComputingActiveTask;
  BOOL _isStartingNextTask;
}

@property (weak) NSObject<HDCloudSyncManagerTaskQueueDelegate> *delegate;
@property (readonly) long long pendingTaskCount;
@property (readonly) BOOL hasActiveTask;
@property (readonly) HDCloudSyncManagerTask *activeTask;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)addTask:(id)task;
@end

#endif /* HDCloudSyncManagerTaskQueue_h */