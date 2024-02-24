//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFAssertionPolicyComposite_h
#define PFAssertionPolicyComposite_h
@import Foundation;

#include "PFAssertionPolicyHandler-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface PFAssertionPolicyComposite : NSObject<PFAssertionPolicyHandler>

@property (readonly) NSArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)addPolicy:(id)policy;
- (void)notifyAssertion:(id)assertion;
@end

#endif /* PFAssertionPolicyComposite_h */