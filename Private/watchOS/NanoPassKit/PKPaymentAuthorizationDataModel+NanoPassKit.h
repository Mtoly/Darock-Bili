//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef PKPaymentAuthorizationDataModel_NanoPassKit_h
#define PKPaymentAuthorizationDataModel_NanoPassKit_h
@import Foundation;

@interface PKPaymentAuthorizationDataModel (NanoPassKit)
/* instance methods */
- (void)npkSetPassAndPaymentApplicationForAID:(id)aid;
- (BOOL)npkIsPeerPayment;
- (BOOL)npkIsSkeletonPeerPayment;
- (BOOL)npkIsTopUp;
- (BOOL)npkIsSplitPeerPayment;
- (BOOL)npkIsSplitPeerPaymentWithAnotherPaymentMethod;
- (BOOL)npkIsSplitPeerPaymentWithoutAnotherPaymentMethod;
- (BOOL)_hasNonPeerPaymentAcceptedPasses;
- (BOOL)npkIsOutgoingPeerPayment;
- (BOOL)npkIsCardOnFilePayment;
- (BOOL)npkIsExternalContextAuthorization;
- (BOOL)npkIsCompanionAuthForTvOS;
@end

#endif /* PKPaymentAuthorizationDataModel_NanoPassKit_h */