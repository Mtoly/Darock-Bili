//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupAppRequiredViewController_h
#define PKPaymentSetupAppRequiredViewController_h
@import Foundation;

#include "PKPaymentSetupTableViewController.h"
#include "PKLinkedApplication.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKTableHeaderView.h"

@class PKPaymentSetupProduct;

@interface PKPaymentSetupAppRequiredViewController : PKPaymentSetupTableViewController {
  /* instance variables */
  PKPaymentSetupProduct *_product;
  PKLinkedApplication *_linkedApplication;
  PKTableHeaderView *_headerView;
  NSObject<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
  BOOL _isBridge;
  BOOL _isBuddy;
}

/* instance methods */
- (id)initWithSetupContext:(long long)context setupDelegate:(id)delegate product:(id)product linkedApplication:(id)application;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)_subtitle;
- (void)_doneButtonTapped:(id)tapped;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
@end

#endif /* PKPaymentSetupAppRequiredViewController_h */