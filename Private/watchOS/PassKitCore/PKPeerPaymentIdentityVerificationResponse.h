//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentIdentityVerificationResponse_h
#define PKPeerPaymentIdentityVerificationResponse_h
@import Foundation;

#include "PKPeerPaymentWebServiceResponse.h"
#include "PKDynamicProvisioningPageLearnMoreContent.h"
#include "PKPeerPaymentAccount.h"

@class NSArray, NSString;

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) BOOL complete;
@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) PKDynamicProvisioningPageLearnMoreContent *learnMore;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSArray *requiredFieldsByPage;
@property (readonly, nonatomic) NSArray *acceptableDocuments;
@property (readonly, copy, nonatomic) NSArray *encryptionCertificates;
@property (readonly, copy, nonatomic) NSString *encryptionVersion;
@property (nonatomic) long long verificationContext;

/* instance methods */
- (id)initWithData:(id)data;
@end

#endif /* PKPeerPaymentIdentityVerificationResponse_h */