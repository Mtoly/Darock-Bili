//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.2.1.0.0
//
#ifndef SNConnectionProtocol_Protocol_h
#define SNConnectionProtocol_Protocol_h
@import Foundation;

@protocol SNConnectionProtocol 
/* instance methods */
- (id)start;
- (void)sendData:(id)data;
- (void)setSendPings:(BOOL)pings;
- (void)cancelSynchronously:(BOOL)synchronously isOnConnectionQueue:(BOOL)queue completion:(id /* block */)completion;
- (void)getSNConnectionMetrics:(BOOL)metrics completion:(id /* block */)completion;
@end

#endif /* SNConnectionProtocol_Protocol_h */