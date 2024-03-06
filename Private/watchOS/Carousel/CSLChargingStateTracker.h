//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLChargingStateTracker_h
#define CSLChargingStateTracker_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "CSLTimeLimitedEventHistory.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CSLChargingStateTracker : NSObject<BSDescriptionProviding> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  CSLTimeLimitedEventHistory *_history;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)transitionedFrom:(long long)from toState:(long long)state onEvent:(long long)event;
- (void)_queue_trackEvent:(id)event;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* CSLChargingStateTracker_h */