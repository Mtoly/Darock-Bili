//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRITaskCapabilityModifier_h
#define TRITaskCapabilityModifier_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface TRITaskCapabilityModifier : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) unsigned long long add;
@property (readonly, nonatomic) unsigned long long remove;

/* class methods */
+ (id)parseFromData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithAdd:(unsigned long long)add remove:(unsigned long long)remove;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)updateCapability:(unsigned long long)capability;
- (BOOL)isEqualToModifier:(id)modifier;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)asPersistedModifier;
- (id)serialize;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* TRITaskCapabilityModifier_h */