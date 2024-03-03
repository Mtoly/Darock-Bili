//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupDisambiguationViewController_h
#define PKPaymentSetupDisambiguationViewController_h
@import Foundation;

#include "PKPaymentSetupTableViewController.h"
#include "PKDisambiguationFooterView.h"
#include "PKPaymentSetupDisambiguationViewControllerDelegate-Protocol.h"
#include "PKTableHeaderView.h"
#include "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, PKPaymentSetupProduct, UIBarButtonItem;

@interface PKPaymentSetupDisambiguationViewController : PKPaymentSetupTableViewController<UITableViewDelegate> {
  /* instance variables */
  UIBarButtonItem *_nextBarButtonItem;
  PKTableHeaderView *_headerView;
  PKDisambiguationFooterView *_footerView;
}

@property (weak, nonatomic) NSObject<PKPaymentSetupDisambiguationViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSArray *products;
@property (readonly, retain, nonatomic) PKPaymentSetupProduct *selectedProduct;
@property (copy, nonatomic) NSString *enteredCardNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProducts:(id)products context:(long long)context;
- (void)viewDidLoad;
- (void)setupHeaderViewForTableView:(id)view;
- (void)setupFooterViewForTableView:(id)view;
- (void)viewDidLayoutSubviews;
- (id)_productAtIndexPath:(id)path;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)_updateSelectedProduct:(id)product;
- (void)clearSelectedProduct;
- (void)_nextTapped:(id)tapped;
- (void)_notifyDelegateDidSelectProduct:(id)product;
- (void)_popToCameraCapture:(id)capture;
- (void)_setupLater:(id)later;
@end

#endif /* PKPaymentSetupDisambiguationViewController_h */