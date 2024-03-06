//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassShareInitiationNavigationController_h
#define PKPassShareInitiationNavigationController_h
@import Foundation;

#include "PKNavigationController.h"
#include "PKInterceptableActivityViewController.h"
#include "PKInterceptableActivityViewControllerDelegate-Protocol.h"
#include "PKPassShareActivationOverviewViewControllerDelegate-Protocol.h"
#include "PKPassShareInitiationContext.h"
#include "PKPassShareIntroductionExplanationViewControllerDelegate-Protocol.h"
#include "PKPassSharePreviewViewController.h"
#include "PKPassSharePreviewViewControllerDelegate-Protocol.h"
#include "PKShareInitiationAnalyticsReporter.h"
#include "PKShareableCredentialsMessageComposeViewController.h"

@class NSString, PKSharedPassSharesController;
@protocol PKClientShareSecureElementPassViewControllerDelegate;

@interface PKPassShareInitiationNavigationController : PKNavigationController<PKPassSharePreviewViewControllerDelegate, PKInterceptableActivityViewControllerDelegate, PKPassShareIntroductionExplanationViewControllerDelegate, PKPassShareActivationOverviewViewControllerDelegate> {
  /* instance variables */
  PKSharedPassSharesController *_sharesController;
  PKShareableCredentialsMessageComposeViewController *_messageComposer;
  PKPassShareInitiationContext *_context;
  PKShareInitiationAnalyticsReporter *_analyticsReporter;
  PKPassSharePreviewViewController *_previewViewController;
  PKInterceptableActivityViewController *_activityViewController;
  unsigned long long _currentStep;
  BOOL _hasAppeared;
}

@property (weak, nonatomic) NSObject<PKClientShareSecureElementPassViewControllerDelegate> *shareDelegate;
@property (nonatomic) BOOL shouldPromptUserToShare;
@property (nonatomic) BOOL isFromPeopleScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSharesController:(id)controller environment:(unsigned long long)environment;
- (void)viewWillAppear:(BOOL)appear;
- (void)_transitionToNextStep;
- (unsigned long long)_transitionToNextStepIsMockTransition:(BOOL)transition;
- (void)_transitionToStep:(unsigned long long)step;
- (void)_sendOverLegacyCarKeyiMessage;
- (void)_sendOveriMessage;
- (void)_sendOveriMessageUsingComposeViewController;
- (void)_sendOverSelectedChannel;
- (void)_flowDidCancelWithError:(id)error;
- (void)_flowDidCancel;
- (void)_flowDidFinishWithSuccess;
- (void)_revokeCreatedShareWithCompletion:(id /* block */)completion;
- (void)_updateShareActivationOptions;
- (id)_placeholderActivityItem;
- (id)_activityItemForActivationCode;
- (void)sharePreviewViewControllerDidCancel:(id)cancel;
- (void)sharePreviewViewControllerDidContinue:(id)continue;
- (BOOL)interceptableActivityViewController:(id)controller shouldInterceptActivitySelectionOfType:(id)type;
- (void)interceptableActivityViewController:(id)controller didInterceptActivitySelectionOfType:(id)type;
- (void)interceptableActivityViewController:(id)controller didFinishWithShare:(BOOL)share;
- (void)shareActivityDidFinishWithShare:(BOOL)share;
- (void)passShareIntroductionExplanationViewControllerDidContinue:(id)continue;
- (void)passShareIntroductionExplanationViewControllerDidCancel:(id)cancel;
- (void)shareActivationOverviewViewControllerDidFinish:(id)finish;
- (void)shareActivationOverviewViewControllerDidSelectShareCode:(id)code;
@end

#endif /* PKPassShareInitiationNavigationController_h */