//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7617.1.17.12.4
//
#ifndef _RWITCPConnectionDelegate_Protocol_h
#define _RWITCPConnectionDelegate_Protocol_h
@import Foundation;

@protocol _RWITCPConnectionDelegate <NSObject>
@optional
/* instance methods */
- (void)tcpConnection:(id)connection didReceiveMessage:(id)message;
- (void)tcpConnectionDidClose:(id)close;
@end

#endif /* _RWITCPConnectionDelegate_Protocol_h */