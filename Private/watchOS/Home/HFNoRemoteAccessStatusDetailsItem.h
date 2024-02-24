//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFNoRemoteAccessStatusDetailsItem_h
#define HFNoRemoteAccessStatusDetailsItem_h
@import Foundation;

#include "HFItem.h"

@class HMHome;

@interface HFNoRemoteAccessStatusDetailsItem : HFItem

@property (readonly, nonatomic) HMHome *home;

/* instance methods */
- (id)init;
- (id)initWithHome:(id)home;
- (id)_subclass_updateWithOptions:(id)options;
@end

#endif /* HFNoRemoteAccessStatusDetailsItem_h */