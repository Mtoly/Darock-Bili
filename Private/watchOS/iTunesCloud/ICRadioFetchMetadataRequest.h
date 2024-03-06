//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICRadioFetchMetadataRequest_h
#define ICRadioFetchMetadataRequest_h
@import Foundation;

#include "ICStoreRequestContext.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData;

@interface ICRadioFetchMetadataRequest : NSObject<NSCopying>

@property (copy, nonatomic) NSArray *storeAdamIDs;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (copy, nonatomic) NSData *timedMetadataData;
@property (nonatomic) long long qualityOfService;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)performWithResponseHandler:(id /* block */)handler;
@end

#endif /* ICRadioFetchMetadataRequest_h */