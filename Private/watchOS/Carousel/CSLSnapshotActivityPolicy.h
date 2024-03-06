//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSnapshotActivityPolicy_h
#define CSLSnapshotActivityPolicy_h
@import Foundation;

#include "CSLActivityPolicy-Protocol.h"
#include "CSLThrottledActivityPolicy.h"
#include "CSLThrottledActivityPolicyDelegate-Protocol.h"

@class NSString;

@interface CSLSnapshotActivityPolicy : NSObject<CSLActivityPolicy, CSLThrottledActivityPolicyDelegate>

@property (readonly) CSLThrottledActivityPolicy *throttledActivityPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithThrottledActivityPolicy:(id)policy;
- (BOOL)appliesToActivity:(id)activity;
- (id)responseForActivity:(id)activity withState:(id)state;
- (id)policy:(id)policy budgetManagerForContext:(id)context;
@end

#endif /* CSLSnapshotActivityPolicy_h */