//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef SFTripleDESEncryptionOperation_h
#define SFTripleDESEncryptionOperation_h
@import Foundation;

#include "SFSymmetricEncryptionOperation.h"

@interface SFTripleDESEncryptionOperation : SFSymmetricEncryptionOperation {
  /* instance variables */
  id _tripleDESEncryptionOperationInternal;
}

@property (copy, @dynamic, nonatomic) _SFTripleDESKeySpecifier *encryptionKeySpecifier;

/* instance methods */
- (id)initWithKeySpecifier:(id)specifier mode:(long long)mode;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)encrypt:(id)encrypt withKey:(id)key error:(id *)error;
- (id)decrypt:(id)decrypt withKey:(id)key error:(id *)error;
@end

#endif /* SFTripleDESEncryptionOperation_h */