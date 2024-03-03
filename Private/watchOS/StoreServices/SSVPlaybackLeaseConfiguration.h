//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVPlaybackLeaseConfiguration_h
#define SSVPlaybackLeaseConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface SSVPlaybackLeaseConfiguration : NSObject<NSCopying>

@property (readonly, nonatomic) long long leaseType;
@property (copy, nonatomic) NSURL *beginLeaseURL;
@property (copy, nonatomic) NSURL *certificateURL;
@property (copy, nonatomic) NSURL *getAssetURL;
@property (copy, nonatomic) NSURL *refreshLeaseURL;
@property (copy, nonatomic) NSURL *pastisCertificateURL;
@property (copy, nonatomic) NSURL *pastisKeyServerURL;
@property (copy, nonatomic) NSURL *provisionMachineURL;
@property (copy, nonatomic) NSURL *syncMachineURL;
@property (copy, nonatomic) NSString *storeFrontSuffix;

/* instance methods */
- (id)initWithCertificateURL:(id)url leaseURL:(id)url pastisKeyServerURL:(id)url provisionMachineURL:(id)url storeFrontSuffix:(id)suffix syncMachineURL:(id)url;
- (id)initWithCertificateURL:(id)url leaseType:(long long)type leaseURL:(id)url pastisKeyServerURL:(id)url provisionMachineURL:(id)url storeFrontSuffix:(id)suffix syncMachineURL:(id)url;
- (id)initWithURLBagDictionary:(id)dictionary;
- (id)initWithURLBagDictionary:(id)dictionary leaseType:(long long)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SSVPlaybackLeaseConfiguration_h */