//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFConfiguredTriggerRecord_h
#define WFConfiguredTriggerRecord_h
@import Foundation;

#include "WFRecord.h"

@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord

@property (copy, nonatomic) NSData *triggerData;
@property (copy, nonatomic) NSData *selectedEntryMetadata;
@property (nonatomic) BOOL shouldPrompt;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) BOOL editableShortcut;
@property (nonatomic) BOOL enabled;
@property (nonatomic) int source;
@property (nonatomic) int notificationLevel;

/* instance methods */
- (BOOL)isEnabled;
@end

#endif /* WFConfiguredTriggerRecord_h */