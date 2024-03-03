//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBInterfaceOrientationService_h
#define FBInterfaceOrientationService_h
@import Foundation;

#include "FBInterfaceOrientationServiceServer.h"

@interface FBInterfaceOrientationService : NSObject {
  /* instance variables */
  FBInterfaceOrientationServiceServer *_server;
}

@property (readonly, nonatomic) long long interfaceOrientation;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)setInterfaceOrientation:(long long)orientation animationSettings:(id)settings direction:(long long)direction;
@end

#endif /* FBInterfaceOrientationService_h */