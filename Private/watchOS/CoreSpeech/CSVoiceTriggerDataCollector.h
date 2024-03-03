//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVoiceTriggerDataCollector_h
#define CSVoiceTriggerDataCollector_h
@import Foundation;

@interface CSVoiceTriggerDataCollector : NSObject
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)fetchVoiceTriggerHeartBeatMetrics;
- (void)addVTRejectEntry:(id)entry truncateData:(BOOL)data;
- (void)addVTAcceptEntryAndSubmit:(id)submit;
@end

#endif /* CSVoiceTriggerDataCollector_h */