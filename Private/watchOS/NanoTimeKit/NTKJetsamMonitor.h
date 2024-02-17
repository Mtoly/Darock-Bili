//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKJetsamMonitor_h
#define NTKJetsamMonitor_h
@import Foundation;

#include "NTKJetsamInfoFetcher.h"

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NTKJetsamMonitor : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_monitorQ;
  NSObject<OS_dispatch_source> *_monitorTimer;
  int _transactionCount;
  NTKJetsamInfoFetcher *_fetcher;
}

/* class methods */
+ (id)sharedJetsamMonitor;

/* instance methods */
- (id)init;
- (void)incrementTransactionCount;
- (void)decrementTransactionCount;
@end

#endif /* NTKJetsamMonitor_h */