//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLChargingManagerStateOnACWaitingForLaunchCompletion_h
#define CSLChargingManagerStateOnACWaitingForLaunchCompletion_h
@import Foundation;

#include "CSLChargingManagerState.h"

@interface CSLChargingManagerStateOnACWaitingForLaunchCompletion : CSLChargingManagerState
/* instance methods */
- (long long)type;
- (BOOL)isOnAC;
- (id)executeTransitionForEvent:(long long)event;
@end

#endif /* CSLChargingManagerStateOnACWaitingForLaunchCompletion_h */