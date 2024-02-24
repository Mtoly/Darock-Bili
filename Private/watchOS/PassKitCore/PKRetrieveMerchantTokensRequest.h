//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRetrieveMerchantTokensRequest_h
#define PKRetrieveMerchantTokensRequest_h
@import Foundation;

#include "PKPaymentWebServiceRequest.h"
#include "PKSecureElementPass.h"

@class NSNumber, NSString;

@interface PKRetrieveMerchantTokensRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKSecureElementPass *pass;
@property (copy, nonatomic) NSString *merchantTokenId;
@property (copy, nonatomic) NSNumber *pageNumber;
@property (copy, nonatomic) NSNumber *pageSize;

/* instance methods */
- (id)_urlRequestWithServiceURL:(id)url deviceIdentifier:(id)identifier appleAccountInformation:(id)information;
@end

#endif /* PKRetrieveMerchantTokensRequest_h */