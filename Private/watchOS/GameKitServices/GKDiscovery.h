//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef GKDiscovery_h
#define GKDiscovery_h
@import Foundation;

#include "GKDiscoveryManager.h"

@interface GKDiscovery : NSObject

@property (retain, nonatomic) GKDiscoveryManager *manager;
@property (copy, nonatomic) id /* block */ playerFoundHandler;
@property (copy, nonatomic) id /* block */ playerLostHandler;
@property (copy, nonatomic) id /* block */ receiveDataHandler;

/* instance methods */
- (id)init;
- (id)initWithDomain:(id)domain type:(id)type;
- (void)dealloc;
- (id)startAdvertisingLocalPlayer:(id)player discoveryInfo:(id)info;
- (void)stopAdvertising;
- (void)startBrowsingLocalPlayer:(id)player;
- (void)stopBrowsing;
- (void)sendDataToParticipant:(id)participant deviceID:(id)id data:(id)data withCompletionHandler:(id /* block */)handler;
- (void)forgetParticipant:(id)participant deviceID:(id)id;
@end

#endif /* GKDiscovery_h */