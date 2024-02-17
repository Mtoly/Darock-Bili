//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPNFCAccessDeviceCredentialKeyResponse_h
#define HAPNFCAccessDeviceCredentialKeyResponse_h
@import Foundation;

#include "HAPNFCAccessResponseStatusWrapper.h"
#include "HAPTLVProtocol-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HAPNFCAccessDeviceCredentialKeyResponse : NSObject<NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *identifier;
@property (retain, nonatomic) NSData *issuerKeyIdentifier;
@property (retain, nonatomic) HAPNFCAccessResponseStatusWrapper *statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)parsedFromData:(id)data error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier issuerKeyIdentifier:(id)identifier statusCode:(id)code;
- (BOOL)parseFromData:(id)data error:(id *)error;
- (id)serializeWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HAPNFCAccessDeviceCredentialKeyResponse_h */