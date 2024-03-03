//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterEnterAmountViewController_h
#define PKPayLaterEnterAmountViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKEnterCurrencyAmountView.h"
#include "PKEnterCurrencyAmountViewDelegate-Protocol.h"
#include "PKNumberPadSuggestionsViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "_PKVisibilityBackdropView.h"
#include "_PKVisibilityBackdropViewDelegate-Protocol.h"

@class NSDecimalNumber, NSString, PKAccount, PKCurrencyAmount, UIActivityIndicatorView, UIBarButtonItem, UILabel, UIScrollView;

@interface PKPayLaterEnterAmountViewController : UIViewController<PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, _PKVisibilityBackdropViewDelegate, UIScrollViewDelegate> {
  /* instance variables */
  UIScrollView *_scrollView;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  PKAccount *_payLaterAccount;
  NSDecimalNumber *_amount;
  NSString *_currency;
  PKEnterCurrencyAmountView *_enterAmountView;
  UILabel *_amountDetailsLabel;
  _PKVisibilityBackdropView *_blurringView;
  UIBarButtonItem *_spinningItem;
  UIBarButtonItem *_hiddenRightBarButtonItem;
  UIActivityIndicatorView *_activityIndicatorView;
  BOOL _showingSpinner;
  BOOL _wasBackHidden;
  BOOL _keyboardVisible;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKeyboardFrame;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastSeenValidBounds;
  unsigned char _visibility;
}

@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSDecimalNumber *minAllowedAmount;
@property (retain, nonatomic) NSDecimalNumber *maxAllowedAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPayLaterAccount:(id)account;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)headerTitle;
- (id)headerSubtitle;
- (id)keypadSuggestions;
- (void)nextButtonTapped;
- (void)currencyAmountUpdated:(id)updated;
- (void)setAmountDetailsText:(id)text;
- (BOOL)shouldAllowDecimalInput;
- (void)showNavigationBarSpinner:(BOOL)spinner;
- (void)_setNavigationBarEnabled:(BOOL)enabled;
- (void)numberPadSuggestionsView:(id)view didSelectSuggestion:(id)suggestion;
- (void)_updateAmount:(id)amount;
- (void)_updateBarButtonEnabledState;
- (BOOL)_isCurrentAmountValid;
- (BOOL)enterCurrencyAmountView:(id)view shouldChangeAmountFrom:(id)from to:(id)to;
- (BOOL)_shouldShakeWithNewAmount:(id)amount;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)amount;
- (long long)visibilityBackdropView:(id)view preferredStyleForTraitCollection:(id)collection;
- (void)scrollViewDidScroll:(id)scroll;
- (void)_keyboardWillShow:(id)show;
- (void)_keyboardWillChange:(id)change;
- (void)_keyboardWillHide:(id)hide;
- (void)_updateLayoutForKeyboardAction:(id /* block */)action;
- (void)_calculateBlur;
@end

#endif /* PKPayLaterEnterAmountViewController_h */