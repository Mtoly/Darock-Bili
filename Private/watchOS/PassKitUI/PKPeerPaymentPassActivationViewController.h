//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentPassActivationViewController_h
#define PKPeerPaymentPassActivationViewController_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKExplanationViewControllerDelegate-Protocol.h"
#include "PKExplanationViewDelegate-Protocol.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKPeerPaymentSetupFlowController.h"
#include "PKPeerPaymentSetupFlowControllerDataSource-Protocol.h"
#include "PKPeerPaymentSetupFlowHeroView.h"

@class CLInUseAssertion, NSString;

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController<PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPeerPaymentSetupFlowControllerDataSource> {
  /* instance variables */
  PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
  PKPeerPaymentSetupFlowHeroView *_heroView;
  unsigned long long _state;
  unsigned long long _operations;
  BOOL _shouldShowAddDebitCardViewController;
  NSObject<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
  CLInUseAssertion *_inUseAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPeerPaymentSetupFlowController:(id)controller;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)dealloc;
- (void)_invalidateCLInUseAssertion;
- (BOOL)shouldPushTerms;
- (void)explanationViewDidSelectContinue:(id)continue;
- (void)explanationViewDidSelectSetupLater:(id)later;
- (void)explanationViewControllerDidSelectCancel:(id)cancel;
- (void)_terminateSetupFlow;
- (void)_beginSetup;
- (void)_setState:(unsigned long long)state;
- (void)_handleActivatedState;
- (void)_presentDisplayableError:(id)error;
- (void)_presentActivationFailedErrorAlert;
- (BOOL)_shouldShowAddDebitCardViewController;
- (id)_titleStringForState;
- (id)_bodyStringForState;
- (void)_showSpinner:(BOOL)spinner;
@end

#endif /* PKPeerPaymentPassActivationViewController_h */