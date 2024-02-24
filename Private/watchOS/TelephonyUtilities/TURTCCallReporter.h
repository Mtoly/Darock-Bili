//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TURTCCallReporter_h
#define TURTCCallReporter_h
@import Foundation;

#include "TUCallCenter.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TURTCCallReporter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *callUUIDToConversation;
@property (readonly, nonatomic) TUCallCenter *callCenter;

/* instance methods */
- (id)initWithCallCenter:(id)center;
- (void)callStatusChangedNotification:(id)notification;
- (void)report:(id)report withConversation:(id)conversation;
- (id)rtcCallInfoDictionary:(id)dictionary withConversation:(id)conversation;
- (id)reportingSessionForCall:(id)call withConversation:(id)conversation;
- (id)clientName:(id)name;
- (id)serviceName:(id)name withConversation:(id)conversation;
@end

#endif /* TURTCCallReporter_h */