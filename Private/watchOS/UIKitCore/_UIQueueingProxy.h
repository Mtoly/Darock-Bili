//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIQueueingProxy_h
#define _UIQueueingProxy_h
@import Foundation;

#include "_UITargetedProxy.h"

@class NSMutableArray;

@interface _UIQueueingProxy : _UITargetedProxy {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  unsigned long long _suspensionCount;
  NSMutableArray *_queuedInvocations;
  id /* block */ _shouldSuspendInvocationBlock;
}

/* class methods */
+ (id)proxyWithTarget:(id)target shouldSuspendInvocationBlock:(id /* block */)block;
+ (id)proxyWithTarget:(id)target;

/* instance methods */
- (void)forwardInvocation:(id)invocation;
- (void)suspend;
- (void)_dispatchSuspendedMessages;
- (void)resume;
- (void)removeAllEnqueuedInvocations;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)description;
@end

#endif /* _UIQueueingProxy_h */