//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNTimeProfilingSchedulerDecorator_h
#define CNTimeProfilingSchedulerDecorator_h
@import Foundation;

#include "CNScheduler-Protocol.h"

@class NSString;

@interface CNTimeProfilingSchedulerDecorator : NSObject<CNScheduler>

@property (readonly, nonatomic) unsigned long long blockCounter;
@property (readonly, nonatomic) NSObject<CNScheduler> *scheduler;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)os_log;

/* instance methods */
- (id)initWithScheduler:(id)scheduler;
- (unsigned long long)nextBlockNumber;
- (void)performBlock:(id /* block */)block;
- (void)performBlock:(id /* block */)block qualityOfService:(unsigned long long)service;
- (id)performCancelableBlock:(id /* block */)block;
- (id)performCancelableBlock:(id /* block */)block qualityOfService:(unsigned long long)service;
- (id)afterDelay:(double)delay performBlock:(id /* block */)block;
- (id)afterDelay:(double)delay performBlock:(id /* block */)block qualityOfService:(unsigned long long)service;
@end

#endif /* CNTimeProfilingSchedulerDecorator_h */