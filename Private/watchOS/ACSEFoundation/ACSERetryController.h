//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 300.21.0.2.0
//
#ifndef ACSERetryController_h
#define ACSERetryController_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface ACSERetryController : NSObject {
  /* instance variables */
  unsigned long long _maxNumberOfRetries;
  NSObject<OS_dispatch_queue> *_queue;
  id /* block */ _executionBlock;
}

@property (readonly, nonatomic) unsigned long long numberOfAttempts;

/* instance methods */
- (id)initWithMaxNumberOfRetries:(unsigned long long)retries block:(id /* block */)block;
- (BOOL)executeBlock;
- (BOOL)retryAfterSeconds:(unsigned long long)seconds;
@end

#endif /* ACSERetryController_h */