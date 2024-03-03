//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentToken_h
#define PKPaymentToken_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKPaymentMethod.h"

@class NSData, NSString, NSURL;

@interface PKPaymentToken : NSObject<NSSecureCoding>

@property (retain, nonatomic) PKPaymentMethod *paymentMethod;
@property (copy, nonatomic) NSString *paymentInstrumentName;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSData *paymentData;
@property (retain, nonatomic) NSURL *redeemURL;
@property (copy, nonatomic) NSString *retryNonce;

/* class methods */
+ (id)paymentTokenWithProtobuf:(id)protobuf;
+ (long long)version;
+ (BOOL)supportsSecureCoding;
+ (id)simulatedTokenForNetwork:(id)network;

/* instance methods */
- (id)protobuf;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)dictionaryRepresentation;
@end

#endif /* PKPaymentToken_h */