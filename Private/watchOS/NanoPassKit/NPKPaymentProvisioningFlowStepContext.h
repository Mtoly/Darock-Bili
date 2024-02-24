//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentProvisioningFlowStepContext_h
#define NPKPaymentProvisioningFlowStepContext_h
@import Foundation;

#include "NPKPaymentProvisioningFlowControllerRequestContext.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface NPKPaymentProvisioningFlowStepContext : NSObject<NSSecureCoding>

@property (readonly) NPKPaymentProvisioningFlowControllerRequestContext *requestContext;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) NSString *backStepIdentifier;
@property (nonatomic) BOOL allowsAddLater;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRequestContext:(id)context;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_baseFlowStepDescription;
- (id)preconditionsStepContext;
- (id)welcomeStepContext;
- (id)chooseFlowStepContext;
- (id)chooseProductStepContext;
- (id)chooseCredentialsStepContext;
- (id)digitalIssuanceAmountStepContext;
- (id)digitalIssuancePaymentStepContext;
- (id)readerModeEntryStepContext;
- (id)readerModeIngestionStepContext;
- (id)manualEntryStepContext;
- (id)secondaryManualEntryStepContext;
- (id)localDeviceManualEntryStepContext;
- (id)localDeviceManualEntryProgressStepContext;
- (id)productDisambiguationStepContext;
- (id)passcodeUpgradeStepContext;
- (id)termsAndConditionsStepContext;
- (id)provisioningProgressStepContext;
- (id)moreInformationStepContext;
- (id)provisioningResultStepContext;
- (id)verificationChannelsStepContext;
- (id)verificationFieldsStepContext;
- (id)verificationCodeStepContext;
- (id)getIssuerApplicationAddRequestStepContext;
- (id)chooseTransitProductStepContext;
- (id)chooseEMoneyProductStepContext;
- (id)appleBalanceAccountDetailsStepContext;
@end

#endif /* NPKPaymentProvisioningFlowStepContext_h */