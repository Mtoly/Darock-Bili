//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef _SFIdentity_h
#define _SFIdentity_h
@import Foundation;

#include "SFIdentityAttributes.h"

@interface _SFIdentity : NSObject {
  /* instance variables */
  id _identityInternal;
}

@property (retain, nonatomic) _SFCertificate *certificate;
@property (readonly, nonatomic) _SFPublicKey *publicKey;
@property (retain, nonatomic) _SFKeyPair *keyPair;
@property (readonly, nonatomic) SFIdentityAttributes *attributes;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPublicKey:(id)key;
- (id)initWithKeyPair:(id)pair;
- (id)initWithPublicKey:(id)key certificate:(id)certificate;
- (id)initWithKeyPair:(id)pair certificate:(id)certificate;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _SFIdentity_h */