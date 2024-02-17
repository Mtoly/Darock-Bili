//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMThreadedInvocationTrampoline_h
#define IMThreadedInvocationTrampoline_h
@import Foundation;

#include "IMInvocationTrampoline.h"

@class NSThread;

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline {
  /* instance variables */
  NSThread *_thread;
  BOOL _immediateForMatchingThread;
}

/* instance methods */
- (id)initWithTarget:(id)target thread:(id)thread immediateForMatchingThread:(BOOL)thread;
- (void)forwardInvocation:(id)invocation;
@end

#endif /* IMThreadedInvocationTrampoline_h */