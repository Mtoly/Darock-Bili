//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMValueThrottler_h
#define FMValueThrottler_h
@import Foundation;

#include "FMCancelable-Protocol.h"
#include "FMScheduler-Protocol.h"

@class NSMutableSet;

@interface FMValueThrottler : NSObject

@property (readonly, nonatomic) NSMutableSet *observerBlocks;
@property (retain, nonatomic) NSObject<FMCancelable> *valueUpdateCancelationToken;
@property (readonly, nonatomic) double throttleInterval;
@property (retain, nonatomic) NSObject<FMScheduler> *updateScheduler;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) BOOL hasPendingValueChange;

/* instance methods */
- (id)initWithThrottleInterval:(double)interval;
- (id)initWithThrottleInterval:(double)interval initialValue:(id)value;
- (id)init;
- (void)dealloc;
- (void)_enqueueValueUpdateIfNecessary;
- (void)_notifyObserversOfValueUpdate;
- (id)observeValueChangesWithBlock:(id /* block */)block;
- (void)flushValueChanges;
@end

#endif /* FMValueThrottler_h */