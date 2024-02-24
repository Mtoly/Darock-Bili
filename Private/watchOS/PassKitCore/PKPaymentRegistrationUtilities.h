//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentRegistrationUtilities_h
#define PKPaymentRegistrationUtilities_h
@import Foundation;

@interface PKPaymentRegistrationUtilities : NSObject
/* class methods */
+ (void)shouldShowWalletInBuddy:(id)buddy completion:(id /* block */)completion;
+ (void)shouldShowWalletInSettings:(id)settings completion:(id /* block */)completion;
+ (void)shouldShowWalletInSettingsWithApplePaySupportInformation:(id)information completion:(id /* block */)completion;
+ (void)shouldShowWalletInDigitalSeparation:(id)separation withDeviceSpecificCompletion:(id /* block */)completion;
+ (void)shouldShowPasscodeAccessibilityOverride:(id)override completion:(id /* block */)completion;
+ (void)configureWebServiceIfNecessary:(id)necessary completion:(id /* block */)completion;
+ (BOOL)_isPaymentSetupSupportedForWebService:(id)service;
+ (void)_shouldShowAddCardFlowForWebService:(id)service completion:(id /* block */)completion;
+ (void)_shouldShowAddCardFlowForWebService:(id)service options:(unsigned long long)options completion:(id /* block */)completion;
+ (void)registrationIsSupportedInCurrentRegionWithWebService:(id)service completion:(id /* block */)completion;
@end

#endif /* PKPaymentRegistrationUtilities_h */