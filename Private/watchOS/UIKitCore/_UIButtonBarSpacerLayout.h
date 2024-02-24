//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIButtonBarSpacerLayout_h
#define _UIButtonBarSpacerLayout_h
@import Foundation;

#include "_UIButtonBarLayout.h"
#include "UIBarButtonItem.h"
#include "UIView.h"

@class NSLayoutConstraint;

@interface _UIButtonBarSpacerLayout : _UIButtonBarLayout {
  /* instance variables */
  UIBarButtonItem *_item;
  UIView *_spacer;
  NSLayoutConstraint *_requestedSize;
  NSLayoutConstraint *_minimumSize;
  NSLayoutConstraint *_equalSize;
  BOOL _flexible;
}

@property (readonly, nonatomic) long long spacerType;

/* class methods */
+ (id)_updateSpacer:(id)spacer layoutMetrics:(id)metrics spacerType:(long long)type;
+ (id)spacerForLayoutMetrics:(id)metrics betweenLayout:(id)layout andLayout:(id)layout;
+ (long long)typeOfSpacerBetweenLayout:(id)layout andLayout:(id)layout;

/* instance methods */
- (id)initWithLayoutMetrics:(id)metrics;
- (id)initWithLayoutMetrics:(id)metrics barButtonItem:(id)item;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)width;
- (BOOL)isSpaceLayout;
- (id)barButtonItem;
- (void)_configure;
- (void)_addLayoutViews:(id)views;
- (BOOL)suppressSpacing;
- (void)_addConstraintsToActivate:(id)activate toDeactivate:(id)deactivate;
- (id)description;
@end

#endif /* _UIButtonBarSpacerLayout_h */