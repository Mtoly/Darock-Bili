//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDEventCounterGroupNameSpecifier_h
#define HMDEventCounterGroupNameSpecifier_h
@import Foundation;

#include "HMDEventCounterGroupSpecifying-Protocol.h"

@class NSString;

@interface HMDEventCounterGroupNameSpecifier : NSObject<HMDEventCounterGroupSpecifying>

@property (readonly, nonatomic) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)specifierWithGroupName:(id)name;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithGroupName:(id)name;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToGroupNameSpecifier:(id)specifier;
@end

#endif /* HMDEventCounterGroupNameSpecifier_h */