//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRecordChangedLogEvent_h
#define HMDRecordChangedLogEvent_h
@import Foundation;

#include "HMDRecordOperationLogEvent.h"

@interface HMDRecordChangedLogEvent : HMDRecordOperationLogEvent
/* class methods */
+ (id)recordChanged:(id)changed;
+ (id)legacyRecordChanged:(id)changed;

/* instance methods */
- (id)initWithChangedRecord:(id)record isLegacy:(BOOL)legacy;
@end

#endif /* HMDRecordChangedLogEvent_h */