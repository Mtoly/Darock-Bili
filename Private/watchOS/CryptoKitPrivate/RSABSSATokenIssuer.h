//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 176.0.2.0.0
//
#ifndef RSABSSATokenIssuer_h
#define RSABSSATokenIssuer_h
@import Foundation;

@class NSData;

@interface RSABSSATokenIssuer : NSObject {
  /* instance variables */
  const struct ccrsabssa_ciphersuite * _ciphersuite;
  unsigned long long _ciphersuiteModulusByteCount;
  Q]} x[167{ccrsa_full_ctx="pb_n"Q"pb_bitlen"Q"pb_funcs"^{cczp_funcs}"pb_ccn"[0] _rsaPrivateKey;
}

@property (retain, nonatomic) NSData *publicKey;
@property (readonly, retain, nonatomic) NSData *keyId;

/* instance methods */
- (id)init;
- (id)initWithKeyByteCount:(unsigned long long)count;
- (id)blindSign:(id)sign error:(id *)error;
@end

#endif /* RSABSSATokenIssuer_h */