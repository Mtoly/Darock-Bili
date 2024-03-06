//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardFooterTextView_h
#define PKDashboardFooterTextView_h
@import Foundation;

#include "PKDashboardCollectionViewCell.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, UIColor, UITextView;

@interface PKDashboardFooterTextView : PKDashboardCollectionViewCell<UITextViewDelegate> {
  /* instance variables */
  BOOL _isTemplateLayout;
  UITextView *_textView;
}

@property (nonatomic) unsigned long long bottomInsetType;
@property (copy, nonatomic) NSString *footerText;
@property (nonatomic) unsigned int horizontalAlignment;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } linkRange;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)defaultHorizontalInset;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)createSubviews;
- (void)resetFonts;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_updateText;
- (BOOL)_isLinkRangeValid;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
@end

#endif /* PKDashboardFooterTextView_h */