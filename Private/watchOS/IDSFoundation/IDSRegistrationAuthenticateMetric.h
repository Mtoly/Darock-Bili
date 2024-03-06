//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSRegistrationAuthenticateMetric_h
#define IDSRegistrationAuthenticateMetric_h
@import Foundation;

#include "CUTCoreAnalyticsMetric-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface IDSRegistrationAuthenticateMetric : NSObject<CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) unsigned int connectionType;
@property (readonly, nonatomic) unsigned int resultCode;
@property (readonly, nonatomic) unsigned int registrationError;
@property (readonly, nonatomic) BOOL isPhoneUser;
@property (readonly, nonatomic) BOOL isDSUser;
@property (readonly, nonatomic) NSNumber *genericError;
@property (readonly, nonatomic) NSNumber *URLError;
@property (readonly, nonatomic) NSNumber *POSIXError;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithGuid:(id)guid success:(BOOL)success connectionType:(unsigned int)type resultCode:(unsigned int)code registrationError:(unsigned int)error isPhoneUser:(BOOL)user isDSUser:(BOOL)dsuser genericError:(id)error URLError:(id)urlerror POSIXError:(id)posixerror;
@end

#endif /* IDSRegistrationAuthenticateMetric_h */