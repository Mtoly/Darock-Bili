//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KVDonateServiceProvider_Protocol_h
#define KVDonateServiceProvider_Protocol_h
@import Foundation;

@protocol KVDonateServiceProvider <NSObject>
/* instance methods */
- (id)makeConnection:(id)connection;
- (void)terminateConnection:(id)connection;
- (id)versionLog;
@end

#endif /* KVDonateServiceProvider_Protocol_h */