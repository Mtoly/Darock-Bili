//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterFinancingPlanScheduleSummary_h
#define PKPayLaterFinancingPlanScheduleSummary_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class BOOL *, NSArray;

@interface PKPayLaterFinancingPlanScheduleSummary : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSArray *installments;
@property (copy, nonatomic) NSArray *payments;
@property (nonatomic) unsigned long long scheduleSummaryReason;

/* class methods */
+ (id)totalPaidForInstallments:(id)installments fallbackAmount:(id)amount;
+ (id)totalDueForInstallments:(id)installments fallbackAmount:(id)amount;
+ (id)totalAmountForInstallments:(id)installments fallbackAmount:(id)amount;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)dictionaryRepresentation;
- (id)lastPayment;
- (id)paymentsOfType:(unsigned long long)type;
- (id)paymentsWithIdentifier:(id)identifier;
- (long long)countOfInstallmentsAffectedByPaymentIdentifier:(id)identifier;
- (id)installmentsAffectedByPaymentIdentifier:(id)identifier;
- (BOOL)paymentIdentifierDidPayoffFinancingPlan:(id)plan;
- (id)firstInstallmentIdentifierAffectedByPaymentIdentifier:(id)identifier;
- (BOOL)hasPaymentsOrInstallmentsAfterInstallmentDueDate:(id)date;
- (id)paymentsAfterInstallmentDueDate:(id)date;
- (id)currencyAmountOfPaymentIdentifierAffectingOtherInstallments:(id)installments relativeInstallmentIdentifier:(id)identifier installmentsAreInOrder:(BOOL *)order countOfInstallments:(long long *)installments;
- (id)nextDueInstallment;
- (long long)installmentNumberForInstallmentIdentifier:(id)identifier;
- (id)relevantInstallmentsFromDueDateStart:(id)start dueDateEnd:(id)end statues:(id)statues;
- (id)relevantInstallmentsFromPayoffDateStart:(id)start payoffDateEnd:(id)end statues:(id)statues;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToPayLaterScheduleSummary:(id)summary;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKPayLaterFinancingPlanScheduleSummary_h */