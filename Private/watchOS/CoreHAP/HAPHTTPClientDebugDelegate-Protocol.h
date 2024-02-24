//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPHTTPClientDebugDelegate_Protocol_h
#define HAPHTTPClientDebugDelegate_Protocol_h
@import Foundation;

@protocol HAPHTTPClientDebugDelegate <NSObject>
/* instance methods */
- (void)httpClient:(id)client didReceiveHTTPMessageWithHeaders:(id)headers body:(id)body;
- (void)httpClient:(id)client willSendHTTPMessageWithHeaders:(id)headers body:(id)body;
@end

#endif /* HAPHTTPClientDebugDelegate_Protocol_h */