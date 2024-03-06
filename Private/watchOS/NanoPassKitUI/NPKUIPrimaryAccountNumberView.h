//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKUIPrimaryAccountNumberView_h
#define NPKUIPrimaryAccountNumberView_h
@import Foundation;

#include "UIView.h"
#include "NPKUIPrimaryAccountNumberViewDelegate-Protocol.h"
#include "PUICQuickboardNumberPadViewDelegate-Protocol.h"

@class NSMutableString, NSString, PUICQuickboardNumberPadView, UILabel;

@interface NPKUIPrimaryAccountNumberView : UIView<PUICQuickboardNumberPadViewDelegate> {
  /* instance variables */
  UILabel *_hintValueLabel;
  PUICQuickboardNumberPadView *_numberPadView;
  NSMutableString *_currentValue;
}

@property (weak, nonatomic) NSObject<NPKUIPrimaryAccountNumberViewDelegate> *delegate;
@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSString *initialTitle;
@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_addSubViews;
- (void)_updateLabel;
- (void)_setValue:(id)value;
- (void)numberPadViewDidSelectDelete:(id)delete;
- (void)numberPadView:(id)view didHighlightNumberPadCharacter:(long long)character;
- (void)numberPadView:(id)view didUnhighlightNumberPadCharacter:(long long)character;
- (void)numberPadView:(id)view didSelectNumberPadCharacter:(long long)character;
- (void)numberPadViewDidSelectOK:(id)ok;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_configureSubViewsForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* NPKUIPrimaryAccountNumberView_h */