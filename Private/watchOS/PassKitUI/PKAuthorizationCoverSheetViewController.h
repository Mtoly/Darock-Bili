//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAuthorizationCoverSheetViewController_h
#define PKAuthorizationCoverSheetViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKAuthenticatorDelegate-Protocol.h"

@class NSString, PKAuthenticator, PKGlyphView, UIAccessibilityElement, UIButton, UILabel, UIViewController;
@protocol PKAuthorizationCoverSheetViewControllerDelegate;

@interface PKAuthorizationCoverSheetViewController : UIViewController<PKAuthenticatorDelegate> {
  /* instance variables */
  PKAuthenticator *_authenticator;
  long long _presentationSource;
  BOOL _isInvalid;
  BOOL _authenticating;
  BOOL _hasAttemptedBiometricAuth;
  BOOL _hasPresentedPasscodePrompt;
  long long _coachingState;
  BOOL _shouldUIBeShown;
  BOOL _shouldDrawGlyph;
  unsigned long long _currentState;
  BOOL _isWaitingForPasscodeUI;
  id /* block */ _showPasscodeUICompletion;
  id /* block */ _performSynchronizedFadeInAnimationBlock;
  PKGlyphView *_glyphView;
  UIButton *_enterPasscodeButton;
  UILabel *_titleLabelView;
  UILabel *_subtitleLabelView;
  UIAccessibilityElement *_textAccessibilityElement;
  UIAccessibilityElement *_passcodeAccessibilityElement;
  UIViewController *_passcodeViewController;
  NSObject<PKAuthorizationCoverSheetViewControllerDelegate> *_delegate;
}

@property (nonatomic) BOOL isErrorRecovery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate authenticator:(id)authenticator source:(long long)source;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)appear;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)traitCollectionDidChange:(id)change;
- (void)startEvaluation;
- (void)fadeOutUIWithCompletion:(id /* block */)completion;
- (void)fadeInUIAnimated:(BOOL)uianimated performSynchronizedAnimation:(id /* block */)animation;
- (void)invalidate;
- (void)_presentPasscodeToExitLockout;
- (void)_fallbackToPasscode;
- (void)_transitionToState:(unsigned long long)state animated:(BOOL)animated;
- (id)_genericBiometricLabelAccessibilityLabel:(BOOL)label;
- (id)_passcodeLabelAccessibilityLabel:(BOOL)label;
- (id)_genericBiometricFailureLabelAccessibilityLabel:(BOOL)label;
- (id)_genericBiometricUnavailableLabelAccessibilityLabel:(BOOL)label;
- (void)_animateInPasscodeViewController;
- (void)authenticator:(id)authenticator didTransitionToEvaluationStateWithEvent:(struct { long long x0; long long x1; })event;
- (void)presentPasscodeViewController:(id)controller completionHandler:(id /* block */)handler reply:(id /* block */)reply;
- (void)dismissPasscodeViewController;
- (void)authenticator:(id)authenticator didTransitionToCoachingState:(long long)state;
@end

#endif /* PKAuthorizationCoverSheetViewController_h */