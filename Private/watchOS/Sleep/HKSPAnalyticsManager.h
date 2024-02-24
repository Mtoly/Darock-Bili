//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPAnalyticsManager_h
#define HKSPAnalyticsManager_h
@import Foundation;

#include "HKSPAnalyticsStore.h"

@interface HKSPAnalyticsManager : NSObject

@property (retain, nonatomic) HKSPAnalyticsStore *analyticsStore;
@property (copy, nonatomic) id /* block */ ihaOptInStatusProvider;
@property (copy, nonatomic) id /* block */ diagnosticsOptInStatusProvider;
@property (copy, nonatomic) id /* block */ analyticsEventConsumer;

/* class methods */
+ (BOOL)defaultIsDiagnosticDataSubmissionAllowed;
+ (id)currentDeviceType;
+ (id)activePairedWatchProductType;

/* instance methods */
- (id)initWithUserDefaults:(id)defaults;
- (id)initWithUserDefaults:(id)defaults ihaOptInStatusProvider:(id /* block */)provider diagnosticsOptInStatusProvider:(id /* block */)provider analyticsEventConsumer:(id /* block */)consumer;
- (void)trackEvent:(id)event;
- (void)trackEvents:(id)events;
- (BOOL)isDiagnosticDataSubmissionAllowed;
- (BOOL)isImproveHealthAndActivitySubmissionAllowed;
@end

#endif /* HKSPAnalyticsManager_h */