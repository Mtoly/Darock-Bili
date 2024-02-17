//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISearchResultsTableView_h
#define UISearchResultsTableView_h
@import Foundation;

#include "UITableView.h"
#include "UISearchDisplayController.h"
#include "UIView.h"

@interface UISearchResultsTableView : UITableView {
  /* instance variables */
  double _offsetForNoResultsMessage;
  UIView *_topShadowView;
}

@property (weak, nonatomic) UISearchDisplayController *controller;
@property (retain, nonatomic) UIView *_topShadowView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame style:(long long)style;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)_numberOfRowsDidChange;
- (void)_setOffsetForNoResultsMessage:(double)message;
- (double)_offsetForNoResultsMessage;
- (void)_setTopShadowView:(id)view;
@end

#endif /* UISearchResultsTableView_h */