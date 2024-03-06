//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCalendarIconView_h
#define PKCalendarIconView_h
@import Foundation;

#include "UIView.h"

@class UILabel;

@interface PKCalendarIconView : UIView {
  /* instance variables */
  UILabel *_monthLabel;
  UILabel *_dayLabel;
}

/* instance methods */
- (id)initWithDate:(id)date isDisabled:(BOOL)disabled;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
@end

#endif /* PKCalendarIconView_h */