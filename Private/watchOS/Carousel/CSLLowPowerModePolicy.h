//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLLowPowerModePolicy_h
#define CSLLowPowerModePolicy_h
@import Foundation;

#include "CSLLowPowerModeStatusObserving-Protocol.h"
#include "CSLLowPowerModeStatusProvider.h"

@class BLSAssertion, NSString;

@interface CSLLowPowerModePolicy : NSObject<CSLLowPowerModeStatusObserving> {
  /* instance variables */
  BLSAssertion *_assertionToAcquireWhenLowPowerMode;
  BLSAssertion *_assertionToAcquireWhenNotLowPowerMode;
  CSLLowPowerModeStatusProvider *_lowPowerModeStatusProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)lowPowerModeStateChanged:(id)changed;
- (void)lowPowerModeStatusProvider:(id)provider lowPowerModeChanged:(BOOL)changed;
@end

#endif /* CSLLowPowerModePolicy_h */