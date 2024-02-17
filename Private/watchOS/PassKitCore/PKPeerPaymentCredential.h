//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentCredential_h
#define PKPeerPaymentCredential_h
@import Foundation;

#include "PKPaymentCredential.h"
#include "PKCurrencyAmount.h"
#include "PKPeerPaymentAccount.h"
#include "PKPeerPaymentPassDetailsResponse.h"

@class NSString;

@interface PKPeerPaymentCredential : PKPaymentCredential

@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (retain, nonatomic) PKPeerPaymentPassDetailsResponse *passDetailsResponse;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) unsigned long long flowState;
@property (copy, nonatomic) NSString *pendingPaymentSenderAddress;
@property (readonly, copy, nonatomic) NSString *pendingPaymentSenderName;

/* instance methods */
- (id)initWithPeerPaymentAccount:(id)account;
- (BOOL)isEqual:(id)equal;
- (BOOL)_isEqualToCredential:(id)credential;
- (unsigned long long)hash;
- (id)longDescription;
- (id)detailDescription;
- (BOOL)supportsSuperEasyProvisioning;
@end

#endif /* PKPeerPaymentCredential_h */