//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTransitCardNumberViewController_h
#define PKTransitCardNumberViewController_h
@import Foundation;

#include "PKDynamicTableViewController.h"
#include "PKPassDetailsCardInfoSectionController.h"

@class PKPaymentPass;

@interface PKTransitCardNumberViewController : PKDynamicTableViewController {
  /* instance variables */
  PKPaymentPass *_pass;
  PKPassDetailsCardInfoSectionController *_cardInfoSectionController;
}

/* class methods */
+ (BOOL)canShowForPass:(id)pass expressPassController:(id)controller;

/* instance methods */
- (id)initWithPass:(id)pass;
@end

#endif /* PKTransitCardNumberViewController_h */