//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKeyboardBasedNonEditableTextSelectionInteraction_h
#define _UIKeyboardBasedNonEditableTextSelectionInteraction_h
@import Foundation;

#include "_UIKeyboardBasedTextSelectionInteraction.h"

@interface _UIKeyboardBasedNonEditableTextSelectionInteraction : _UIKeyboardBasedTextSelectionInteraction {
  /* instance variables */
  BOOL _isShiftKeyBeingHeld;
}

/* instance methods */
- (void)_synchronousGranularityExpandingGestureWithTimeInterval:(double)interval timeGranularity:(double)granularity isMidPan:(BOOL)pan;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint { double x0; double x1; })location viaDrag:(BOOL)drag;
- (void)oneFingerForcePan:(id)pan;
- (void)oneFingerForcePress:(id)press;
@end

#endif /* _UIKeyboardBasedNonEditableTextSelectionInteraction_h */