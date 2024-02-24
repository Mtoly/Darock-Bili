//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSystemPowerAssertion_h
#define RBSystemPowerAssertion_h
@import Foundation;

#include "RBPowerAssertion.h"
#include "RBSystemState.h"

@interface RBSystemPowerAssertion : RBPowerAssertion {
  /* instance variables */
  RBSystemState *_state;
}

/* instance methods */
- (id)init;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;
@end

#endif /* RBSystemPowerAssertion_h */