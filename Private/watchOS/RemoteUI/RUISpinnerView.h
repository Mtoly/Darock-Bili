//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUISpinnerView_h
#define RUISpinnerView_h
@import Foundation;

#include "RUIElement.h"
#include "RUIFooterElement.h"
#include "RUIHeaderElement.h"
#include "RUIHeaderView.h"
#include "RUIObjectModel.h"
#include "RemoteUISectionFooter.h"

@class PUICActivityIndicatorView, UIColor, UILabel, UIView;

@interface RUISpinnerView : RUIElement {
  /* instance variables */
  UIView *_view;
  PUICActivityIndicatorView *_spinner;
  UILabel *_label;
  RUIHeaderView *_headerView;
  RemoteUISectionFooter *_footerView;
}

@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) UIColor *spinnerColor;
@property (retain, nonatomic) RUIHeaderElement *header;
@property (retain, nonatomic) RUIFooterElement *footer;

/* instance methods */
- (id)spinnerView;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayout;
@end

#endif /* RUISpinnerView_h */