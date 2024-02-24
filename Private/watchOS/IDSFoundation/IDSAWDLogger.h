//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSAWDLogger_h
#define IDSAWDLogger_h
@import Foundation;

#include "CUTMetricLogger-Protocol.h"

@class NSString;

@interface IDSAWDLogger : NSObject<CUTMetricLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logger;

/* instance methods */
- (void)logMetric:(id)metric;
@end

#endif /* IDSAWDLogger_h */