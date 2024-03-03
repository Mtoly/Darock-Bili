//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKShareComposeCoordinator_h
#define NPKShareComposeCoordinator_h
@import Foundation;

#include "MFNanoMailComposeViewControllerDelegate-Protocol.h"
#include "MFNanoMessageComposeViewControllerDelegate-Protocol.h"
#include "NPKShareCapabilitiesViewController.h"
#include "NPKShareCapabilitiesViewControllerDelegate-Protocol.h"
#include "NPKShareComposeCoordinatorDelegate-Protocol.h"
#include "NPKShareComposeFlowController.h"
#include "NPKShareComposeFlowControllerDelegate-Protocol.h"
#include "NPKShareEntitlementsViewControllerDelegate-Protocol.h"
#include "NPKShareSecurityOptionsDetailViewControllerDelegate-Protocol.h"
#include "PKInterceptableActivityViewControllerDelegate-Protocol.h"
#include "PKSharingMessageExtensionRenderer-Protocol.h"
#include "PUICQuickboardContactsViewControllerDelegate-Protocol.h"

@class MFNanoMailComposeViewController, MFNanoMessageComposeViewController, MSMessage, NSString, PKContactResolver, PKInterceptableActivityViewController, PKPassShare, PKPassShareActivationOptions, PKShareInitiationAnalyticsReporter, PKSharedPassSharesController, PUICQuickboardContact, UIViewController;
@protocol PKSharingMessageExtensionPresenter;

@interface NPKShareComposeCoordinator : NSObject<NPKShareComposeFlowControllerDelegate, NPKShareCapabilitiesViewControllerDelegate, PKInterceptableActivityViewControllerDelegate, NPKShareEntitlementsViewControllerDelegate, MFNanoMessageComposeViewControllerDelegate, MFNanoMailComposeViewControllerDelegate, PUICQuickboardContactsViewControllerDelegate, PKSharingMessageExtensionRenderer, NPKShareSecurityOptionsDetailViewControllerDelegate> {
  /* instance variables */
  PKSharedPassSharesController *_sharesController;
  unsigned long long _context;
  NPKShareComposeFlowController *_flowController;
  MFNanoMessageComposeViewController *_messageComposeViewController;
  MFNanoMailComposeViewController *_mailComposeViewController;
  PKInterceptableActivityViewController *_activityViewController;
  NPKShareCapabilitiesViewController *_capabilitiesViewController;
  PKPassShareActivationOptions *_availableOptions;
  BOOL _canEditActivationOptions;
  PUICQuickboardContact *_selectedContact;
  UIViewController *_quickboardPresentingViewController;
  id /* block */ _addContactCompletionHandler;
  id /* block */ _selectEntitlementsCompletionHandler;
  PKPassShare *_pendingShare;
  MSMessage *_composedMessage;
  NSString *_appExtensionIdentifier;
  NSObject<PKSharingMessageExtensionPresenter> *_presenter;
  PKShareInitiationAnalyticsReporter *_analyticsReporter;
}

@property (retain, nonatomic) PKContactResolver *contactResolver;
@property (weak, nonatomic) NSObject<NPKShareComposeCoordinatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *presentationSceneIdentifier;

/* class methods */
+ (id)_genericErrorTitle;
+ (id)_genericErrorMessage;

/* instance methods */
- (id)initWithSharesController:(id)controller context:(unsigned long long)context;
- (id)pass;
- (id)composedShare;
- (void)startShareCompositionFlow;
- (void)handleComposeCancelled;
- (void)handleComposeCompleted;
- (unsigned long long)_currentStep;
- (void)_advanceToNextStep;
- (void)_cancelStep;
- (void)_handleCapabilityConfigurationForShare:(id)share forChannel:(unsigned long long)channel;
- (void)_handleAddContactWithCompletion:(id /* block */)completion;
- (void)_handleEntitlementSelectionWithCompletion:(id /* block */)completion;
- (void)_handleChannelSelectionForShare:(id)share;
- (void)_handleSendingShare:(id)share overChannel:(unsigned long long)channel;
- (void)_handleSendingShareOverMessages;
- (void)_handleSendingShareOverOtherChannel;
- (void)_handleInterceptedActivityForItemWithValue:(id)value;
- (void)_handleShowActivationOverviewForShare:(id)share showShareActions:(BOOL)actions;
- (void)_handleShowActivationOverviewForShare:(id)share activationOption:(id)option showShareActions:(BOOL)actions;
- (void)_handleShareActivationCodeForShare:(id)share;
- (void)_handleShareCompositionCompletedWithSuccess:(BOOL)success error:(id)error;
- (void)_handleError:(id)error;
- (void)_handleDisplayableError:(id)error;
- (void)_handleFlowCancelled;
- (void)_handleFlowCancelledWithError:(id)error;
- (void)_authorizeDeviceOwnerWithAuthHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)_authorizePaymentSheetForInvitation:(id)invitation authHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)_revokeShareIfNecessary;
- (void)_presentAlertWithTitle:(id)title message:(id)message buttonTitle:(id)title completion:(id /* block */)completion;
- (void)_updateShareActivationOptionsForChannel:(unsigned long long)channel;
- (void)_fetchRecipientForChannel:(unsigned long long)channel withCompletion:(id /* block */)completion;
- (void)_handleSelectedContact:(id)contact quickboard:(id)quickboard;
- (void)_handleSelectedRecipientWithName:(id)name handle:(id)handle quickboard:(id)quickboard;
- (void)_updateComposedShareWithRecipientHandle:(id)handle;
- (void)_updateComposerForChannel:(unsigned long long)channel withRecipientName:(id)name recipientHandle:(id)handle;
- (void)_updateForChannel:(unsigned long long)channel withRecipientName:(id)name recipientHandle:(id)handle;
- (id)_channelBundleIdentifierForChannel:(unsigned long long)channel;
- (BOOL)_isRecipientKnownForChannel:(unsigned long long)channel;
- (id)_captionText;
- (id)_presenterForMessage:(id)message;
- (id)_metadataForMessage:(id)message;
- (void)_updateMessageComposer;
- (void)_updateMessageComposerForMessage:(id)message withAppExtensionIdentifier:(id)identifier;
- (id)_mailMessageBodyForURL:(id)url;
- (BOOL)_isWristDetectDisabled;
- (unsigned long long)_pageForStep:(unsigned long long)step;
- (void)_reportSelectedCapabilities;
- (void)shareComposeFlowController:(id)controller didTransitionFromStep:(unsigned long long)step toStep:(unsigned long long)step;
- (void)shareComposeFlowController:(id)controller didFinishWithSuccess:(BOOL)success error:(id)error;
- (void)capabilitiesViewControllerDidSelectAddContact:(id)contact;
- (void)capabilitiesViewControllerDidSelectEntitlementSummary:(id)summary;
- (void)capabilitiesViewController:(id)controller didSelectActivationOption:(id)option;
- (void)capabilitiesViewControllerDidSelectShare:(id)share;
- (void)capabilitiesViewControllerDidSelectCancel:(id)cancel;
- (void)interceptableActivityViewController:(id)controller didFinishWithShare:(BOOL)share;
- (void)interceptableActivityViewController:(id)controller didInterceptActivitySelectionOfType:(id)type;
- (BOOL)interceptableActivityViewController:(id)controller shouldInterceptActivitySelectionOfType:(id)type;
- (void)entitlementsViewController:(id)controller didSelectEntitlements:(id)entitlements forShare:(id)share;
- (void)entitlementsViewController:(id)controller didSelectRevokeShare:(id)share;
- (void)entitlementsViewController:(id)controller encounteredError:(id)error forShare:(id)share;
- (void)entitlementsViewController:(id)controller encounteredError:(id)error forShare:(id)share continueButtonTitle:(id)title continueHandler:(id /* block */)handler cancelHandler:(id /* block */)handler;
- (void)dismissEntitlementsViewController:(id)controller;
- (void)quickboard:(id)quickboard textEntered:(id)entered;
- (void)quickboardInputCancelled:(id)cancelled;
- (void)quickboard:(id)quickboard didSelectContact:(id)contact;
- (void)quickboard:(id)quickboard didSelectContactGroup:(id)group;
- (void)messageComposeViewController:(id)controller didFinishWithResult:(long long)result;
- (void)mailComposeViewController:(id)controller didFinishWithResult:(unsigned long long)result error:(id)error;
- (void)messageDidUpdate;
- (void)openAppURL:(id)url;
- (void)showAlertWithTitle:(id)title message:(id)message button:(id)button;
- (void)showAlertWithTitle:(id)title message:(id)message button:(id)button destructiveButton:(id)button completion:(id /* block */)completion;
- (void)securityOptionsDetailViewController:(id)controller didSelectCallByPhoneToContact:(id)contact forShare:(id)share;
- (void)securityOptionsDetailViewController:(id)controller didSelectShareSheetForShare:(id)share;
@end

#endif /* NPKShareComposeCoordinator_h */