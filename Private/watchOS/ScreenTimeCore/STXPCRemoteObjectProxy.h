//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STXPCRemoteObjectProxy_h
#define STXPCRemoteObjectProxy_h
@import Foundation;

@interface STXPCRemoteObjectProxy : NSObject
/* class methods */
+ (void)proxyFromConnection:(id)connection proxyHandler:(id /* block */)handler;
+ (void)_proxyFromConnection:(id)connection withRetryCount:(unsigned long long)count proxyHandler:(id /* block */)handler;
+ (void)synchronousProxyFromConnection:(id)connection proxyHandler:(id /* block */)handler;
+ (void)_synchronousProxyFromConnection:(id)connection withRetryCount:(unsigned long long)count proxyHandler:(id /* block */)handler;
@end

#endif /* STXPCRemoteObjectProxy_h */