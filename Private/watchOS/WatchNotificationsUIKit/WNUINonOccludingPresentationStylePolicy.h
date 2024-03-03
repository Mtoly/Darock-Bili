//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUINonOccludingPresentationStylePolicy_h
#define WNUINonOccludingPresentationStylePolicy_h
@import Foundation;

#include "WNUIAlertPresentationPolicy-Protocol.h"

@class NSString;

@interface WNUINonOccludingPresentationStylePolicy : NSObject<WNUIAlertPresentationPolicy>

@property (retain, nonatomic) NSObject<WNUIAlertPresentationPolicy> *lockPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLockPolicy:(id)policy;
- (unsigned long long)presentationRuleForExistingAlertItem:(id)item incomingAlertItem:(id)item;
@end

#endif /* WNUINonOccludingPresentationStylePolicy_h */