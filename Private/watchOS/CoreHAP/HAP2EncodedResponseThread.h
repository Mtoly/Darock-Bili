//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2EncodedResponseThread_h
#define HAP2EncodedResponseThread_h
@import Foundation;

#include "HAP2LoggingObject.h"
#include "HAP2EncodedResponse-Protocol.h"
#include "HAPBTLEResponse.h"

@class NSString;

@interface HAP2EncodedResponseThread : HAP2LoggingObject<HAP2EncodedResponse>

@property (readonly, nonatomic) HAPBTLEResponse *btleResponse;
@property (readonly, nonatomic) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBTLEResponse:(id)btleresponse;
- (BOOL)isEncrypted;
@end

#endif /* HAP2EncodedResponseThread_h */