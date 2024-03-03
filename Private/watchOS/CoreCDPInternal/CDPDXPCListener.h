//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPDXPCListener_h
#define CDPDXPCListener_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface CDPDXPCListener : NSObject<NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)start;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (BOOL)_connection:(id)_connection hasEntitlement:(id)entitlement;
- (BOOL)_shouldAcceptNewConnectionWithEntitlements:(unsigned long long)entitlements;
- (unsigned long long)_clientTypeForConnection:(id)connection;
- (unsigned long long)_clientTypeForBundleID:(id)id;
@end

#endif /* CDPDXPCListener_h */