//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKEditTableNoPassesView_h
#define PKEditTableNoPassesView_h
@import Foundation;

#include "UIView.h"
#include "PKEditTableNoPassesViewDelegate-Protocol.h"

@class UIButton, UILabel;

@interface PKEditTableNoPassesView : UIView {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_descriptionLabel;
  UIButton *_buttonScanCode;
  UIButton *_buttonFindApps;
}

@property (weak, nonatomic) NSObject<PKEditTableNoPassesViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)scanCodeButtonTapped;
- (void)findAppsForWalletTapped;
@end

#endif /* PKEditTableNoPassesView_h */