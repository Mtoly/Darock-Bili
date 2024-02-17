//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterBusinessChatTopicExplanationSectionController_h
#define PKPayLaterBusinessChatTopicExplanationSectionController_h
@import Foundation;

#include "PKPayLaterSectionController.h"

@class PKPayLaterBusinessChatTopic, PKPayLaterFinancingPlan, PKPayLaterInstallment, PKPayLaterPayment, PKPaymentPass;

@interface PKPayLaterBusinessChatTopicExplanationSectionController : PKPayLaterSectionController {
  /* instance variables */
  PKPaymentPass *_payLaterPass;
  PKPayLaterFinancingPlan *_financingPlan;
  PKPayLaterInstallment *_installment;
  PKPayLaterPayment *_payment;
  PKPayLaterBusinessChatTopic *_topic;
}

/* instance methods */
- (id)initWithPayLaterAccount:(id)account payLaterPass:(id)pass financingPlan:(id)plan installment:(id)installment payment:(id)payment topic:(id)topic dynamicContentPage:(id)page delegate:(id)delegate;
- (id)headerAttributedStringForIdentifier:(id)identifier;
- (void)applyHeaderConfigurationProperties:(id)properties sectionIdentifier:(id)identifier;
- (id)identifiers;
- (id)layoutWithLayoutEnvironment:(id)environment sectionIdentifier:(id)identifier;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (void)_configureDynamicSection:(id)section snapshot:(id)snapshot;
- (id)_firstSectionIdentifier;
@end

#endif /* PKPayLaterBusinessChatTopicExplanationSectionController_h */