//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMNetworkVPNDeclaration_SecurityAssociationParameters_h
#define CEMNetworkVPNDeclaration_SecurityAssociationParameters_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_SecurityAssociationParameters : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadEncryptionAlgorithm;
@property (copy, nonatomic) NSString *payloadIntegrityAlgorithm;
@property (copy, nonatomic) NSNumber *payloadDiffieHellmanGroup;
@property (copy, nonatomic) NSNumber *payloadLifeTimeInMinutes;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithEncryptionAlgorithm:(id)algorithm withIntegrityAlgorithm:(id)algorithm withDiffieHellmanGroup:(id)group withLifeTimeInMinutes:(id)minutes;
+ (id)buildRequiredOnly;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMNetworkVPNDeclaration_SecurityAssociationParameters_h */