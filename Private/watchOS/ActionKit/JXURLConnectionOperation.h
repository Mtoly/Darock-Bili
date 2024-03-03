//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef JXURLConnectionOperation_h
#define JXURLConnectionOperation_h
@import Foundation;

#include "JXOperation.h"
#include "NSURLConnectionDataDelegate-Protocol.h"
#include "NSURLConnectionDelegate-Protocol.h"

@class NSError, NSMutableURLRequest, NSOutputStream, NSString, NSURLConnection, NSURLResponse;

@interface JXURLConnectionOperation : JXOperation<NSURLConnectionDelegate, NSURLConnectionDataDelegate>

@property (retain) NSURLConnection *connection;
@property (retain) NSMutableURLRequest *request;
@property (retain) NSURLResponse *response;
@property (retain) NSError *error;
@property long long bytesDownloaded;
@property long long bytesUploaded;
@property (retain) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)networkThread;
+ (void)runLoopForever;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)url;
- (void)main;
- (void)willFinish;
- (void)startConnection;
- (void)stopConnection;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didSendBodyData:(long long)data totalBytesWritten:(long long)written totalBytesExpectedToWrite:(long long)write;
- (void)connectionDidFinishLoading:(id)loading;
@end

#endif /* JXURLConnectionOperation_h */