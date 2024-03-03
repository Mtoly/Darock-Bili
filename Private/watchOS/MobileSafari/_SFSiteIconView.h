//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFSiteIconView_h
#define _SFSiteIconView_h
@import Foundation;

#include "UIView.h"
#include "_SFHairlineBorderView.h"

@class NSString, UIAction, UIColor, UIImage, UIImageView, UILabel, UIVisualEffect, UIVisualEffectView, WebBookmark;
@protocol _SFSiteIconViewUpdateObserver;

@interface _SFSiteIconView : UIView {
  /* instance variables */
  UIImageView *_imageView;
  UIVisualEffectView *_backgroundView;
  UILabel *_monogramLabel;
  long long _state;
  id _touchIconRequestToken;
  UIColor *_preferredBackgroundColor;
  UIVisualEffect *_preferredBackgroundEffect;
  UIImageView *_shadowView;
  _SFHairlineBorderView *_borderView;
  BOOL _imageIsTransparent;
}

@property (retain, nonatomic) WebBookmark *bookmark;
@property (copy, nonatomic) UIAction *action;
@property (retain, nonatomic) UIImage *leadingImage;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) NSObject<_SFSiteIconViewUpdateObserver> *updateObserver;
@property (nonatomic) BOOL allowsDropShadow;
@property (copy, nonatomic) NSString *visualEffectGroupName;
@property (retain, nonatomic) _UIVisualEffectBackdropView *backdropCaptureView;

/* instance methods */
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_setContinuousCornerRadius:(double)radius;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageFrame;
- (void)setAction:(id)action backgroundEffect:(id)effect;
- (void)updateBookmarkData;
- (void)_displayDefaultFolderIcon;
- (void)_updateSiteIconViewWithTouchIconResponse:(id)response;
- (BOOL)usesVibrantAppearance;
- (void)_cancelTouchIconRequest;
- (void)_setImage:(id)image withBackgroundColor:(id)color;
- (void)_setSiteIcon:(id)icon withBackgroundColor:(id)color;
- (void)_setGlyph:(id)glyph withBackgroundColor:(id)color;
- (void)_setGlyph:(id)glyph withBackgroundEffect:(id)effect;
- (id)_glyphConfiguration;
- (id)_tintedFolderImage;
- (void)_updateGlyphConfiguration;
- (double)_monogramFontSize;
- (void)_updateMonogramLabelSizeAndFont;
- (long long)_inferredIconSize;
- (void)_setMonogramWithString:(id)string backgroundColor:(id)color;
- (void)_setState:(long long)state;
- (id)_effectiveBackgroundColor;
@end

#endif /* _SFSiteIconView_h */