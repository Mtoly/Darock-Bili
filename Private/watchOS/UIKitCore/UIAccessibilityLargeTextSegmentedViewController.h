//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAccessibilityLargeTextSegmentedViewController_h
#define UIAccessibilityLargeTextSegmentedViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UIScrollView.h"
#include "UISegment.h"
#include "UISegmentedControl.h"

@class NSArray, NSMutableArray;

@interface UIAccessibilityLargeTextSegmentedViewController : UIViewController

@property (retain, nonatomic) UISegment *originalSelectedSegment;
@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) UIScrollView *mainScrollView;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) NSMutableArray *segmentButtons;

/* instance methods */
- (id)segmentFromSegment:(id)segment;
- (id)initWithSegmentedControl:(id)control segments:(id)segments delegate:(id)delegate;
- (void)_configureSegmentViews;
- (void)viewDidLayoutSubviews;
- (void)buttonPress:(id)press;
- (void)buttonTouchDown:(id)down;
- (void)buttonTouchUp:(id)up;
- (void)_orientationChanged:(id)changed;
- (BOOL)_canShowWhileLocked;
@end

#endif /* UIAccessibilityLargeTextSegmentedViewController_h */