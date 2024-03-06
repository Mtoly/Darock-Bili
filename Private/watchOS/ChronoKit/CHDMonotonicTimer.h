//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHDMonotonicTimer_h
#define CHDMonotonicTimer_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"

@interface CHDMonotonicTimer : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_source> *_timer;
}

/* instance methods */
- (void)activateWithTime:(unsigned long long)time repeat:(long long)repeat block:(id /* block */)block;
- (void)invalidate;
@end

#endif /* CHDMonotonicTimer_h */