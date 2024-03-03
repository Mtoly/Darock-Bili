//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCEmailAccountPayload_h
#define MCEmailAccountPayload_h
@import Foundation;

#include "MCEmailAccountPayloadBase.h"

@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase

@property (readonly, nonatomic) NSNumber *incomingMailServerUseSSLNum;
@property (readonly, nonatomic) NSNumber *outgoingPasswordSameAsIncomingPasswordNum;
@property (readonly, nonatomic) NSNumber *outgoingMailServerUseSSLNum;
@property (readonly, retain, nonatomic) NSString *emailAccountDescription;
@property (readonly, retain, nonatomic) NSString *emailAccountName;
@property (readonly, retain, nonatomic) NSString *emailAccountType;
@property (readonly, retain, nonatomic) NSString *emailAddress;
@property (readonly, retain, nonatomic) NSString *incomingMailServerAuthentication;
@property (readonly, retain, nonatomic) NSString *incomingMailServerHostname;
@property (readonly, retain, nonatomic) NSNumber *incomingMailServerPortNumber;
@property (readonly, nonatomic) BOOL incomingMailServerUseSSL;
@property (readonly, retain, nonatomic) NSString *incomingMailServerUsername;
@property (readonly, retain, nonatomic) NSString *incomingMailServerIMAPPathPrefix;
@property (readonly, retain, nonatomic) NSString *incomingPassword;
@property (retain, nonatomic) NSString *incomingACAccountIdentifier;
@property (readonly, retain, nonatomic) NSString *outgoingPassword;
@property (readonly, nonatomic) BOOL outgoingPasswordSameAsIncomingPassword;
@property (readonly, retain, nonatomic) NSString *outgoingMailServerAuthentication;
@property (readonly, retain, nonatomic) NSString *outgoingMailServerHostname;
@property (readonly, retain, nonatomic) NSNumber *outgoingMailServerPortNumber;
@property (readonly, nonatomic) BOOL outgoingMailServerUseSSL;
@property (readonly, retain, nonatomic) NSString *outgoingMailServerUsername;
@property (retain, nonatomic) NSString *outgoingACAccountIdentifier;

/* class methods */
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;
+ (id)profileNameFromAccountTag:(id)tag;

/* instance methods */
- (id)mailAccountIdentifiers;
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (id)stubDictionary;
- (id)verboseDescription;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)_emailAccountTypeLocalizedString;
- (id)_authenticationTypeLocalizedString:(id)string;
- (id)payloadDescriptionKeyValueSections;
- (BOOL)containsSensitiveUserInformation;
@end

#endif /* MCEmailAccountPayload_h */