//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASSimpleCoalescingTimer_h
#define _PASSimpleCoalescingTimer_h
@import Foundation;

#include "_PASCoalescingTimer.h"

@interface _PASSimpleCoalescingTimer : NSObject {
  /* instance variables */
  _PASCoalescingTimer *_timer;
}

/* instance methods */
- (id)initWithQueue:(id)queue leewaySeconds:(double)seconds operation:(id /* block */)operation;
- (id)initWithQueue:(id)queue operation:(id /* block */)operation;
- (void)runAfterDelaySeconds:(double)seconds coalescingBehavior:(unsigned char)behavior;
- (void)runImmediately;
- (void)runAfterStrictDelaySeconds:(double)seconds;
- (void)cancelPendingOperations;
@end

#endif /* _PASSimpleCoalescingTimer_h */