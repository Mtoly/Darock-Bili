//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef NSXPCConnection_StatusKitAgent_h
#define NSXPCConnection_StatusKitAgent_h
@import Foundation;

@interface NSXPCConnection (StatusKitAgent)
/* instance methods */
- (id)sk_stringArrayValueForEntitlement:(id)entitlement;
- (BOOL)sk_booleanValueForEntitlement:(id)entitlement;
- (id)sk_stringValueForEntitlement:(id)entitlement;
@end

#endif /* NSXPCConnection_StatusKitAgent_h */