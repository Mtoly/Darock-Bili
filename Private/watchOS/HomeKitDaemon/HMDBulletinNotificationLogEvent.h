//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBulletinNotificationLogEvent_h
#define HMDBulletinNotificationLogEvent_h
@import Foundation;

#include "HMMLogEvent.h"

@class NSString;

@interface HMDBulletinNotificationLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSString *topic;

/* instance methods */
- (id)initWithTopic:(long long)topic;
@end

#endif /* HMDBulletinNotificationLogEvent_h */