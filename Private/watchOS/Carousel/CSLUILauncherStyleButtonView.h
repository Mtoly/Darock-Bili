//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUILauncherStyleButtonView_h
#define CSLUILauncherStyleButtonView_h
@import Foundation;

#include "UICollectionReusableView.h"
#include "CSLLauncherViewModeDelegate-Protocol.h"

@class NSNotificationCenter, UIButton, UIFont;

@interface CSLUILauncherStyleButtonView : UICollectionReusableView {
  /* instance variables */
  double _buttonHeight;
  double _buttonWidth;
  UIButton *_listViewButton;
  UIButton *_gridViewButton;
  long long _displayVariant;
  UIFont *_font;
  NSNotificationCenter *_notificationCenter;
}

@property (readonly, nonatomic) UIButton *accessibleButton;
@property (readonly, nonatomic) UIButton *button;
@property (weak, nonatomic) NSObject<CSLLauncherViewModeDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame andButtonTypeForViewMode:(long long)mode;
- (void)dealloc;
- (void)_loadFont;
- (void)_loadFont:(id)font;
- (id)_configureButtonForAccessibility:(BOOL)accessibility viewMode:(long long)mode;
- (id)_createButtonConfigurationForViewMode:(long long)mode;
- (id)_createButtonActionForAccessibility:(BOOL)accessibility viewMode:(long long)mode;
- (id)_getLocalizedListViewTitle;
- (id)_getLocalizedGridViewTitle;
- (void)_shapeButton:(id)button;
- (void)_switchToGridView;
- (void)_switchToListView;
- (void)contentSizeCategoryDidChange:(id)change;
- (void)_updateButtonLayouts;
- (void)_setVisibleButton;
- (BOOL)_buttonSizeIsWithinThreshold;
- (void)_showAccessibleButton;
- (void)_showButton;
@end

#endif /* CSLUILauncherStyleButtonView_h */