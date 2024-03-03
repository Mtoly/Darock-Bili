//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFFaucetServiceItem_h
#define HFFaucetServiceItem_h
@import Foundation;

#include "HFServiceItem.h"

@interface HFFaucetServiceItem : HFServiceItem
/* class methods */
+ (id)supportedServiceTypes;

/* instance methods */
- (BOOL)_shouldSubsumeValveInOverallActiveState;
- (id)servicesToReadForCharacteristicType:(id)type;
- (id)createControlItemsWithOptions:(id)options;
- (id)_subclass_updateWithOptions:(id)options;
- (BOOL)containsActions;
- (id)currentStateActionBuildersForHome:(id)home;
@end

#endif /* HFFaucetServiceItem_h */