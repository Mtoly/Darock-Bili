//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKFeatureApplicationInvitationDetails_h
#define PKFeatureApplicationInvitationDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSPersonNameComponents, NSString;

@interface PKFeatureApplicationInvitationDetails : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (copy, nonatomic) NSString *originatorAltDSID;
@property (nonatomic) unsigned long long accountUserAccessLevel;
@property (copy, nonatomic) NSString *originatorFirstName;
@property (copy, nonatomic) NSString *originatorLastName;
@property (copy, nonatomic) NSString *accountUserFirstName;
@property (copy, nonatomic) NSString *accountUserLastName;
@property (readonly, nonatomic) NSPersonNameComponents *originatorNameComponents;
@property (readonly, nonatomic) NSPersonNameComponents *accountUserNameComponents;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithAccountUserAltDSID:(id)dsid accessLevel:(unsigned long long)level;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKFeatureApplicationInvitationDetails_h */