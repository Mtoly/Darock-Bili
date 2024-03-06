//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKTransientAssertion_h
#define NPKTransientAssertion_h
@import Foundation;

#include "NPKTransientPassAssertionServerClientProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface NPKTransientAssertion : NSObject<NPKTransientPassAssertionServerClientProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (id)_remoteObjectProxy;
- (void)invalidate;
- (void)handleDelegatedDoublePressEvent;
- (void)handleTerminalAuthenticationRequestedForPassWithUniqueID:(id)id;
- (void)didEnterFieldForPassesWithUniqueIDs:(id)ids;
- (void)_resyncState;
@end

#endif /* NPKTransientAssertion_h */