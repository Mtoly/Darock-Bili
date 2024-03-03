//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRGroupSessionDiscovery_h
#define MRGroupSessionDiscovery_h
@import Foundation;

#include "MRGroupSessionDiscoveryClientXPCProtocol-Protocol.h"
#include "MRGroupSessionInfo.h"
#include "MRGroupSessionXPCConnection.h"

@class NSSet;
@protocol MRGroupSessionDiscoveryDelegate, OS_dispatch_queue;

@interface MRGroupSessionDiscovery : NSObject<MRGroupSessionDiscoveryClientXPCProtocol>

@property (retain, nonatomic) MRGroupSessionXPCConnection *connection;
@property (readonly, weak, nonatomic) NSObject<MRGroupSessionDiscoveryDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSSet *discoveredSessions;
@property (retain, nonatomic) MRGroupSessionInfo *activeSession;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } lock;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)initializeConnection;
- (void)registerNotifications;
- (void)handleDidRestoreConnectionNotification;
- (id)debugDescription;
- (void)discoveredSessionsDidChange:(id)change;
- (void)activeSessionDidChange:(id)change;
- (void)notifyDelegateWithDiscoveredSessions:(id)sessions;
- (void)notifyDelegateWithActiveSession:(id)session;
@end

#endif /* MRGroupSessionDiscovery_h */