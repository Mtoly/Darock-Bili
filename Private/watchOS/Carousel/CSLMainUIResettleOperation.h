//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLMainUIResettleOperation_h
#define CSLMainUIResettleOperation_h
@import Foundation;

#include "NSOperation.h"
#include "CSLMainUIPolicy-Protocol.h"
#include "CSLMainUIState.h"

@interface CSLMainUIResettleOperation : NSOperation {
  /* instance variables */
  BOOL _finished;
  BOOL _executing;
  CSLMainUIState *_state;
  NSObject<CSLMainUIPolicy> *_policy;
}

/* instance methods */
- (id)initWithState:(id)state policy:(id)policy;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (void)_complete;
@end

#endif /* CSLMainUIResettleOperation_h */