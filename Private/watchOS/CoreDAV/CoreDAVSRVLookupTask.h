//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVSRVLookupTask_h
#define CoreDAVSRVLookupTask_h
@import Foundation;

#include "CoreDAVTask.h"

@class NSArray, NSString, NSTimer;
@protocol OS_nw_resolver;

@interface CoreDAVSRVLookupTask : CoreDAVTask {
  /* instance variables */
  NSObject<OS_nw_resolver> *_resolver;
  NSTimer *_timeoutTimer;
}

@property (retain, nonatomic) NSString *serviceString;
@property (retain, nonatomic) NSArray *fetchedRecords;

/* instance methods */
- (id)initWithServiceString:(id)string;
- (id)description;
- (void)performCoreDAVTask;
- (void)finishCoreDAVTaskWithError:(id)error;
- (void)_runOnCallbackThread:(id /* block */)thread;
- (void)handleResolvedEndPoints:(id)points;
@end

#endif /* CoreDAVSRVLookupTask_h */