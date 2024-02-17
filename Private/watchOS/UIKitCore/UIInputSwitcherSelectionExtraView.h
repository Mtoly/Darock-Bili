//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputSwitcherSelectionExtraView_h
#define UIInputSwitcherSelectionExtraView_h
@import Foundation;

#include "UIView.h"
#include "UIKeyboardMenuView.h"

@interface UIInputSwitcherSelectionExtraView : UIView {
  /* instance variables */
  double m_pointerOffset;
}

@property (nonatomic) double pointerOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } keyRect;
@property (nonatomic) unsigned long long roundedCorners;
@property (nonatomic) UIKeyboardMenuView *menu;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* UIInputSwitcherSelectionExtraView_h */