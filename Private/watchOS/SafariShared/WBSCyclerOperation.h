//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSCyclerOperation_h
#define WBSCyclerOperation_h
@import Foundation;

@interface WBSCyclerOperation : NSObject {
  /* instance variables */
  unsigned long long _numberOfRemainingAttempts;
  float _backoffRatio;
}

@property (copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) BOOL finished;
@property (readonly, nonatomic) BOOL executing;
@property (readonly, nonatomic) double nextBackoffTimeInterval;

/* instance methods */
- (id)init;
- (id)initWithMaximumNumberOfAttempts:(unsigned long long)attempts backoffRatio:(float)ratio;
- (void)executeWithResultHandler:(id /* block */)handler;
- (BOOL)isFinished;
- (BOOL)isExecuting;
@end

#endif /* WBSCyclerOperation_h */