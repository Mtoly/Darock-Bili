//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIContentSwitcherViewController_h
#define WNUIContentSwitcherViewController_h
@import Foundation;

#include "CUISBulletinClientViewController.h"
#include "BSDescriptionProviding-Protocol.h"
#include "CUISBulletinQuickLongLook-Protocol.h"
#include "CUISBulletinQuickLongLookDelegate-Protocol.h"
#include "WNUINotificationScenePolicy-Protocol.h"
#include "WNUIPipelineActionDispatching-Protocol.h"
#include "WNUISceneContainer-Protocol.h"
#include "WNUISceneTransactionFactory-Protocol.h"

@class CUISAlertPresentationPolicy, NSLayoutConstraint, NSString, UIViewController;
@protocol CUISBulletinClientViewInfo;

@interface WNUIContentSwitcherViewController : CUISBulletinClientViewController<BSDescriptionProviding, CUISBulletinQuickLongLook, WNUISceneContainer>

@property (retain, nonatomic) UIViewController *currentFocusedViewController;
@property (retain, nonatomic) NSObject<WNUINotificationScenePolicy> *scenePolicy;
@property (nonatomic) unsigned long long presentationModeValue;
@property (retain, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (retain, nonatomic) NSObject<CUISBulletinClientViewInfo> *info;
@property (readonly) BOOL hasContent;
@property (weak, nonatomic) NSObject<WNUIPipelineActionDispatching> *actionDispatcher;
@property (weak, nonatomic) NSObject<WNUISceneTransactionFactory> *sceneTransactionFactory;
@property (nonatomic) BOOL supportsBannerLook;
@property (weak, nonatomic) NSObject<CUISBulletinQuickLongLookDelegate> *quickLongLookDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CUISAlertPresentationPolicy *presentationPolicy;
@property (copy, nonatomic) NSString *sceneIdentifier;

/* class methods */
+ (id)viewControllerWithScenePolicy:(id)policy;

/* instance methods */
- (id)initWithScenePolicy:(id)policy;
- (void)viewDidLoad;
- (id)childViewControllerForStatusBarHidden;
- (void)switchToViewController:(id)controller;
- (void)switchToViewCurrentController;
- (BOOL)_applicationWasNotCompiledForMaritime;
- (void)_applyConstrainedLayout;
- (void)clearCurrentViewController;
- (void)regenerateHeightConstraintIfNecessary;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (void)_setSupportsBannerLook:(BOOL)look;
- (BOOL)shouldPerformDefaultActionOnView:(id)view;
- (BOOL)shouldAutomaticallyClipNotificationContent;
- (void)setPresentationMode:(unsigned long long)mode;
- (unsigned long long)presentationMode;
- (void)animateInQuickLookWithDuration:(double)duration completion:(id /* block */)completion;
- (void)animateInLongLookWithDuration:(double)duration completion:(id /* block */)completion;
- (void)animateToLongLookIfReadyWithCompletion:(id /* block */)completion;
- (void)animateDismissLongLookWithCompletion:(id /* block */)completion;
- (void)animateBannerDismissalWithScaleTransform:(BOOL)transform completion:(id /* block */)completion;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)forwardingTargetForSelector:(SEL)selector;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* WNUIContentSwitcherViewController_h */