//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKUsageNotificationServer_h
#define PKUsageNotificationServer_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "PKUsageNotificationServerExportedInterface-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;

@interface PKUsageNotificationServer : NSObject<NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSXPCListener *_listener;
  NSMutableSet *_connections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)initializeUsageNotificationServer;
- (void)notifyPassUsed:(id)used fromSource:(long long)source;
- (void)notifyPaymentPassUsedWithTransactionInfo:(id)info;
- (void)serviceResumed;
- (void)serviceSuspended;
@end

#endif /* PKUsageNotificationServer_h */