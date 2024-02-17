//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVToken_h
#define CKVToken_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface CKVToken : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *cleanValue;
@property (readonly, nonatomic) unsigned long long beginIndex;
@property (readonly, nonatomic) unsigned long long endIndex;
@property (readonly, nonatomic) BOOL isSignificant;
@property (readonly, nonatomic) BOOL isWhitespace;
@property (readonly, nonatomic) NSArray *normalizedValues;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithValue:(id)value cleanValue:(id)value beginIndex:(unsigned long long)index endIndex:(unsigned long long)index isSignificant:(BOOL)significant isWhitespace:(BOOL)whitespace;
- (id)initWithValue:(id)value cleanValue:(id)value beginIndex:(unsigned long long)index endIndex:(unsigned long long)index isSignificant:(BOOL)significant isWhitespace:(BOOL)whitespace normalizedValues:(id)values;
- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToToken:(id)token;
- (unsigned long long)hash;
@end

#endif /* CKVToken_h */