//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBResourceViolationHandler_h
#define RBResourceViolationHandler_h
@import Foundation;

#include "RBAssertionManaging-Protocol.h"

@protocol OS_dispatch_queue, OS_xpc_object;

@interface RBResourceViolationHandler : NSObject {
  /* instance variables */
  NSObject<RBAssertionManaging> *_assertionManager;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_xpc_object> *_listener;
}

/* instance methods */
@end

#endif /* RBResourceViolationHandler_h */