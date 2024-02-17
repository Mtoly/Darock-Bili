//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCHTTPTransaction_h
#define DMCHTTPTransaction_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"

@class NSArray, NSData, NSDictionary, NSError, NSMutableData, NSMutableDictionary, NSString, NSURL, NSURLSession;
@protocol DMCHTTPAuthenticator;

@interface DMCHTTPTransaction : NSObject<NSURLSessionDataDelegate> {
  /* instance variables */
  NSURL *_requestURL;
  BOOL _rememberData;
  struct __SecIdentity * _identity;
  NSURL *_currentURL;
  NSURLSession *_session;
  NSMutableDictionary *_headers;
}

@property (copy, nonatomic) id /* block */ transactionCompletionBlock;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *method;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSArray *pinnedSecCertificateRefs;
@property (nonatomic) BOOL pinningRevocationCheckRequired;
@property (retain, nonatomic) NSObject<DMCHTTPAuthenticator> *authenticator;
@property (retain, nonatomic) NSURL *downloadURL;
@property (retain, nonatomic) NSString *CMSSignatureHeaderName;
@property (readonly, retain, nonatomic) NSData *responseData;
@property (readonly, retain, nonatomic) NSDictionary *responseHeaders;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) NSURL *permanentlyRedirectedURL;
@property (readonly, nonatomic) long long statusCode;
@property (copy, nonatomic) id /* block */ simulatedTransactionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id /* block */)emptySuccessResponseBlock;

/* instance methods */
- (struct __SecIdentity *)copyIdentity;
- (void)setIdentity:(struct __SecIdentity *)identity;
- (id)initWithURL:(id)url method:(id)method;
- (id)initWithURL:(id)url method:(id)method downloadURL:(id)url;
- (void)dealloc;
- (void)addHeaderKey:(id)key value:(id)value;
- (id)_constructRequestOutError:(id *)error;
- (void)_beginTransaction;
- (void)_beginDataTaskWithSessionConfiguration:(id)configuration request:(id)request;
- (void)_beginDownloadTaskWithSessionConfiguration:(id)configuration request:(id)request;
- (void)_simulateTransaction;
- (void)performSynchronously;
- (void)performCompletionBlock:(id /* block */)block;
- (void)_completeTransaction;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (BOOL)_shouldAllowTrust:(struct __SecTrust *)trust forHost:(id)host;
- (BOOL)_shouldAllowTrustWithPinning:(struct __SecTrust *)pinning forHost:(id)host;
- (void)URLSession:(id)urlsession task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession downloadTask:(id)task didFinishDownloadingToURL:(id)url;
@end

#endif /* DMCHTTPTransaction_h */