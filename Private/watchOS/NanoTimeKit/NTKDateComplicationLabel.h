//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKDateComplicationLabel_h
#define NTKDateComplicationLabel_h
@import Foundation;

#include "UIControl.h"
#include "CDComplicationDisplayObserver-Protocol.h"
#include "NTKControl-Protocol.h"
#include "NTKDateComplicationDisplay-Protocol.h"

@class CLKDevice, CLKFont, NSMutableDictionary, NSString, UIColor, UILabel, UIView;

@interface NTKDateComplicationLabel : UIControl<NTKDateComplicationDisplay, NTKControl> {
  /* instance variables */
  BOOL _frozen;
  NSString *_currentDateText;
  UILabel *_internalLabel;
  UIView *_highlightView;
  struct _NSRange { unsigned long long location; unsigned long long length; } _dayTextRange;
  NSMutableDictionary *_cachedFittingSizes;
  double _tritiumOverrideColorAmount;
  UIColor *_computedTextColor;
}

@property (readonly, nonatomic) double _lastLineBaseline;
@property (nonatomic) double _firstLineBaselineFrameOriginY;
@property (nonatomic) double _lastLineBaselineFrameOriginY;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (readonly, nonatomic) long long sizeStyle;
@property (readonly, nonatomic) long long accentType;
@property (readonly, nonatomic) CLKDevice *device;
@property (retain, nonatomic) CLKFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *accentColor;
@property (nonatomic) BOOL usesLegibility;
@property (nonatomic) BOOL legibilityHidden;
@property (nonatomic) unsigned long long overrideDateStyle;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchEdgeInsets;
@property (retain, nonatomic) UIColor *tritiumOverrideTextColor;
@property (weak, nonatomic) NSObject<CDComplicationDisplayObserver> *displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSizeStyle:(long long)style accentType:(long long)type forDevice:(id)device;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size;
- (void)traitCollectionDidChange:(id)change;
- (void)setDateComplicationText:(id)text withDayRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range forDateStyle:(unsigned long long)style;
- (id)_attributedStringAccentingNumbersInString:(id)string;
- (void)setShadowColor:(id)color;
- (void)_updateTextColor;
- (void)_computeTextColor;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (void)_setFirstLineBaselineFrameOriginY:(double)y;
- (void)_setLastLineBaselineFrameOriginY:(double)y;
- (void)_setText:(id)text;
- (void)_applyAccentColorAttributes;
- (void)_setFont:(id)font;
- (void)_invalidateInternalLabelSize;
- (BOOL)shouldCancelTouchesInScrollview;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (double)_cornerRadius;
- (struct CGSize { double x0; double x1; })_highlightInset;
- (double)_legibtilityShadowRadius;
- (void)tritium_transitionToTritiumOnWithProgress:(float)progress;
- (void)tritium_transitionToTritiumOffWithProgress:(float)progress;
- (void)tritium_setOnProgress:(float)progress;
@end

#endif /* NTKDateComplicationLabel_h */