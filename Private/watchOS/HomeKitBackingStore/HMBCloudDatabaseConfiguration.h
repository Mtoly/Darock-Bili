//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBCloudDatabaseConfiguration_h
#define HMBCloudDatabaseConfiguration_h
@import Foundation;

#include "HMFObject.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class CKContainerID, CKOperationConfiguration, NSString;

@interface HMBCloudDatabaseConfiguration : HMFObject<NSCopying, NSMutableCopying>

@property BOOL manateeContainer;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic) BOOL registerForDBNotifications;
@property long long subscriptionPushRegistrationAction;
@property (readonly, copy) CKContainerID *containerID;

/* instance methods */
- (id)initWithContainerID:(id)id;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isManateeContainer;
@end

#endif /* HMBCloudDatabaseConfiguration_h */