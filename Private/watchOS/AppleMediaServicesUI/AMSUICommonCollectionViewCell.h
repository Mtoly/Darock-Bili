//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUICommonCollectionViewCell_h
#define AMSUICommonCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "AMSUICommonView.h"

@interface AMSUICommonCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) AMSUICommonView *underlyingContentView;
@property (readonly, nonatomic) AMSUICommonView *contentView;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)tintColor;
- (void)_setup;
- (void)layoutSubviews;
@end

#endif /* AMSUICommonCollectionViewCell_h */