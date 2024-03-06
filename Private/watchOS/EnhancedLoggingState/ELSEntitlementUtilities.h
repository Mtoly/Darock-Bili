//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 48.2.0.0.0
//
#ifndef ELSEntitlementUtilities_h
#define ELSEntitlementUtilities_h
@import Foundation;

@interface ELSEntitlementUtilities : NSObject
/* class methods */
+ (BOOL)currentProcessHasEntitlement:(id)entitlement;
+ (void)assertCurrentProcessHasEntitlement;
+ (BOOL)auditToken:(struct { unsigned int x0[8] } *)token hasEntitlement:(id)entitlement;
+ (id)entitlementMissingMessage;
@end

#endif /* ELSEntitlementUtilities_h */