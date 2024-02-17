//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIAllocationStatusEntitlementSet_h
#define TRIAllocationStatusEntitlementSet_h
@import Foundation;

#include "TRIAllocationStatusEntitled-Protocol.h"

@class NSSet;

@interface TRIAllocationStatusEntitlementSet : NSObject<TRIAllocationStatusEntitled> {
  /* instance variables */
  NSSet *_allowedDeploymentEnvironments;
}

/* instance methods */
- (id)initWithAllowedDeploymentEnvironments:(id)environments;
- (id)allowedDeploymentEnvironments;
@end

#endif /* TRIAllocationStatusEntitlementSet_h */