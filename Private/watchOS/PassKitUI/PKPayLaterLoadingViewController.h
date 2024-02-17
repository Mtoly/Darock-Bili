//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterLoadingViewController_h
#define PKPayLaterLoadingViewController_h
@import Foundation;

#include "PKPayLaterSetupViewController.h"

@interface PKPayLaterLoadingViewController : PKPayLaterSetupViewController {
  /* instance variables */
  double _minimumDelayNanoSeconds;
  BOOL _didRequestNextViewController;
}

/* instance methods */
- (id)initWithSetupFlowController:(id)controller;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (id)additionalAnalyticsDictionary;
- (void)_updateHeaderSubtitleWithAltTextIfNecessary;
@end

#endif /* PKPayLaterLoadingViewController_h */