//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMusicSubscriptionStatusRequest_h
#define ICMusicSubscriptionStatusRequest_h
@import Foundation;

#include "ICStoreRequestContext.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSUUID;

@interface ICMusicSubscriptionStatusRequest : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL shouldBypassEnforcementOfPrivacyAcknowledgement;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (nonatomic) long long reason;
@property (nonatomic) BOOL shouldIgnoreCache;
@property (nonatomic) BOOL allowsFallbackToExpiredStatus;
@property (nonatomic) BOOL allowsFallbackToStatusNeedingReload;
@property (nonatomic) BOOL shouldReturnLastKnownStatusOnly;
@property (nonatomic) long long carrierBundleProvisioningStyle;
@property (readonly, nonatomic) NSUUID *requestIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStoreRequestContext:(id)context;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ICMusicSubscriptionStatusRequest_h */