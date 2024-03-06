//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.4.0.0.0
//
#ifndef FAFamilyNotifierAgentProtocol_Protocol_h
#define FAFamilyNotifierAgentProtocol_Protocol_h
@import Foundation;

@protocol FAFamilyNotifierAgentProtocol <NSObject>
/* instance methods */
- (void)deliverNotificaton:(id)notificaton;
- (void)removeNotificationWithIdentifier:(id)identifier;
- (void)removeAllNotifications;
- (void)pendingNotificationsWithIdentifier:(id)identifier replyBlock:(id /* block */)block;
- (void)setClientIdentifier:(id)identifier;
- (void)setDelegateMachServiceName:(id)name;
@end

#endif /* FAFamilyNotifierAgentProtocol_Protocol_h */