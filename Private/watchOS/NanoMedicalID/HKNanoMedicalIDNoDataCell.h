//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNanoMedicalIDNoDataCell_h
#define HKNanoMedicalIDNoDataCell_h
@import Foundation;

#include "PUICListPlatterCell.h"
#include "HKNanoMedicalIDCell-Protocol.h"

@class NSLayoutConstraint, NSString, PUICKeylineView, UIButton, UILabel;

@interface HKNanoMedicalIDNoDataCell : PUICListPlatterCell<HKNanoMedicalIDCell> {
  /* instance variables */
  UILabel *_noDataLabel;
  UIButton *_doneButton;
  PUICKeylineView *_separator;
  NSLayoutConstraint *_noDataLabelBaselineConstraint;
}

@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifier;

/* instance methods */
- (void)setData:(id)data;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setHighlighted:(BOOL)highlighted;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)_doneButtonPressed:(id)pressed;
- (void)_addHeaderLabelConstraints;
- (void)_addSeparatorConstraints;
- (void)_addDoneButtonConstraints;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* HKNanoMedicalIDNoDataCell_h */