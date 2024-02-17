//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKElectrocardiogramCardView_h
#define HKElectrocardiogramCardView_h
@import Foundation;

#include "UIView.h"
#include "HKDateCache.h"
#include "HKDateCacheObserver-Protocol.h"
#include "HKElectrocardiogramChartView.h"
#include "HKRoundedHeaderView.h"

@class HKElectrocardiogram, NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface HKElectrocardiogramCardView : UIView<HKDateCacheObserver>

@property (weak, nonatomic) HKDateCache *dateCache;
@property (nonatomic) BOOL onboarding;
@property (nonatomic) long long activeAlgorithmVersion;
@property (readonly, nonatomic) BOOL isSampleInteractive;
@property (retain, nonatomic) HKRoundedHeaderView *headerView;
@property (retain, nonatomic) UIView *cellBackgroundView;
@property (retain, nonatomic) UIImageView *heartImageView;
@property (retain, nonatomic) UILabel *averageHeartRateLabel;
@property (retain, nonatomic) UILabel *symptomsLabel;
@property (retain, nonatomic) HKElectrocardiogramChartView *graphView;
@property (retain, nonatomic) NSLayoutConstraint *averageHeartRateLabelFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *averageHeartRateLabelWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *symptomsLabelFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *graphTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heartImageViewHeightConstraint;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)estimatedHeight;
+ (id)_accessibilityContentSizeCategory;
+ (id)_averageHeartRateSymptomsTextStyle;
+ (id)_averageHeartRateSymptomsFont;
+ (id)_averageHeartRateSymptomsBoldFont;
+ (id)_averageHeartRateSymptomsFontForElectrocardiogram:(id)electrocardiogram;
+ (double)_headerBottomToAverageHeartRateBaseline;
+ (double)_averageHeartRateBaselineToSymptomBaseline;
+ (double)_averageHeartRateBaselineToGraphTop;
+ (double)_graphHeight;
+ (double)_graphBottomToCardBottom;

/* instance methods */
- (id)initWithSample:(id)sample dateCache:(id)cache onboarding:(BOOL)onboarding activeAlgorithmVersion:(long long)version isSampleInteractive:(BOOL)interactive;
- (void)traitCollectionDidChange:(id)change;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)_setupUI;
- (void)_setupConstraints;
- (void)_setUpGraph;
- (void)updateUI;
- (void)_updateTextConstraints;
- (void)_updateGraphTopConstraint;
- (void)_updateForCurrentSizeCategory;
- (BOOL)_isLayingOutForAccessibility;
- (void)dateCacheDidUpdate:(id)update onNotification:(id)notification;
- (id)_cardHeaderColor;
- (id)_chevronColor;
- (id)_cardBackgroundColor;
- (id)_graphBackgroundColor;
- (BOOL)isOnboarding;
@end

#endif /* HKElectrocardiogramCardView_h */