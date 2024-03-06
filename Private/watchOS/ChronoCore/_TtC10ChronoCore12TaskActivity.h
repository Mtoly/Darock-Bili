//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtC10ChronoCore12TaskActivity_h
#define _TtC10ChronoCore12TaskActivity_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface ChronoCore.TaskActivity : Swift._SwiftObject { // (Swift)
  /* instance variables */
   identifier;
   name;
   taskIdentifier;
   rateLimitIdentifiers;
   rateLimitedDeviceIdentifiers;
   duetBudgetIdentity;
   budgetedDeviceIdentifiers;
   containingAppIdentifier;
   requiredDataProtectionLevel;
   schedulingConfiguration;
   schedulingOptions;
   effectivePowerlogWakeReason;
   effectivePowerlogWakeCost;
   activationHandler;
   logDigest;
}

@end

#endif /* _TtC10ChronoCore12TaskActivity_h */