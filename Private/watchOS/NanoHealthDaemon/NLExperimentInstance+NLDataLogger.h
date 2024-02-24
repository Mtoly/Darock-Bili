//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLExperimentInstance_NLDataLogger_h
#define NLExperimentInstance_NLDataLogger_h
@import Foundation;

#include "HDCurrentActivitySummaryHelperObserver-Protocol.h"
#include "HDDataObserver-Protocol.h"
#include "HDDatabaseProtectedDataObserver-Protocol.h"
#include "HDHealthDaemonReadyObserver-Protocol.h"
#include "NLBridgeSettings.h"
#include "NLBridgeSettingsObserver-Protocol.h"
#include "NLCoachingAlertNotifier.h"
#include "NLDataLog.h"
#include "NLIngestionTrackerDelegate-Protocol.h"

@class AWDServerConnection, EKEventStore, HDProfile, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NLExperimentInstance (NLDataLogger)
/* instance methods */
- (int)testActionForCodableAlertType:(int)type;
@end

#endif /* NLExperimentInstance_NLDataLogger_h */