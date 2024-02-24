//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMusicSubscriptionPlaybackRequestOperation_h
#define ICMusicSubscriptionPlaybackRequestOperation_h
@import Foundation;

#include "ICAsyncOperation.h"
#include "ICStoreRequestContext.h"
#include "ICStoreURLRequest.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionPlaybackRequestOperation : ICAsyncOperation {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  ICStoreURLRequest *_activeURLRequest;
}

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (nonatomic) BOOL delegatedPlayback;
@property (nonatomic) long long requestType;
@property (copy, nonatomic) id /* block */ willBeginExecutionHandler;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (nonatomic) long long storePurchasedAdamID;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (nonatomic) BOOL followUp;
@property (copy, nonatomic) NSString *playbackAuthorizationToken;

/* instance methods */
- (id)init;
- (void)cancel;
- (void)start;
- (BOOL)isDelegatedPlayback;
- (BOOL)isFollowUp;
@end

#endif /* ICMusicSubscriptionPlaybackRequestOperation_h */