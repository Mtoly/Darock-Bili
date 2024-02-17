//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABContactDataSourceLIFOScheduler_h
#define NCABContactDataSourceLIFOScheduler_h
@import Foundation;

#include "CNScheduler-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NCABContactDataSourceLIFOScheduler : NSObject<CNScheduler>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *stack;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)performBlock:(id /* block */)block;
- (void)performBlock:(id /* block */)block qualityOfService:(unsigned long long)service;
- (id)performCancelableBlock:(id /* block */)block;
- (id)performCancelableBlock:(id /* block */)block qualityOfService:(unsigned long long)service;
- (id)afterDelay:(double)delay performBlock:(id /* block */)block;
- (id)afterDelay:(double)delay performBlock:(id /* block */)block qualityOfService:(unsigned long long)service;
- (void)dealloc;
@end

#endif /* NCABContactDataSourceLIFOScheduler_h */