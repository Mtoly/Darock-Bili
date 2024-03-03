//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKTransitTopUpValueSelectionViewController_h
#define NPKTransitTopUpValueSelectionViewController_h
@import Foundation;

#include "UIViewController.h"
#include "NPKBalanceField-Protocol.h"
#include "NPKTransitTopUpValueSelectionView.h"
#include "NPKTransitTopUpValueSelectionViewControllerDelegate-Protocol.h"
#include "NPKValueSelectionViewDelegate-Protocol.h"

@class NSDecimalNumber, NSString, PKPass, PKPaymentPassAction;

@interface NPKTransitTopUpValueSelectionViewController : UIViewController<NPKValueSelectionViewDelegate>

@property (retain, nonatomic) PKPass *pass;
@property (retain, nonatomic) NSObject<NPKBalanceField> *balanceField;
@property (retain, nonatomic) PKPaymentPassAction *action;
@property (retain, nonatomic) NSDecimalNumber *initialValue;
@property (retain, nonatomic) NSDecimalNumber *minimumValue;
@property (retain, nonatomic) NSDecimalNumber *maximumValue;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSDecimalNumber *depositAmount;
@property (nonatomic) unsigned long long depositType;
@property (retain, nonatomic) NPKTransitTopUpValueSelectionView *valueSelectionView;
@property (weak, nonatomic) NSObject<NPKTransitTopUpValueSelectionViewControllerDelegate> *delegate;
@property (nonatomic) BOOL shouldDisableInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTitle:(id)title initialValue:(id)value minimumValue:(id)value maximumValue:(id)value currency:(id)currency currentBalance:(id)balance;
- (id)initWithTitle:(id)title initialValue:(id)value minimumValue:(id)value maximumValue:(id)value currency:(id)currency currentBalance:(id)balance depositAmount:(id)amount depositType:(unsigned long long)type;
- (id)initWithPass:(id)pass balanceField:(id)field;
- (void)loadView;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)valueSelectionView:(id)view didAcceptValue:(id)value;
- (void)valueSelectionView:(id)view wasTapped:(id)tapped;
@end

#endif /* NPKTransitTopUpValueSelectionViewController_h */