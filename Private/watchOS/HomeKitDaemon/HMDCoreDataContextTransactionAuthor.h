//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCoreDataContextTransactionAuthor_h
#define HMDCoreDataContextTransactionAuthor_h
@import Foundation;

#include "HMFObject.h"

@class NSString;

@interface HMDCoreDataContextTransactionAuthor : HMFObject

@property (readonly) unsigned long long type;
@property (readonly) NSString *clientIdentifier;
@property (readonly) long long qualityOfService;
@property (readonly, copy) NSString *string;

/* class methods */
+ (id)residentSyncContextAuthor;
+ (id)firstPartyContextAuthor;
+ (id)unitTestsContextAuthor;
+ (id)controllerForceUpdateContextAuthor;
+ (id)contextAuthorWithType:(unsigned long long)type;
+ (id)contextAuthorWithType:(unsigned long long)type clientIdentifier:(id)identifier;
+ (id)contextAuthorWithType:(unsigned long long)type clientIdentifier:(id)identifier qualityOfService:(long long)service;
+ (id)contextAuthorWithString:(id)string;

/* instance methods */
- (id)initWithType:(unsigned long long)type clientIdentifier:(id)identifier qualityOfService:(long long)service;
- (id)description;
@end

#endif /* HMDCoreDataContextTransactionAuthor_h */