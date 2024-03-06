//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWillPresentNotificationAction_h
#define UIWillPresentNotificationAction_h
@import Foundation;

#include "BSAction.h"

@class UNNotification;

@interface UIWillPresentNotificationAction : BSAction

@property (readonly, retain, nonatomic) UNNotification *notification;
@property (readonly, nonatomic) BOOL isDeliverable;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isRemote;

/* instance methods */
- (id)initWithNotification:(id)notification timeout:(double)timeout withHandler:(id /* block */)handler;
- (id)initWithNotification:(id)notification deliverable:(BOOL)deliverable timeout:(double)timeout withHandler:(id /* block */)handler;
- (id)_trigger;
- (long long)UIActionType;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* UIWillPresentNotificationAction_h */