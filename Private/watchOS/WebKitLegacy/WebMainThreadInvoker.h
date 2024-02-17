//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebMainThreadInvoker_h
#define WebMainThreadInvoker_h
@import Foundation;

#include "NSProxy.h"

@protocol {RetainPtr<id>="m_ptr"^v};

@interface WebMainThreadInvoker : NSProxy {
  /* instance variables */
  id target;
  struct RetainPtr<id> { void *m_ptr; } exception;
}

/* instance methods */
- (id)initWithTarget:(id)target;
- (void)forwardInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)handleException:(id)exception;
@end

#endif /* WebMainThreadInvoker_h */