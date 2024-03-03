//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSNetworkQualityInquiry_h
#define AMSNetworkQualityInquiry_h
@import Foundation;

#include "AMSPromise.h"

@class NSArray;

@interface AMSNetworkQualityInquiry : NSObject {
  /* instance variables */
  NSArray *_lastKnownReports;
  long long _lastReportRefreshTimestamp;
  AMSPromise *_currentInvestigation;
}

/* class methods */
+ (id)sharedInstance;
+ (id)lastConnectionReport;
+ (id)reportForTaskTimingData:(id)data fromReports:(id)reports;
+ (void)updateLastConnectionReportWithTask:(id)task;
+ (BOOL)isEntitled;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)investigateNetworks;
@end

#endif /* AMSNetworkQualityInquiry_h */