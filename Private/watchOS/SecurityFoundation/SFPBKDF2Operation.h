//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef SFPBKDF2Operation_h
#define SFPBKDF2Operation_h
@import Foundation;

#include "SFKeyDerivingOperation-Protocol.h"
#include "SFPseudoRandomFunction-Protocol.h"

@class NSData, NSString;

@interface SFPBKDF2Operation : NSObject<SFKeyDerivingOperation> {
  /* instance variables */
  id _pbkdf2OperationInternal;
}

@property (copy, nonatomic) NSObject<SFPseudoRandomFunction> *pseudoRandomFunction;
@property (nonatomic) long long iterationCount;
@property (copy, nonatomic) NSData *salt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)keySource;
+ (id)_randomSalt;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithPseudoRandomFunction:(id)function iterationCount:(long long)count salt:(id)salt;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)deriveKeyWithSpecifier:(id)specifier fromKeySource:(id)source error:(id *)error;
@end

#endif /* SFPBKDF2Operation_h */