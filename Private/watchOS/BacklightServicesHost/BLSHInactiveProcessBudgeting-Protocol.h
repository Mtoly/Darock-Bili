//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHInactiveProcessBudgeting_Protocol_h
#define BLSHInactiveProcessBudgeting_Protocol_h
@import Foundation;

@protocol BLSHInactiveProcessBudgeting <NSObject>
/* instance methods */
- (long long)allowedFidelityAtDate:(id)date expectedFidelity:(long long)fidelity;
- (id)validateAndChargeFutureSpecifier:(id)specifier nextSpecifier:(id)specifier expectedFidelity:(long long)fidelity;
- (void)resetFutureSpecifiers;
- (void)chargeRenderedSpecifier:(id)specifier expectedFidelity:(long long)fidelity;
- (void)invalidateAtRequestDate:(id)date expectedFidelity:(long long)fidelity invalidationBlock:(id /* block */)block;
- (void)performInvalidation;
- (BOOL)stillTrackingAfterPurgingStaleDataForNowDate:(id)date;
@end

#endif /* BLSHInactiveProcessBudgeting_Protocol_h */