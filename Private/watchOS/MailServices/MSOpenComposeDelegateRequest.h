//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MSOpenComposeDelegateRequest_h
#define MSOpenComposeDelegateRequest_h
@import Foundation;

#include "MSXPCService.h"

@interface MSOpenComposeDelegateRequest : MSXPCService
/* instance methods */
- (id)init;
- (void)checkInComposeWithIdentifier:(id)identifier completion:(id /* block */)completion;
@end

#endif /* MSOpenComposeDelegateRequest_h */