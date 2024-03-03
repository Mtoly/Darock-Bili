//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKApricotUtilityComplicationProxyView_h
#define NTKApricotUtilityComplicationProxyView_h
@import Foundation;

#include "NTKApricotRichComplicationInlineView.h"
#include "CDComplicationDisplayObserver-Protocol.h"
#include "CLKMonochromeFilterProvider-Protocol.h"
#include "NTKUtilityComplicationView-Protocol.h"
#include "NTKUtilityFlatComplicationView-Protocol.h"
#include "NTKUtilityFlatComplicationViewDelegate-Protocol.h"

@class CLKDevice, NSDate, NSString, UIColor;

@interface NTKApricotUtilityComplicationProxyView : NTKApricotRichComplicationInlineView<NTKUtilityComplicationView, NTKUtilityFlatComplicationView> {
  /* instance variables */
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _touchEdgeInsets;
}

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIColor *accentColor;
@property (retain, nonatomic) UIColor *platterColor;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) double foregroundImageAlpha;
@property (nonatomic) BOOL useRoundedFontDesign;
@property (nonatomic) double fontWeight;
@property (nonatomic) double fontSize;
@property (nonatomic) BOOL usesLegibility;
@property (nonatomic) BOOL useAlternativePunctuation;
@property (nonatomic) unsigned long long placement;
@property (nonatomic) BOOL shouldUseBackgroundPlatter;
@property (nonatomic) BOOL alwaysEnforcePlatterInset;
@property (readonly) NSDate *timeTravelDate;
@property (nonatomic) BOOL useBlockyHighlightCorners;
@property (nonatomic) BOOL shouldScaleAndFadeWhenHighlighting;
@property (nonatomic) double editingRotationAngle;
@property (nonatomic) BOOL suppressesInternalColorOverrides;
@property (retain, nonatomic) UIColor *tritium_overrideForegroundColor;
@property (retain, nonatomic) UIColor *tritium_overridePlatterColor;
@property (weak, nonatomic) NSObject<CDComplicationDisplayObserver> *displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (weak, nonatomic) NSObject<NTKUtilityFlatComplicationViewDelegate> *delegate;
@property (readonly, nonatomic) double textWidthInRadians;

/* instance methods */
- (id)initWithFamily:(long long)family;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)applyFaceColorPalette:(id)palette units:(unsigned long long)units;
- (void)applyTransitionFraction:(double)fraction fromFaceColorPalette:(id)palette toFaceColorPalette:(id)palette units:(unsigned long long)units brightenedUnits:(unsigned long long)units;
- (void)_applyFaceColorScheme:(id)scheme monochromeFraction:(double)fraction;
- (id)_chsWidgetTintParameters;
- (void)curvedLabelAngularWidthChanged;
@end

#endif /* NTKApricotUtilityComplicationProxyView_h */