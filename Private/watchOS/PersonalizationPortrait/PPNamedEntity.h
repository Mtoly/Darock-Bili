//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPNamedEntity_h
#define PPNamedEntity_h
@import Foundation;

#include "MLFeatureProvider-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PPNamedEntityRecord.h"

@class NSSet, NSString;

@interface PPNamedEntity : NSObject<NSCopying, NSSecureCoding, MLFeatureProvider>

@property (readonly, nonatomic) NSString *clusterIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) NSString *dynamicCategory;
@property (readonly, nonatomic) NSString *bestLanguage;
@property (readonly, nonatomic) PPNamedEntityRecord *mostRelevantRecord;
@property (readonly, nonatomic) double sentimentScore;
@property (readonly, nonatomic) NSSet *featureNames;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)describeCategory:(unsigned long long)category;
+ (unsigned long long)categoryForDescription:(id)description;
+ (id)clusterIdentifierFromName:(id)name;

/* instance methods */
- (id)initWithName:(id)name category:(unsigned long long)category dynamicCategory:(id)category language:(id)language mostRelevantRecord:(id)record;
- (id)initWithName:(id)name category:(unsigned long long)category language:(id)language;
- (id)initWithName:(id)name category:(unsigned long long)category dynamicCategory:(id)category language:(id)language;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqualToNamedEntity:(id)entity;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)featureValueForName:(id)name;
@end

#endif /* PPNamedEntity_h */