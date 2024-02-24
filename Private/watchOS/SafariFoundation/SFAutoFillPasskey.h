//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFAutoFillPasskey_h
#define SFAutoFillPasskey_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SFAutoFillPasskeyIdentifier.h"

@class NSData, NSString, WBSAutoFillPasskey;

@interface SFAutoFillPasskey : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) WBSAutoFillPasskey *corePasskey;
@property (readonly, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) SFAutoFillPasskeyIdentifier *identifier;
@property (readonly, nonatomic) NSData *userHandle;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoreAutoFillPasskey:(id)passkey;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFAutoFillPasskey_h */