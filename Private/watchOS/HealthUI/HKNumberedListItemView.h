//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNumberedListItemView_h
#define HKNumberedListItemView_h
@import Foundation;

#include "UIView.h"

@class UILabel, UIView;

@interface HKNumberedListItemView : UIView

@property (nonatomic) unsigned long long number;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIView *numberLabelBackground;

/* class methods */
+ (id)createNumberedViewWithInteger:(unsigned long long)integer;
+ (id)numberFont;
+ (struct CGSize { double x0; double x1; })listItemSize;

/* instance methods */
- (id)initWithInteger:(unsigned long long)integer;
- (void)layoutSubviews;
- (void)setTintColor:(id)color;
- (void)_setUpUI;
- (void)_setUpConstraints;
@end

#endif /* HKNumberedListItemView_h */