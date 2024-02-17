//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef _NSXPCTransport_Protocol_h
#define _NSXPCTransport_Protocol_h
@import Foundation;

@protocol _NSXPCTransport <NSObject>
/* instance methods */
- (void)setMessageHandler:(id /* block */)handler;
- (void)setErrorHandler:(id /* block */)handler;
- (void)sendMessage:(id)message;
- (id)sendMessageWithReplySync:(id)sync;
- (void)sendMessageWithReply:(id)reply onQueue:(id)queue replyHandler:(id /* block */)handler;
- (void)sendNotification:(id)notification;
- (void)sendBarrierBlock:(id /* block */)block;
- (void)setTargetQueue:(id)queue;
- (void)activate;
- (void)suspend;
- (void)resume;
- (void)cancel;
- (struct { unsigned int x0[8] })auditToken;
- (int)auditSessionIdentifier;
- (int)processIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (unsigned int)effectiveGroupIdentifier;
@end

#endif /* _NSXPCTransport_Protocol_h */