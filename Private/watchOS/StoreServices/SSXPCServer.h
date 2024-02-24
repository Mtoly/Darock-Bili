//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSXPCServer_h
#define SSXPCServer_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SSXPCServer : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  NSString *_entitlementName;
  NSObject<OS_xpc_object> *_listener;
  NSObject<OS_dispatch_queue> *_observerQueue;
  NSMutableDictionary *_observers;
  NSString *_serviceName;
  NSMutableSet *_xpcRequestsCache;
}

/* class methods */
+ (id)mainServer;

/* instance methods */
- (id)init;
- (id)initWithServiceName:(id)name;
- (id)initWithServiceName:(id)name entitlement:(id)entitlement queue:(id)queue;
- (void)dealloc;
- (void)addObserver:(id)observer selector:(SEL)selector forMessage:(long long)message;
- (void)removeObserver:(id)observer selector:(SEL)selector forMessage:(long long)message;
- (void)start;
- (void)_dispatchMessage:(id)message connection:(id)connection;
- (void)_recordCoreAnalyticsEventForClient:(id)client andSelector:(id)selector;
@end

#endif /* SSXPCServer_h */