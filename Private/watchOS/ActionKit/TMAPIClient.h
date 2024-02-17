//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef TMAPIClient_h
#define TMAPIClient_h
@import Foundation;

#include "JXHTTPOperationQueue.h"

@class NSDictionary, NSOperationQueue, NSString, NSURL;

@interface TMAPIClient : NSObject

@property (retain, nonatomic) JXHTTPOperationQueue *queue;
@property (copy, nonatomic) NSString *OAuthConsumerKey;
@property (copy, nonatomic) NSString *OAuthConsumerSecret;
@property (copy, nonatomic) NSString *OAuthToken;
@property (copy, nonatomic) NSString *OAuthTokenSecret;
@property (copy, nonatomic) NSDictionary *customHeaders;
@property (nonatomic) double timeoutInterval;
@property (retain, nonatomic) NSOperationQueue *defaultCallbackQueue;
@property (retain, nonatomic) NSURL *baseURL;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)authenticate:(id)authenticate urlBlock:(id /* block */)block callback:(id /* block */)callback;
- (BOOL)handleOpenURL:(id)url;
- (void)xAuth:(id)auth password:(id)password callback:(id /* block */)callback;
- (id)userInfoRequest;
- (void)userInfo:(id /* block */)info;
- (id)dashboardRequest:(id)request;
- (void)dashboard:(id)dashboard callback:(id /* block */)callback;
- (id)likesRequest:(id)request;
- (void)likes:(id)likes callback:(id /* block */)callback;
- (id)followingRequest:(id)request;
- (void)following:(id)following callback:(id /* block */)callback;
- (id)followRequest:(id)request;
- (void)follow:(id)follow callback:(id /* block */)callback;
- (id)unfollowRequest:(id)request;
- (void)unfollow:(id)unfollow callback:(id /* block */)callback;
- (id)likeRequest:(id)request reblogKey:(id)key;
- (void)like:(id)like reblogKey:(id)key callback:(id /* block */)callback;
- (id)unlikeRequest:(id)request reblogKey:(id)key;
- (void)unlike:(id)unlike reblogKey:(id)key callback:(id /* block */)callback;
- (void)avatar:(id)avatar size:(unsigned long long)size callback:(id /* block */)callback;
- (void)avatar:(id)avatar size:(unsigned long long)size queue:(id)queue callback:(id /* block */)callback;
- (id)blogInfoRequest:(id)request;
- (void)blogInfo:(id)info callback:(id /* block */)callback;
- (id)followersRequest:(id)request parameters:(id)parameters;
- (void)followers:(id)followers parameters:(id)parameters callback:(id /* block */)callback;
- (id)postsRequest:(id)request type:(id)type parameters:(id)parameters;
- (void)posts:(id)posts type:(id)type parameters:(id)parameters callback:(id /* block */)callback;
- (id)queueRequest:(id)request parameters:(id)parameters;
- (void)queue:(id)queue parameters:(id)parameters callback:(id /* block */)callback;
- (id)draftsRequest:(id)request parameters:(id)parameters;
- (void)drafts:(id)drafts parameters:(id)parameters callback:(id /* block */)callback;
- (id)submissionsRequest:(id)request parameters:(id)parameters;
- (void)submissions:(id)submissions parameters:(id)parameters callback:(id /* block */)callback;
- (id)likesRequest:(id)request parameters:(id)parameters;
- (void)likes:(id)likes parameters:(id)parameters callback:(id /* block */)callback;
- (id)postRequest:(id)request type:(id)type parameters:(id)parameters;
- (void)post:(id)post type:(id)type parameters:(id)parameters callback:(id /* block */)callback;
- (id)editPostRequest:(id)request parameters:(id)parameters;
- (void)editPost:(id)post parameters:(id)parameters callback:(id /* block */)callback;
- (id)reblogPostRequest:(id)request parameters:(id)parameters;
- (void)reblogPost:(id)post parameters:(id)parameters callback:(id /* block */)callback;
- (id)deletePostRequest:(id)request id:(id)id;
- (void)deletePost:(id)post id:(id)id callback:(id /* block */)callback;
- (id)textRequest:(id)request parameters:(id)parameters;
- (void)text:(id)text parameters:(id)parameters callback:(id /* block */)callback;
- (id)quoteRequest:(id)request parameters:(id)parameters;
- (void)quote:(id)quote parameters:(id)parameters callback:(id /* block */)callback;
- (id)linkRequest:(id)request parameters:(id)parameters;
- (void)link:(id)link parameters:(id)parameters callback:(id /* block */)callback;
- (id)chatRequest:(id)request parameters:(id)parameters;
- (void)chat:(id)chat parameters:(id)parameters callback:(id /* block */)callback;
- (id)photoRequest:(id)request filePathArray:(id)array contentTypeArray:(id)array fileNameArray:(id)array parameters:(id)parameters;
- (void)photo:(id)photo filePathArray:(id)array contentTypeArray:(id)array fileNameArray:(id)array parameters:(id)parameters callback:(id /* block */)callback;
- (id)videoRequest:(id)request filePath:(id)path contentType:(id)type fileName:(id)name parameters:(id)parameters;
- (void)video:(id)video filePath:(id)path contentType:(id)type fileName:(id)name parameters:(id)parameters callback:(id /* block */)callback;
- (id)audioRequest:(id)request filePath:(id)path contentType:(id)type fileName:(id)name parameters:(id)parameters;
- (void)audio:(id)audio filePath:(id)path contentType:(id)type fileName:(id)name parameters:(id)parameters callback:(id /* block */)callback;
- (id)taggedRequest:(id)request parameters:(id)parameters;
- (void)tagged:(id)tagged parameters:(id)parameters callback:(id /* block */)callback;
- (id)getRequestWithPath:(id)path parameters:(id)parameters;
- (id)postRequestWithPath:(id)path parameters:(id)parameters;
- (id)multipartPostRequest:(id)request type:(id)type parameters:(id)parameters filePathArray:(id)array contentTypeArray:(id)array fileNameArray:(id)array;
- (id)multipartBodyForParameters:(id)parameters filePathArray:(id)array contentTypeArray:(id)array fileNameArray:(id)array;
- (void)signRequest:(id)request withParameters:(id)parameters;
- (void)sendRequest:(id)request callback:(id /* block */)callback;
- (void)sendRequest:(id)request queue:(id)queue callback:(id /* block */)callback;
- (id)URLWithPath:(id)path;
- (id)init;
@end

#endif /* TMAPIClient_h */