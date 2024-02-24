//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMusicKitURLRequest_h
#define ICMusicKitURLRequest_h
@import Foundation;

#include "ICURLRequest.h"
#include "ICMusicKitRequestContext.h"
#include "ICStoreURLRequest.h"

@class NSDictionary, NSString;

@interface ICMusicKitURLRequest : ICURLRequest {
  /* instance variables */
  ICStoreURLRequest *_pendingEquivalentStoreURLRequest;
  NSString *_cachedDescription;
  NSString *_developerToken;
}

@property (readonly, copy, nonatomic) NSString *_developerToken;
@property (readonly, nonatomic) ICStoreURLRequest *_pendingEquivalentStoreURLRequest;
@property (readonly, copy, nonatomic) ICMusicKitRequestContext *requestContext;
@property (copy, nonatomic) NSDictionary *additionalHTTPCookies;

/* class methods */
+ (unsigned long long)_defaultMaxRetryCountForReason:(id)reason;
+ (Class)_responseClass;
+ (Class)_responseHandlerClass;

/* instance methods */
- (id)initWithURL:(id)url requestContext:(id)context;
- (id)initWithURLRequest:(id)urlrequest requestContext:(id)context;
- (id)initWithURLRequest:(id)urlrequest requestContext:(id)context resumeData:(id)data;
- (void)_setDeveloperToken:(id)token;
- (id)_description;
- (id)description;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)handler;
- (void)_buildMusicKitURLRequestWithBaseURLRequest:(id)urlrequest completionHandler:(id /* block */)handler;
- (void)_buildEquivalentStoreURLRequestWithDeveloperToken:(id)token completionHandler:(id /* block */)handler;
- (void)_buildUserTokenBasedMusicKitURLRequestWithBaseURLRequest:(id)urlrequest developerToken:(id)token completionHandler:(id /* block */)handler;
- (void)_updateURLSessionManagedPropertiesForEquivalentStoreURLRequest:(id)urlrequest;
@end

#endif /* ICMusicKitURLRequest_h */