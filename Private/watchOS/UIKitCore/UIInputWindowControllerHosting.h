//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputWindowControllerHosting_h
#define UIInputWindowControllerHosting_h
@import Foundation;

#include "UIInputWindowController.h"

@class NSArray, NSMutableArray;

@interface UIInputWindowControllerHosting : NSObject {
  /* instance variables */
  NSMutableArray *_hostingItems;
  unsigned long long _currentState;
}

@property (nonatomic) int extraHostsRequired;
@property (weak, nonatomic) UIInputWindowController *owner;
@property (readonly, retain, nonatomic) NSArray *allHostingItems;
@property (nonatomic) BOOL requiresConstraintUpdate;

/* instance methods */
- (id)initWithHost:(id)host;
- (BOOL)useCrescendoHostingItem;
- (void)unloadForPlacement;
- (void)reloadForPlacementForInputViewSet:(id)set;
- (id)itemForPurpose:(unsigned long long)purpose;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_inputViewPadding;
- (void)updateViewConstraints;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (void)resetBackdropHeight;
- (void)updateConstraintInsets;
- (void)updateEmptyHeightConstraint;
- (void)disableViewSizingConstraints:(unsigned long long)constraints forNewView:(id)view;
- (void)removeAllAnimations;
- (void)setNeedsLayout;
- (void)performForInputAccessoryBackdropViews:(id /* block */)views;
- (void)layoutIfNeeded;
- (void)_updateBackdropViews;
- (void)clearInputViewEdgeConstraints;
- (void)resetInputViewVisibility;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)clearInputAssistantViewEdgeConstraints;
- (void)removeInputAssistantHostView;
- (void)updateViewSizingConstraints;
- (void)extendKeyboardBackdropHeight:(double)height withDuration:(double)duration;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrame;
- (id)subPlacementFromPlacement:(id)placement forHost:(id)host;
- (id)placementForHost:(id)host;
- (id)expectedPlacementForHost:(id)host;
- (BOOL)host:(id)host isForPurpose:(unsigned long long)purpose;
- (unsigned long long)indexOfHost:(id)host;
- (id)scrollTrackingView;
- (void)removeMatchMoveAnimationIfNeeded;
@end

#endif /* UIInputWindowControllerHosting_h */