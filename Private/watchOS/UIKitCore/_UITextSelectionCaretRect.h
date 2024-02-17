//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextSelectionCaretRect_h
#define _UITextSelectionCaretRect_h
@import Foundation;

#include "UITextSelectionRect.h"

@interface _UITextSelectionCaretRect : UITextSelectionRect {
  /* instance variables */
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
}

/* class methods */
+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (long long)writingDirection;
- (BOOL)containsStart;
- (BOOL)containsEnd;
- (BOOL)isVertical;
@end

#endif /* _UITextSelectionCaretRect_h */