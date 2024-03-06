//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarSystemNavigationAction_h
#define STUIStatusBarSystemNavigationAction_h
@import Foundation;

#include "STUIStatusBarAction.h"

@interface STUIStatusBarSystemNavigationAction : STUIStatusBarAction

@property (nonatomic) unsigned long long destination;

/* class methods */
+ (id)_navigationActionForDestination:(unsigned long long)destination;
+ (id)backNavigationAction;
+ (id)forwardNavigationAction;
@end

#endif /* STUIStatusBarSystemNavigationAction_h */