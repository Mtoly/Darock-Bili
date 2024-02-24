//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXUISettingsLabeledSliderCell_h
#define AXUISettingsLabeledSliderCell_h
@import Foundation;

#include "PSTableCell.h"

@class UILabel, UISlider, UIView;
@protocol UITraitChangeRegistration;

@interface AXUISettingsLabeledSliderCell : PSTableCell

@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UISlider *sliderView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (nonatomic) BOOL segmented;
@property (retain, nonatomic) NSObject<UITraitChangeRegistration> *traitRegistration;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier specifier:(id)specifier;
- (void)dealloc;
- (double)rightViewPadding;
- (void)didMoveToSuperview;
- (id)maximumTextSizeString;
- (Class)sliderCellClass;
- (void)_updateLabelFont:(id)font;
- (id)labelTextColor;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)setLabelText:(id)text;
- (id)slider;
- (id)accessibilityLabel;
- (void)handleSliderBeingDragged:(id)dragged;
- (void)handleSliderDidFinishDrag:(id)drag;
- (double)maximumValue;
- (double)minimumValue;
- (double)initialValue;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)didChangeTraitPreferredContentSizeCategory;
@end

#endif /* AXUISettingsLabeledSliderCell_h */