//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSBaseXPCClient_h
#define BSBaseXPCClient_h
@import Foundation;

#include "BSAtomicSignal.h"

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSBaseXPCClient : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  BSAtomicSignal *_invalidationSignal;
  NSObject<OS_xpc_object> *_serverEndpoint;
  NSString *_serviceName;
  int _clientInvalidated;
  int _notifyToken;
  NSObject<OS_xpc_object> *_connection;
}

@property (readonly, nonatomic) BOOL suspended;

/* instance methods */
- (id)init;
- (id)initWithServiceName:(id)name;
- (id)initWithServiceName:(id)name endpoint:(id)endpoint;
- (id)initWithEndpoint:(id)endpoint;
- (void)dealloc;
- (BOOL)isSuspended;
- (void)reconnectIfNecessary;
- (void)suspendConnection;
- (void)resumeConnection;
- (void)invalidate;
- (id)_errorFromMessageIfAny:(id)any;
- (id)_getStringFromMessage:(id)message key:(char *)key;
- (void)_sendReply:(id)reply messagePacker:(id /* block */)packer;
- (void)_sendMessageReply:(id)reply messagePacker:(id /* block */)packer;
- (void)_sendReplyForMessage:(id)message messagePacker:(id /* block */)packer;
- (void)_sendMessage:(id /* block */)message;
- (void)_sendMessage:(id /* block */)message withReplyHandler:(id /* block */)handler waitForReply:(BOOL)reply waitDuration:(unsigned long long)duration;
- (id)_connection;
- (void)_setEndpoint:(id)endpoint;
- (void)queue_handleMessage:(id)message;
- (void)queue_handleError:(id)error;
- (void)queue_connectionWasCreated;
- (void)queue_connectionWasResumed;
- (void)queue_connectionWasSuspended;
- (void)queue_connectionWasDestroyed;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasInvalidated;
- (void)queue_clientWasInvalidated;
- (id)_connectionInstanceUUID;
- (id)queue_connection;
@end

#endif /* BSBaseXPCClient_h */