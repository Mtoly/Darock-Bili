//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCoreDataTransformerHMFPairingIdentity_h
#define HMDCoreDataTransformerHMFPairingIdentity_h
@import Foundation;

#include "HMDOPACKTransformer.h"

@interface HMDCoreDataTransformerHMFPairingIdentity : HMDOPACKTransformer
/* class methods */
+ (id)OPACKFromValue:(id)value error:(id *)error;
+ (id)valueFromOPACK:(id)opack error:(id *)error;
+ (Class)valueClass;
@end

#endif /* HMDCoreDataTransformerHMFPairingIdentity_h */