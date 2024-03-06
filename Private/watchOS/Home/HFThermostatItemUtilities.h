//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFThermostatItemUtilities_h
#define HFThermostatItemUtilities_h
@import Foundation;

#include "HFTemperatureItemUtilities.h"

@interface HFThermostatItemUtilities : HFTemperatureItemUtilities
/* class methods */
+ (void)getDescription:(out id *)description controlDescription:(out id *)description optionalDescriptions:(out id *)descriptions forResponse:(id)response primaryService:(id)service temperatureFormatter:(id)formatter;
@end

#endif /* HFThermostatItemUtilities_h */