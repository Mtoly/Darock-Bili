//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1430.300.81.0.0
//
#ifndef TPLCDTextViewScrollingView_h
#define TPLCDTextViewScrollingView_h
@import Foundation;

#include "UIView.h"
#include "TPLCDTextView.h"

@interface TPLCDTextViewScrollingView : UIView {
  /* instance variables */
  TPLCDTextView *_owner;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame owner:(id)owner;
- (void)setOwner:(id)owner;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* TPLCDTextViewScrollingView_h */