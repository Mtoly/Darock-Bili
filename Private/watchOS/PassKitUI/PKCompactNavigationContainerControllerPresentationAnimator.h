//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCompactNavigationContainerControllerPresentationAnimator_h
#define PKCompactNavigationContainerControllerPresentationAnimator_h
@import Foundation;

#include "PKCompactNavigationContainerController.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface PKCompactNavigationContainerControllerPresentationAnimator : NSObject<UIViewControllerAnimatedTransitioning> {
  /* instance variables */
  NSObject<UIViewControllerContextTransitioning> *_transitionContext;
  BOOL _presenting;
  UIViewController *_presentingVC;
  UIView *_presentingView;
  PKCompactNavigationContainerController *_presentedVC;
  UIView *_presentedView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPresenting:(BOOL)presenting;
- (double)transitionDuration:(id)duration;
- (void)_updateWithTransitionContext:(id)context;
- (void)animateTransition:(id)transition;
@end

#endif /* PKCompactNavigationContainerControllerPresentationAnimator_h */