//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIEmojiVariantSelectorView_h
#define TUIEmojiVariantSelectorView_h
@import Foundation;

#include "UIView.h"
#include "TUIDrawingView.h"
#include "TUIEmojiVariantSelectorViewDelegate-Protocol.h"

@class EMFEmojiToken, NSArray, UIView;

@interface TUIEmojiVariantSelectorView : UIView

@property (retain, nonatomic) UIView *deepShadowView;
@property (retain, nonatomic) UIView *keyShadowView;
@property (retain, nonatomic) UIView *backdropView;
@property (retain, nonatomic) TUIDrawingView *backgroundMaskView;
@property (retain, nonatomic) TUIDrawingView *borderView;
@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } originRect;
@property (retain, nonatomic) EMFEmojiToken *baseEmojiToken;
@property (retain, nonatomic) NSArray *arrangedVariantCells;
@property (readonly, nonatomic) UIView *variantCellContainerView;
@property (readonly, nonatomic) EMFEmojiToken *selectedVariant;
@property (readonly, nonatomic) NSArray *allVariants;
@property (weak, nonatomic) NSObject<TUIEmojiVariantSelectorViewDelegate> *delegate;

/* class methods */
+ (id)emojiTextAttributes;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame emojiToken:(id)token originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGSize { double x0; double x1; })_emojiCellSize;
- (unsigned long long)_numberOfVariants;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)_backgroundBezierPathForContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)layoutSubviews;
- (void)_unhighlightAllViews;
- (id)_variantCellAtLocation:(struct CGPoint { double x0; double x1; })location;
- (BOOL)_highlightCellAtLocation:(struct CGPoint { double x0; double x1; })location;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

#endif /* TUIEmojiVariantSelectorView_h */