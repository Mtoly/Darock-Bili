//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCAchievementNotificationContent_h
#define FCCAchievementNotificationContent_h
@import Foundation;

#include "FCCDataSerializable-Protocol.h"

@class ACHAchievement, NSString;

@interface FCCAchievementNotificationContent : NSObject<FCCDataSerializable>

@property (readonly, nonatomic) ACHAchievement *achievement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAchievement:(id)achievement;
- (id)initWithTransportData:(id)data;
- (id)transportData;
@end

#endif /* FCCAchievementNotificationContent_h */