//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef C2NetworkingDelegateURLSession_h
#define C2NetworkingDelegateURLSession_h
@import Foundation;

@class NSOperationQueue, NSString, NSURLSessionConfiguration;
@protocol C2NetworkingDelegate, NSURLSessionDelegate><C2RequestDelegate;

@interface C2NetworkingDelegateURLSession : NSObject

@property (weak, nonatomic) NSObject<NSURLSessionDelegate><C2RequestDelegate> *sessionDelegate;
@property (retain) NSOperationQueue *delegateQueue;
@property (copy) NSURLSessionConfiguration *configuration;
@property (weak, nonatomic) NSObject<C2NetworkingDelegate> *networkingDelegate;
@property (copy) NSString *sessionDescription;

/* class methods */
+ (id)sessionWithConfiguration:(id)configuration delegate:(id)delegate delegateQueue:(id)queue;

/* instance methods */
- (id)dataTaskWithRequest:(id)request;
- (void)invalidateAndCancel;
- (void)_useTLSSessionCacheFromSession:(id)session;
@end

#endif /* C2NetworkingDelegateURLSession_h */