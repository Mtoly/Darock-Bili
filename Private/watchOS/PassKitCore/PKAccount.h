//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccount_h
#define PKAccount_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKAccountAdditionalPushTopics.h"
#include "PKAccountDetails.h"
#include "PKAccountFetchPeriods.h"
#include "PKAppleBalanceAccountDetails.h"
#include "PKCloudStoreCoding-Protocol.h"
#include "PKCreditAccountDetails.h"
#include "PKPayLaterAccountDetails.h"
#include "PKSavingsAccountDetails.h"

@class NSArray, NSDate, NSSet, NSString, NSURL;

@interface PKAccount : NSObject<NSSecureCoding, NSCopying, PKCloudStoreCoding>

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *accountBaseURL;
@property (retain, nonatomic) NSURL *paymentServicesBaseURL;
@property (retain, nonatomic) NSURL *applyServiceURL;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKAccountDetails *details;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stateReason;
@property (nonatomic) unsigned long long accessLevel;
@property (nonatomic) BOOL blockAllAccountAccess;
@property (nonatomic) BOOL blockNotifications;
@property (nonatomic) BOOL isCloudAccount;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) BOOL coOwner;
@property (nonatomic) BOOL sharedAccount;
@property (copy, nonatomic) NSSet *previousAccountIdentifiers;
@property (copy, nonatomic) NSSet *supportedFeatures;
@property (retain, nonatomic) PKAccountAdditionalPushTopics *additionalPushTopics;
@property (retain, nonatomic) PKAccountFetchPeriods *fetchPeriods;
@property (nonatomic) BOOL accountStateDirty;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSArray *cloudStoreZoneNames;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (readonly, nonatomic) NSSet *allAccountIdentifiers;
@property (readonly, nonatomic) PKCreditAccountDetails *creditDetails;
@property (readonly, nonatomic) PKPayLaterAccountDetails *payLaterDetails;
@property (readonly, nonatomic) PKAppleBalanceAccountDetails *appleBalanceDetails;
@property (readonly, nonatomic) PKSavingsAccountDetails *savingsDetails;
@property (readonly, nonatomic) BOOL supportsStandaloneTransactions;

/* class methods */
+ (id)analyticsAccountTypeForAccount:(id)account;
+ (BOOL)supportsSecureCoding;
+ (id)recordNamePrefix;
+ (id)recordNameForAccountIdentifier:(id)identifier;
+ (id)accountIdentifierFromRecordName:(id)name;

/* instance methods */
- (BOOL)hidePayLaterInPaymentSheet;
- (id)hidePayLaterInPaymentSheetFeatureDescriptor;
- (BOOL)hidePayLaterSetupInWallet;
- (id)hidePayLaterSetupInWalletFeatureDescriptor;
- (BOOL)supportsDynamicReportIssueTopics;
- (id)supportsDynamicReportIssueTopicsFeatureDescriptor;
- (id)_payLaterFeatureWithIdentifier:(id)identifier;
- (BOOL)supportsOneTimeDeposit;
- (id)oneTimeDepositFeatureDescriptor;
- (BOOL)supportsOneTimeWithdrawal;
- (id)oneTimeWithdrawalFeatureDescriptor;
- (unsigned long long)oneTimeDepositFundingSourceTypes;
- (unsigned long long)oneTimeWithdrawalFundingSourceTypes;
- (BOOL)supportsOneTimeDepositWithAppleCash;
- (id)oneTimeDepositWithAppleCashFeatureDescriptor;
- (BOOL)supportsOneTimeWithdrawalWithAppleCash;
- (id)oneTimeWithdrawalWithAppleCashFeatureDescriptor;
- (BOOL)supportsViewSavingsStatement;
- (id)viewSavingsStatementFeatureDescriptor;
- (BOOL)supportsExportSavingsTransactionData;
- (id)exportSavingsTransactionDataFeatureDescriptor;
- (BOOL)supportsShowSavingsAccountSummary;
- (id)showSavingsAccountSummaryFeatureDescriptor;
- (BOOL)supportsAddBeneficiaries;
- (id)addBeneficiariesFeatureDescriptor;
- (BOOL)supportsViewTaxDocuments;
- (id)viewTaxDocumentsFeatureDescriptor;
- (id)_savingsFeatureWithIdentifier:(id)identifier;
- (BOOL)supportsTopUp;
- (id)supportsTopUpFeatureDescriptor;
- (BOOL)supportsAMPTopUp;
- (id)supportsAMPTopUpFeatureDescriptor;
- (BOOL)supportsAMPRedeemGiftcard;
- (id)supportsAMPRedeemGiftcardFeatureDescriptor;
- (BOOL)supportsInStoreTopUp;
- (id)supportsInStoreTopUpFeatureDescriptor;
- (BOOL)supportsInStorePayment;
- (id)supportsInStorePaymentFeatureDescriptor;
- (id)_appleBalanceFeatureWithIdentifier:(id)identifier;
- (BOOL)supportsSchedulePayment;
- (id)schedulePaymentFeatureDescriptor;
- (BOOL)supportsScheduleRecurringPayments;
- (id)scheduleRecurringPaymentsFeatureDescriptor;
- (BOOL)supportsViewStatement;
- (id)viewStatementFeatureDescriptor;
- (BOOL)supportsRequestStatement;
- (id)requestStatementFeatureDescriptor;
- (BOOL)supportsExportTransactionData;
- (id)exportTransactionDataFeatureDescriptor;
- (BOOL)supportsRequestPhysicalCard;
- (id)requestPhysicalCardFeatureDescriptor;
- (BOOL)supportsRedeemRewards;
- (id)redeemRewardsFeatureDescriptor;
- (BOOL)supportsShowNotifications;
- (id)showNotificationsFeatureDescriptor;
- (BOOL)supportsTransactionSyncReporting;
- (id)transactionSyncReportingFeatureDescriptor;
- (BOOL)supportsStatementMetadata;
- (id)statementMetadataFeatureDescriptor;
- (BOOL)supportsShowAccountSummary;
- (id)showAccountSummaryFeatureDescriptor;
- (BOOL)supportsAddFundingSource;
- (id)addFundingSourceFeatureDescriptor;
- (BOOL)supportsShowVirtualCard;
- (id)showVirtualCardFeatureDescriptor;
- (BOOL)supportsDynamicSecurityCodes;
- (id)dynamicSecurityCodesFeatureDescriptor;
- (BOOL)provisioningAllowed;
- (id)provisioningAllowedFeatureDescriptor;
- (BOOL)accountUserInvitationAllowed;
- (id)accountUserInvitationAllowedFeatureDescriptor;
- (BOOL)showPhysicalCardExpiringSoonMessaging;
- (id)showPhysicalCardExpiringSoonMessagingDescriptor;
- (BOOL)supportsPhysicalCardActivation;
- (id)physicalCardActivationFeatureDescriptor;
- (BOOL)showBillPaymentInterest;
- (id)showBillPaymentInterestFeatureDescriptor;
- (BOOL)showBillPaymentInterestSummary;
- (id)showBillPaymentInterestSummaryFeatureDescriptor;
- (BOOL)hideInterestChargeClarity;
- (id)hideInterestChargeClarityFeatureDescriptor;
- (BOOL)hideBillPaymentHoldTime;
- (id)hideBillPaymentHoldTimeFeatureDescriptor;
- (BOOL)hideEnhancedDisputeDetails;
- (id)hideEnhancedDisputeDetailsFeatureDescriptor;
- (BOOL)hideDisputeDetails;
- (id)hideDisputeDetailsFeatureDescriptor;
- (BOOL)showRewardsGraph;
- (id)showRewardsGraphFeatureDescriptor;
- (BOOL)showPaymentSheetRewards;
- (id)showPaymentSheetRewardsFeatureDescriptor;
- (BOOL)showCardPromotions;
- (id)showCardPromotionsFeatureDescriptor;
- (BOOL)showEnhancedMerchants;
- (id)showEnhancedMerchantsFeatureDescriptor;
- (id)_creditFeatureWithIdentifier:(id)identifier;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithDictionary:(id)dictionary isCloudAccount:(BOOL)account;
- (id)associatedPassUniqueID;
- (id)createdDate;
- (id)productTimeZone;
- (id)analyticsEventAccountType;
- (id)updateUserInfoBaseURL;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isContentEqualToAccount:(id)account;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)supportsExtendedFetch;
- (BOOL)isClosedAndChargedOff;
- (void)updateWithCloudStoreRecord:(id)record;
- (id)initWithCloudStoreCoder:(id)coder;
- (void)applyPropertiesFromCloudStoreRecord:(id)record;
- (void)encodeWithCloudStoreCoder:(id)coder codingType:(unsigned long long)type;
- (unsigned long long)itemType;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)type;
- (id)_featureDescriptorsForFeature:(unsigned long long)feature inCloudRecord:(id)record;
- (void)_addSupportedFeaturesToEncryptedCloudRecord:(id)record;
- (id)_featureWithIdentifier:(id)identifier;
- (void)_insertSupportedFeature:(id)feature;
- (void)_removeSupportedFeatureWithIdentifier:(id)identifier;
- (BOOL)isCoOwner;
- (BOOL)isSharedAccount;
@end

#endif /* PKAccount_h */