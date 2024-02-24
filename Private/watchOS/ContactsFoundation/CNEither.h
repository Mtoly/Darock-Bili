//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNEither_h
#define CNEither_h
@import Foundation;

#include "CNPair.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface CNEither : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) CNPair *pair;
@property (readonly, nonatomic) BOOL isLeft;
@property (readonly, nonatomic) BOOL isRight;
@property (readonly, nonatomic) id left;
@property (readonly, nonatomic) id right;

/* class methods */
+ (id)eitherWithLeft:(id)left right:(id)right;
+ (id)eitherWithLeft:(id)left;
+ (id)eitherWithRight:(id)right;
+ (id)eitherWithBool:(BOOL)bool error:(id)error;
+ (id)eitherWithBlock:(id /* block */)block;
+ (id)firstLeftInLazyChain:(id)chain;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLeft:(id)left right:(id)right;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CNEither_h */