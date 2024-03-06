//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKOlympusTimeView_h
#define NTKOlympusTimeView_h
@import Foundation;

#include "UIView.h"
#include "NTKOlympusColorPalette.h"
#include "NTKOlympusContentViewDelegate-Protocol.h"
#include "NTKOlympusTimeContentView.h"
#include "NTKTimeView-Protocol.h"
#include "NTKTritiumAnimator-Protocol.h"

@class CLKDevice, NSDate, NSString, PUICClientSideAnimation, UIImage;
@protocol NTKOlympusViewDelegate;

@interface NTKOlympusTimeView : UIView<NTKOlympusContentViewDelegate, NTKTimeView, NTKTritiumAnimator>

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKOlympusTimeContentView *contentView;
@property (retain, nonatomic) NTKOlympusTimeContentView *overlayContentView;
@property (nonatomic) BOOL maskingPathStartsFromHourHand;
@property (nonatomic) BOOL useSmallFont;
@property (retain, nonatomic) UIImage *circularLogoImage;
@property (nonatomic) struct CGSize { double x0; double x1; } maskingSize;
@property (nonatomic) double hourHandAngle;
@property (nonatomic) double minuteHandAngle;
@property (weak, nonatomic) NSObject<NTKOlympusViewDelegate> *delegate;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long currentStyle;
@property (nonatomic) unsigned long long currentDial;
@property (nonatomic) NTKOlympusColorPalette *currentColorPalette;
@property (retain, nonatomic) PUICClientSideAnimation *olympusMaskAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL frozen;

/* instance methods */
- (id)initWithDevice:(id)device dial:(unsigned long long)dial style:(unsigned long long)style colorPalette:(id)palette date:(id)date;
- (id)initWithDevice:(id)device dial:(unsigned long long)dial style:(unsigned long long)style colorPalette:(id)palette date:(id)date useSmallFont:(BOOL)font circularLogoImage:(id)image;
- (void)layoutSubviews;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (void)configureViewsForEditing;
- (void)_createContentViewIfNeeded;
- (void)_createOverlayViewIfNeeded;
- (void)prepareForEditing;
- (void)cleanupAfterEditing;
- (void)setupViewsForCurrentState:(BOOL)state;
- (void)applyTransitionFraction:(double)fraction fromStyle:(unsigned long long)style toStyle:(unsigned long long)style;
- (void)applyTransitionFraction:(double)fraction fromColorPalette:(id)palette toColorPalette:(id)palette animateElements:(BOOL)elements;
- (void)applyTransitionFraction:(double)fraction fromDial:(unsigned long long)dial toDial:(unsigned long long)dial;
- (void)animateClockHandsFromDate:(id)date toDate:(id)date duration:(double)duration;
- (double)shortestPathBetweenStartAngle:(double)angle targetAngle:(double)angle;
- (BOOL)canUpdateWindrunnerMask;
- (void)applyWindrunnerMaskWithDate:(id)date;
- (void)applyWindrunnerMaskWithDate:(id)date force:(BOOL)force;
- (void)updateMaskingPathStartPointWithNewHourAngle:(double)angle newMinuteAngle:(double)angle;
- (void)applyWindrunnerMaskWithHourAngle:(double)angle minuteAngle:(double)angle;
- (void)applyWindrunnerMaskStartAngle:(double)angle endAngle:(double)angle;
- (double)_calculateDeviationBetweenHourAngle:(double)angle minuteAngle:(double)angle;
- (BOOL)_hasWindrunnerWedge;
- (void)setOverrideDate:(id)date duration:(double)duration;
- (void)setTimeOffset:(double)offset;
- (void)tritium_transitionToTritiumOffWithProgress:(float)progress;
- (void)tritium_transitionToTritiumOnWithProgress:(float)progress;
- (void)tritium_transitionToFrameSpecifier:(id)specifier;
- (void)olympusContentViewDidHandleLogoHighlighted:(id)highlighted;
- (void)olympusContentViewDidHandleLogoResetHighlight:(id)highlight;
- (void)olympusContentView:(id)view didHandleLogoTouchUpInsideFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)openVictoryAppFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)_maskingPathStartsFromHourHandForDate:(id)date;
- (BOOL)isFrozen;
@end

#endif /* NTKOlympusTimeView_h */