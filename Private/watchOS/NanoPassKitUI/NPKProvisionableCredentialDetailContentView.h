//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProvisionableCredentialDetailContentView_h
#define NPKProvisionableCredentialDetailContentView_h
@import Foundation;

#include "UIView.h"
#include "NPKActivityButton.h"
#include "NPKPrivacyHeroHeaderView.h"
#include "NPKProvisionableCredentialDetailContentViewDelegate-Protocol.h"
#include "NPKProvisionableCredentialDetailContentViewModel.h"

@class NSArray;

@interface NPKProvisionableCredentialDetailContentView : UIView

@property (retain, nonatomic) NSArray *verticalConstraints;
@property (retain, nonatomic) NPKPrivacyHeroHeaderView *heroView;
@property (retain, nonatomic) NPKActivityButton *activityButton;
@property (retain, nonatomic) NPKProvisionableCredentialDetailContentViewModel *viewModel;
@property (weak, nonatomic) NSObject<NPKProvisionableCredentialDetailContentViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)displayActivityButtonLoadingStateIfNecessary:(BOOL)necessary;
- (void)_setUpConstraints;
- (void)_setUpVerticalConstraints;
- (void)_setUpHorizontalConstraints;
- (void)_setUpSubviews;
- (void)_setUpHeroView;
- (void)_setUpActivityButton;
- (void)_handleActivityButton:(id)button;
- (void)_updateViewForViewModel:(id)model;
@end

#endif /* NPKProvisionableCredentialDetailContentView_h */