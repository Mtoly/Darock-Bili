//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef XPCServiceListener_h
#define XPCServiceListener_h
@import Foundation;

#include "XPCServiceListenerDelegate-Protocol.h"

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface XPCServiceListener : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *listener;
@property (retain, nonatomic) NSMutableSet *serviceConnections;
@property (nonatomic) unsigned long long clientCount;
@property (readonly, retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSObject<XPCServiceListenerDelegate> *delegate;

/* instance methods */
- (id)debugDescription;
- (id)initWithServiceName:(id)name queue:(id)queue delegate:(id)delegate;
- (void)start;
- (void)_workQueueShutDownServiceConnections:(id)connections index:(unsigned long long)index completionBlock:(id /* block */)block;
- (void)shutDownCompletionBlock:(id /* block */)block;
- (void)workQueueHandleIncomingConnection:(id)connection;
- (void)serviceConnectionDidDisconnect:(id)disconnect;
@end

#endif /* XPCServiceListener_h */