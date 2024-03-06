//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKBundleInformation_h
#define AKBundleInformation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface AKBundleInformation : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleName;
@property (readonly, copy, nonatomic) NSString *bundleDescription;
@property (readonly, nonatomic) unsigned long long bundleType;
@property (readonly, copy, nonatomic) NSDictionary *otherInfo;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBundleIdentifier:(id)identifier bundleName:(id)name bundleDescription:(id)description bundleType:(unsigned long long)type otherInfo:(id)info;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* AKBundleInformation_h */