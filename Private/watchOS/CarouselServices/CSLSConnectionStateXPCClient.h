//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSConnectionStateXPCClient_h
#define CSLSConnectionStateXPCClient_h
@import Foundation;

#include "CSLSConnectionStateObserver.h"
#include "CSLSConnectionStateOverrider.h"
#include "CSLSConnectionStateXPCClientInterface-Protocol.h"

@class NSString, NSXPCConnection;

@interface CSLSConnectionStateXPCClient : NSObject<CSLSConnectionStateXPCClientInterface> {
  /* instance variables */
  NSXPCConnection *_connection;
}

@property (weak, nonatomic) CSLSConnectionStateObserver *observer;
@property (weak, nonatomic) CSLSConnectionStateOverrider *overrider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)clientInterface;
+ (id)serverInterface;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (void)connectWithObserver:(id)observer;
- (void)connectionStateDidChange:(id)change;
- (void)connectWithOverrider:(id)overrider;
- (void)overridesDidChange:(id)change;
- (void)updateOverrides:(id)overrides;
- (void)configureOverrides:(id /* block */)overrides;
@end

#endif /* CSLSConnectionStateXPCClient_h */