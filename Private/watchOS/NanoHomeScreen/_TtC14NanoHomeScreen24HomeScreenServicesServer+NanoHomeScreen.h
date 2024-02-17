//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _TtC14NanoHomeScreen24HomeScreenServicesServer_NanoHomeScreen_h
#define _TtC14NanoHomeScreen24HomeScreenServicesServer_NanoHomeScreen_h
@import Foundation;

@interface NanoHomeScreen.HomeScreenServicesServer (NanoHomeScreen) <NSXPCListenerDelegate, NHSSServerInterface>
/* instance methods */
- (void)dumpSmartStackDiagnosticsWithCompletion:(id /* block */)completion;
- (void)updateDemoOrder:(id)order withCompletion:(id /* block */)completion;
- (void)acquireAssertionWithRole:(unsigned long long)role descriptor:(id)descriptor completion:(id /* block */)completion;
- (void)invalidateAssertionToken:(id)token completion:(id /* block */)completion;
- (void)invalidateAllAssertionsWithDescriptor:(id)descriptor completion:(id /* block */)completion;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
@end

#endif /* _TtC14NanoHomeScreen24HomeScreenServicesServer_NanoHomeScreen_h */