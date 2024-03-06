//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIRemoteViewController_ViewControllerOperatorInterface_Protocol_h
#define _UIRemoteViewController_ViewControllerOperatorInterface_Protocol_h
@import Foundation;

@protocol _UIRemoteViewController_ViewControllerOperatorInterface 
/* instance methods */
- (void)__viewServiceAddSceneForwardingLayersForOwners:(id)owners;
- (void)__viewServiceRemoveSceneForwardingLayersForOwners:(id)owners;
- (void)__viewServiceWantsKeyboardEventsWithoutFirstResponderAndCompletionHandler:(id /* block */)handler;
- (void)__viewServiceDidPromoteFirstResponderWithCompletionHandler:(id /* block */)handler;
- (void)__viewServiceDidChangeKeyWindow:(BOOL)window;
- (void)__viewServiceDidChangeHasScrollToTopView:(BOOL)view;
- (void)__setSupportedInterfaceOrientations:(id)orientations;
- (void)__showServiceForType:(long long)type withContext:(id)context replyHandler:(id /* block */)handler;
- (void)__showServiceForText:(id)text type:(long long)type fromRectValue:(id)value replyHandler:(id /* block */)handler;
- (void)__showServiceForText:(id)text selectedTextRangeValue:(id)value type:(long long)type fromRectValue:(id)value replyHandler:(id /* block */)handler;
- (void)__dismissTextServiceSessionAnimated:(BOOL)animated;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)popover;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize { double x0; double x1; })size animated:(BOOL)animated fence:(id)fence withReplyHandler:(id /* block */)handler;
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)shine;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize { double x0; double x1; })change fence:(id)fence;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize { double x0; double x1; })change fence:(id)fence;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)style preferredStatusBarVisibility:(int)visibility updateAnimation:(long long)animation currentAnimationSettings:(id)settings;
- (void)__viewServiceDidUpdatePreferredStatusBarPlacement:(long long)placement;
- (void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(long long)style animationSettings:(id)settings;
- (void)__viewServiceSheetPresentationClientConfigurationDidChange:(id)change attributes:(id)attributes;
- (void)__viewServiceSheetGrabberDidTriggerPrimaryAction;
- (void)__viewServiceSheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)coefficient dismissible:(BOOL)dismissible interruptedOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)__viewServiceSheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x0; double x1; })translation velocity:(struct CGPoint { double x0; double x1; })velocity animateChange:(BOOL)change dismissible:(BOOL)dismissible;
- (void)__viewServiceSheetInteractionDraggingDidEnd;
- (void)__viewServiceDidUpdateClientToHostGesture:(id)gesture;
- (void)__viewServiceDidUpdatePreferredUserInterfaceStyle:(long long)style;
- (void)__viewServiceDidUpdateMultitaskingDragExclusionRects:(id)rects;
- (void)__setServiceMaxFrameSize:(struct CGSize { double x0; double x1; })size;
- (void)__trampolineButtonPressData:(id)data canceled:(BOOL)canceled;
- (void)__showEditAlertViewWithToken:(long long)token canUndo:(BOOL)undo canRedo:(BOOL)redo;
- (void)__handleFocusMovementAction:(id)action;
- (void)__viewServiceDidUpdateActiveGestureCollection:(id)collection;
@end

#endif /* _UIRemoteViewController_ViewControllerOperatorInterface_Protocol_h */