//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKDiscoveryDriver_h
#define PKDiscoveryDriver_h
@import Foundation;

#include "PKApplicationWorkspaceObserverProtocol-Protocol.h"
#include "PKDiscoveryLSWatcher.h"
#include "PKHost.h"

@class NSDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, OS_os_activity;

@interface PKDiscoveryDriver : NSObject<PKApplicationWorkspaceObserverProtocol>

@property (retain) NSDictionary *attributes;
@property unsigned long long flags;
@property (copy) id /* block */ report;
@property (retain) NSObject<OS_os_activity> *relatedActivity;
@property (retain) NSSet *lastResults;
@property int annotationNotifyToken;
@property (retain) id mcNotificationToken;
@property (retain) PKDiscoveryLSWatcher *lsWatcher;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_queue> *sync;
@property (retain) PKHost *host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAttributes:(id)attributes flags:(unsigned long long)flags host:(id)host report:(id /* block */)report;
- (void)dealloc;
- (void)performWithPreviousResults:(id)results forceNotify:(BOOL)notify;
- (void)_performWithPreviousResults:(id)results forceNotify:(BOOL)notify uninstalledProxies:(id)proxies;
- (void)cancel;
- (void)installWatchers;
- (void)removeWatchers;
@end

#endif /* PKDiscoveryDriver_h */