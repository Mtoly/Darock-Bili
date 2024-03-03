//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNEntitlementVerification_Protocol_h
#define CNEntitlementVerification_Protocol_h
@import Foundation;

@protocol CNEntitlementVerification <NSObject>
/* instance methods */
- (BOOL)currentProcessHasBooleanEntitlement:(id)entitlement error:(id *)error;
- (BOOL)auditToken:(struct { unsigned int x0[8] })token hasBooleanEntitlement:(id)entitlement error:(id *)error;
- (BOOL)currentProcessHasArrayWithStringValue:(id)value forAnyEntitlement:(id)entitlement error:(id *)error;
- (BOOL)auditToken:(struct { unsigned int x0[8] })token hasArrayWithStringValue:(id)value forAnyEntitlement:(id)entitlement error:(id *)error;
- (id)valuesForCurrentProcessForEntitlements:(id)entitlements error:(id *)error;
- (id)valuesForAuditToken:(struct { unsigned int x0[8] })token forEntitlements:(id)entitlements error:(id *)error;
- (BOOL)currentProcessIsFirstOrSecondPartyWithError:(id *)error;
- (BOOL)auditToken:(struct { unsigned int x0[8] })token isFirstOrSecondPartyWithError:(id *)error;
@end

#endif /* CNEntitlementVerification_Protocol_h */