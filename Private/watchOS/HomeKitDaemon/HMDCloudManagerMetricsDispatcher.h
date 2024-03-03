//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCloudManagerMetricsDispatcher_h
#define HMDCloudManagerMetricsDispatcher_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"
#include "HMMLogEventSubmitting-Protocol.h"

@class NSString;

@interface HMDCloudManagerMetricsDispatcher : HMFObject<HMFLogging>

@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithLogEventDispatcher:(id)dispatcher;
- (void)submitFailureEventWithModelType:(id)type failureCode:(unsigned long long)code error:(id)error;
@end

#endif /* HMDCloudManagerMetricsDispatcher_h */