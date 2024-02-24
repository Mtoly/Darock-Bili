//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentPassDetailsNotificationSettingsSectionController_h
#define PKPaymentPassDetailsNotificationSettingsSectionController_h
@import Foundation;

#include "PKPaymentPassDetailSectionController.h"
#include "PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate-Protocol.h"

@class PKAccount, PKPaymentApplication, PKPaymentPass, PKPeerPaymentAccount, PKTransactionSourceCollection;
@protocol PKPaymentDataProvider;

@interface PKPaymentPassDetailsNotificationSettingsSectionController : PKPaymentPassDetailSectionController {
  /* instance variables */
  PKPaymentPass *_pass;
  PKPaymentApplication *_paymentApplication;
  long long _detailViewStyle;
  PKPeerPaymentAccount *_peerPaymentAccount;
  PKAccount *_account;
  NSObject<PKPaymentDataProvider> *_paymentDataProvider;
  PKTransactionSourceCollection *_transactionSourceCollection;
}

@property (readonly, nonatomic) long long notificationAuthorizationStatus;
@property (readonly, weak, nonatomic) NSObject<PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate> *delegate;

/* class methods */
+ (BOOL)validForPaymentPass:(id)pass;
+ (BOOL)_showsTransactionHistorySwitchForPass:(id)pass peerPaymentAccount:(id)account account:(id)account;
+ (BOOL)canShowSectionforPass:(id)pass dataProvider:(id)provider peerPaymentAccount:(id)account account:(id)account transactionSourceCollection:(id)collection;
+ (id)_updatedPeerPaymentAccountForPeerPaymentAccount:(id)account pass:(id)pass;
+ (long long)_countOfRowsForPass:(id)pass peerPaymentAccount:(id)account account:(id)account;

/* instance methods */
- (id)init;
- (id)initWithPass:(id)pass peerPaymentAccount:(id)account account:(id)account paymentDataProvider:(id)provider transactionSourceCollection:(id)collection detailViewStyle:(long long)style delegate:(id)delegate;
- (void)dealloc;
- (void)fetchAuthorizationStatusWithCompletion:(id /* block */)completion;
- (void)setTransactionsEnabled:(BOOL)enabled;
- (id)allSectionIdentifiers;
- (id)sectionIdentifiers;
- (long long)tableView:(id)view numberOfRowsInSectionIdentifier:(id)identifier;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (id)_indexPathForRowType:(long long)type;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (id)titleForHeaderInSectionIdentifier:(id)identifier;
- (id)titleForFooterInSectionIdentifier:(id)identifier;
- (BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)identifier;
- (BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)identifier;
- (long long)_countOfRows;
- (unsigned long long)_accountFeature;
- (id)_peerPaymentNotificationsSwitchCellForIndexPath:(id)path tableView:(id)view;
- (id)_accountServiceNotificationsSwitchCellForIndexPath:(id)path tableView:(id)view;
- (id)_transactionsSwitchCellForIndexPath:(id)path tableView:(id)view;
- (void)_transactionsSwitchChanged:(id)changed;
- (void)_notificationSwitchChanged:(id)changed;
- (void)_dailyCashSwitchChanged:(id)changed;
- (BOOL)_shouldMapSection;
- (id)_cellForType:(long long)type;
- (void)_passSettingsChanged:(id)changed;
@end

#endif /* PKPaymentPassDetailsNotificationSettingsSectionController_h */