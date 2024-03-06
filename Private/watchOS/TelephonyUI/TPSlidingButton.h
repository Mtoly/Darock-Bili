//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1430.300.81.0.0
//
#ifndef TPSlidingButton_h
#define TPSlidingButton_h
@import Foundation;

#include "UIView.h"
#include "_UIActionSliderDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, _UIActionSlider;
@protocol TPSlidingButtonDelegateProtocol;

@interface TPSlidingButton : UIView<_UIActionSliderDelegate>

@property (retain) UIImageView *dialImageView;
@property (retain) _UIActionSlider *acceptButton;
@property (retain) UIButton *sideButtonRight;
@property int type;
@property NSObject<TPSlidingButtonDelegateProtocol> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSlidingButtonType:(int)type;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)actionSlider:(id)slider didUpdateSlideWithValue:(double)value;
- (void)actionSliderDidCompleteSlide:(id)slide;
@end

#endif /* TPSlidingButton_h */