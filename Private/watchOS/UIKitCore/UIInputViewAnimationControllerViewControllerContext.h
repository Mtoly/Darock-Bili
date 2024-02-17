//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputViewAnimationControllerViewControllerContext_h
#define UIInputViewAnimationControllerViewControllerContext_h
@import Foundation;

#include "UIInputViewAnimationHost-Protocol.h"
#include "UIInputViewSet.h"
#include "UIKBViewTreeSnapshotter.h"
#include "UIView.h"
#include "UIViewControllerContextTransitioning-Protocol.h"
#include "UIViewControllerKeyboardContextTransitioning-Protocol.h"
#include "_UIViewControllerTransitionContext.h"

@class NSString;

@interface UIInputViewAnimationControllerViewControllerContext : NSObject<UIViewControllerKeyboardContextTransitioning> {
  /* instance variables */
  _UIViewControllerTransitionContext *_context;
  NSObject<UIInputViewAnimationHost> *_host;
  UIView *_from;
  UIView *_to;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromRect;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toRect;
  UIKBViewTreeSnapshotter *_kbSnapshotter;
  UIInputViewSet *_preservedInputViewSet;
}

@property (readonly, nonatomic) NSObject<UIViewControllerContextTransitioning> *mainContext;
@property (readonly, nonatomic) UIView *fromKeyboard;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fromKeyboardFrame;
@property (readonly, nonatomic) UIView *toKeyboard;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } toKeyboardFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)contextWithHost:(id)host startPlacement:(id)placement endPlacement:(id)placement transitionContext:(id)context;

/* instance methods */
- (id)initWithHost:(id)host startPlacement:(id)placement endPlacement:(id)placement transitionContext:(id)context;
- (void)dealloc;
@end

#endif /* UIInputViewAnimationControllerViewControllerContext_h */