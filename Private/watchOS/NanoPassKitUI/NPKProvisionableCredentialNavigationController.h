//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProvisionableCredentialNavigationController_h
#define NPKProvisionableCredentialNavigationController_h
@import Foundation;

#include "PUICNavigationController.h"
#include "NPKActivationCodeEntryViewControllerDelegate-Protocol.h"
#include "NPKPinCodeEntryViewControllerDelegate-Protocol.h"
#include "NPKProvisionableCredentialDetailViewControllerDelegate-Protocol.h"
#include "NPKProvisionableCredentialNavigationControllerSetupDelegate-Protocol.h"

@class NSArray, NSString, PKPassShareActivationOptions, PKShareRedemptionAnalyticsReporter;

@interface NPKProvisionableCredentialNavigationController : PUICNavigationController<NPKProvisionableCredentialDetailViewControllerDelegate, NPKActivationCodeEntryViewControllerDelegate, NPKPinCodeEntryViewControllerDelegate>

@property (retain, nonatomic) PKShareRedemptionAnalyticsReporter *analyticsReporter;
@property (weak, nonatomic) NSObject<NPKProvisionableCredentialNavigationControllerSetupDelegate> *setupDelegate;
@property (copy, nonatomic) NSString *referralSource;
@property (retain, nonatomic) NSArray *displayableSharedEntitlements;
@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)provisioningViewController;
- (id)activationCodeEntryViewController;
- (void)handleEnteredActivationCode:(id)code;
- (void)handleProvisioningCompletedWithSuccess:(BOOL)success error:(id)error;
- (void)handleProvisioningCancelled;
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (void)provisionableCredentialDetailViewController:(id)controller didProvisionPass:(id)pass error:(id)error;
- (void)provisionableCredentialDetailViewController:(id)controller didDismissWithProvisionedPass:(id)pass;
- (void)provisionableCredentialDetailViewController:(id)controller didTapActivityButton:(id)button;
- (void)didSelectPinCodeEntryForActivationCodeViewController:(id)controller;
- (void)activationCodeViewController:(id)controller didSelectContinueWithActivationCode:(id)code;
- (void)didSelectCancelForActivationCodeViewController:(id)controller;
- (void)pinCodeEntryViewController:(id)controller didEnterPinCode:(id)code;
- (void)pinCodeEntryViewControllerDidCancel:(id)cancel;
- (id)_initialViewController;
- (void)_cancelButtonTapped:(id)tapped;
- (BOOL)_requiresActivationCode;
- (id)_pinCodeEntryViewController;
- (void)_showActivationCodeViewController;
- (void)_showPinCodeEntryViewController;
- (void)_showProvisioningViewController;
- (void)_reportProvisioningFinishedWithSuccess:(BOOL)success error:(id)error;
@end

#endif /* NPKProvisionableCredentialNavigationController_h */