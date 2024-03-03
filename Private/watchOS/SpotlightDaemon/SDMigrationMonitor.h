//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef SDMigrationMonitor_h
#define SDMigrationMonitor_h
@import Foundation;

#include "SDEventHandlerProvider-Protocol.h"

@protocol OS_dispatch_queue;

@interface SDMigrationMonitor : NSObject<SDEventHandlerProvider>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL unlocked;
@property (nonatomic) BOOL foundExtensions;
@property (nonatomic) BOOL finishedDataMigration;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ eventHandler;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)suspendMigrationQueue;
- (void)resumeMigrationQueue;
- (void)_didFindExtensions:(id)extensions;
- (void)_finishMigration;
- (void)unlock;
- (void)monitorDataMigrationWithCompletionBlock:(id /* block */)block;
- (void)registerHandlerWithEventMonitor:(id)monitor;
@end

#endif /* SDMigrationMonitor_h */