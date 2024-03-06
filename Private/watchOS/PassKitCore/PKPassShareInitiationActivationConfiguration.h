//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassShareInitiationActivationConfiguration_h
#define PKPassShareInitiationActivationConfiguration_h
@import Foundation;

#include "PKPassShareActivationOptions.h"

@interface PKPassShareInitiationActivationConfiguration : NSObject

@property (retain, nonatomic) PKPassShareActivationOptions *defaultOptions;
@property (retain, nonatomic) PKPassShareActivationOptions *availableOptions;
@property (nonatomic) BOOL allowUserEdit;
@property (nonatomic) BOOL isBlocked;

/* instance methods */
- (id)description;
@end

#endif /* PKPassShareInitiationActivationConfiguration_h */