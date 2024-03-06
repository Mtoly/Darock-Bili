//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextSimpleLinkInteraction_h
#define _UITextSimpleLinkInteraction_h
@import Foundation;

#include "UITextLinkInteraction.h"
#include "UILongPressGestureRecognizer.h"
#include "UITapGestureRecognizer.h"
#include "_UITextInteractableItem.h"

@interface _UITextSimpleLinkInteraction : UITextLinkInteraction {
  /* instance variables */
  UITapGestureRecognizer *_linkTap;
  UILongPressGestureRecognizer *_highlighter;
  _UITextInteractableItem *_highlightedItem;
  BOOL _presentingFromSimpleTap;
}

@property (readonly, nonatomic) BOOL shouldProxyContextMenuDelegate;

/* instance methods */
- (id)initWithShouldProxyContextMenuDelegate:(BOOL)delegate;
- (id)gesturesForFailureRequirements;
- (id)itemInteractableView;
- (id)textLinkInteractableView;
- (void)_removeInteractableItemFromCache:(id)cache;
- (void)linkTapped:(id)tapped;
- (void)highlight:(id)highlight;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)begin;
- (BOOL)interaction_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (void)_gestureRecognizerFailed:(id)failed;
- (BOOL)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint { double x0; double x1; })point asTap:(BOOL)tap precision:(unsigned long long)precision;
- (BOOL)_beginInteractionSessionForLinkAtPoint:(struct CGPoint { double x0; double x1; })point asTap:(BOOL)tap precision:(unsigned long long)precision;
- (BOOL)_allowItemInteractions;
@end

#endif /* _UITextSimpleLinkInteraction_h */