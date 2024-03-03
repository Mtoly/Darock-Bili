//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHEarnedInstance_h
#define ACHEarnedInstance_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class HDSyncIdentity, HKQuantity, NSDate, NSDateComponents, NSString;

@interface ACHEarnedInstance : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  unsigned long long _uniqueNameIndex;
}

@property (nonatomic) struct { unsigned short x0; unsigned char x1; unsigned char x2; BOOL x3; } packedEarnedDateComponents;
@property (nonatomic) unsigned long long key;
@property (retain, nonatomic) NSString *templateUniqueName;
@property (retain, nonatomic) NSDateComponents *earnedDateComponents;
@property (retain, nonatomic) HKQuantity *value;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSDate *createdDate;
@property (nonatomic) unsigned char creatorDevice;
@property (retain, nonatomic) HDSyncIdentity *syncIdentity;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)_allTemplateUniqueNames;

/* instance methods */
- (id)init;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (long long)compareEarnedDateWithEarnedInstance:(id)instance;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)debugDescription;
- (id)initWithCodable:(id)codable;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ACHEarnedInstance_h */