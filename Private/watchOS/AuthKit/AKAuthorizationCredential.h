//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAuthorizationCredential_h
#define AKAuthorizationCredential_h
@import Foundation;

#include "AKCredential-Protocol.h"
#include "AKUserInformation.h"

@class NSArray, NSData, NSString;

@interface AKAuthorizationCredential : NSObject<AKCredential>

@property (nonatomic) BOOL isLikelyRealUser;
@property (readonly, copy, nonatomic) NSArray *authorizedScopes;
@property (readonly, copy, nonatomic) NSData *identityToken;
@property (readonly, copy, nonatomic) NSData *authorizationCode;
@property (readonly, copy, nonatomic) NSString *state;
@property (readonly, nonatomic) AKUserInformation *userInformation;
@property (readonly, copy, nonatomic) NSString *transactionID;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithServerResponse:(id)response;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* AKAuthorizationCredential_h */