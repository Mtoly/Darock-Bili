//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavigationBarTransitionContextDismissSearch_h
#define _UINavigationBarTransitionContextDismissSearch_h
@import Foundation;

#include "_UINavigationBarTransitionContext.h"
#include "UISearchBar.h"
#include "UIView.h"

@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext {
  /* instance variables */
  UISearchBar *_transitioningSearchBar;
  UIView *_transitioningScopeBarContainer;
}

/* instance methods */
- (int)transition;
- (BOOL)_shouldCrossfadeDismissal;
- (void)_prepareTransitionFromPalette:(id)palette toPalette:(id)palette toPaletteFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepare;
- (void)_animateFromPalette:(id)palette fromPaletteFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame toPalette:(id)palette toPaletteFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)animate;
- (void)complete;
- (void)cancel;
@end

#endif /* _UINavigationBarTransitionContextDismissSearch_h */