//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentWebServiceTargetDevice_h
#define PKPeerPaymentWebServiceTargetDevice_h
@import Foundation;

#include "PKPeerPaymentService.h"
#include "PKPeerPaymentTargetDeviceDelegate-Protocol.h"
#include "PKPeerPaymentWebServiceTargetDeviceProtocol-Protocol.h"

@class NSString;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject<PKPeerPaymentWebServiceTargetDeviceProtocol> {
  /* instance variables */
  PKPeerPaymentService *_peerPaymentService;
  NSObject<PKPeerPaymentTargetDeviceDelegate> *_targetDeviceDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTargetDeviceDelegate:(id)delegate;
- (void)dealloc;
- (void)peerPaymentReRegisterWithURL:(id)url pushToken:(id)token peerPaymentWebService:(id)service completion:(id /* block */)completion;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)completion;
- (id)account;
- (id)preferences;
- (void)setPreferences:(id)preferences completion:(id /* block */)completion;
- (void)updateAccountWithCompletion:(id /* block */)completion;
- (id)deviceRegion;
- (id)bridgedClientInfo;
- (id)secureElementIdentifiers;
- (BOOL)userHasDisabledPeerPayment;
- (void)setUserHasDisabledPeerPayment:(BOOL)payment;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)controller credential:(id)credential completion:(id /* block */)completion;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)controller peerPaymentWebService:(id)service credential:(id)credential completion:(id /* block */)completion;
- (void)cloudStoreStatusWithCompletion:(id /* block */)completion;
- (void)checkTLKsMissingWithCompletion:(id /* block */)completion;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)completion;
- (void)_handleAccountChangedNotification:(id)notification;
- (void)_handlePreferencesChangedNotification:(id)notification;
- (id)appleAccountInformation;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)handler;
- (id)deviceClass;
@end

#endif /* PKPeerPaymentWebServiceTargetDevice_h */