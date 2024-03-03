//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentRecurringPaymentSectionController_h
#define PKPeerPaymentRecurringPaymentSectionController_h
@import Foundation;

#include "PKDynamicListSectionController.h"
#include "PKDashboardPaymentTransactionItemPresenter.h"
#include "PKPeerPaymentRecurringPaymentSectionControllerDelegate-Protocol.h"

@class NSArray, PKFamilyMemberCollection, PKTransactionSourceCollection;

@interface PKPeerPaymentRecurringPaymentSectionController : PKDynamicListSectionController {
  /* instance variables */
  PKDashboardPaymentTransactionItemPresenter *_presenter;
}

@property (retain, nonatomic) NSArray *payments;
@property (retain, nonatomic) PKTransactionSourceCollection *sourceCollection;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (weak, nonatomic) NSObject<PKPeerPaymentRecurringPaymentSectionControllerDelegate> *delegate;

/* instance methods */
- (id)init;
- (id)identifiers;
- (void)didSelectItem:(id)item;
- (BOOL)shouldHighlightItem:(id)item;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (id)cellRegistrationForItem:(id)item;
- (void)_applyMaskToCell:(id)cell firstInSection:(BOOL)section lastInSection:(BOOL)section;
- (id)paymentTransactionItemForPayment:(id)payment;
@end

#endif /* PKPeerPaymentRecurringPaymentSectionController_h */