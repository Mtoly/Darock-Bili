//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountInvitationOnboardingListView_h
#define PKAccountInvitationOnboardingListView_h
@import Foundation;

#include "UIView.h"

@class NSArray;

@interface PKAccountInvitationOnboardingListView : UIView {
  /* instance variables */
  NSArray *_listContentViews;
}

/* instance methods */
- (id)initWithConfigurations:(id)configurations;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* PKAccountInvitationOnboardingListView_h */