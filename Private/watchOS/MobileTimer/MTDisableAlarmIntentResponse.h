//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTDisableAlarmIntentResponse_h
#define MTDisableAlarmIntentResponse_h
@import Foundation;

#include "INIntentResponse.h"

@interface MTDisableAlarmIntentResponse : INIntentResponse

@property (nonatomic) long long code;

/* instance methods */
- (id)initWithCode:(long long)code userActivity:(id)activity;
@end

#endif /* MTDisableAlarmIntentResponse_h */