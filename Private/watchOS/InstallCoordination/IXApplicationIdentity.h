//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXApplicationIdentity_h
#define IXApplicationIdentity_h
@import Foundation;

#include "MIAppIdentity.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class MIAppIdentity, NSString;

@interface IXApplicationIdentity : MIAppIdentity<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) MIAppIdentity *miAppIdentity;

/* class methods */
+ (id)identitiesForBundleIdentifiers:(id)identifiers;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)resolvePersonaUsingModuleSpecificLogicWithError:(id *)error;
- (id)initWithBundleIdentifier:(id)identifier personaUniqueString:(id)string;
- (id)initWithBundleIdentifier:(id)identifier;
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)identifier;
- (id)initWithPlistKeySerialization:(id)serialization;
- (id)canonicalSerializationForPlistKey;
- (id)possibleSerializationsForPlistKey;
- (id)description;
- (id)initWithCoder:(id)coder;
- (BOOL)resolvePersonaWithError:(id *)error;
@end

#endif /* IXApplicationIdentity_h */