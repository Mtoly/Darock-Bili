//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef C2ReportMetrics_h
#define C2ReportMetrics_h
@import Foundation;

#include "C2MetricOptions.h"
#include "C2RequestDelegate-Protocol.h"
#include "C2RequestOptions.h"

@class NSMutableURLRequest, NSString, NSURLSessionTask;

@interface C2ReportMetrics : NSObject<C2RequestDelegate>

@property (nonatomic) BOOL ignoreRequestThrottle;
@property (retain, nonatomic) NSString *requestThrottleIdentifier;
@property (nonatomic) unsigned long long requestThrottleLimit;
@property (retain, nonatomic) NSMutableURLRequest *metricRequest;
@property (retain, nonatomic) C2RequestOptions *metricsTransportRequestOptions;
@property (retain, nonatomic) NSURLSessionTask *metricTask;
@property (retain, nonatomic) C2MetricOptions *metricOptions;
@property (copy, nonatomic) id /* block */ testBehavior_tooManyTasksRunning;
@property (copy, nonatomic) id /* block */ testBehavior_didCompleteWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)metricsForMetricRequestOptions:(id)options networkEvent:(id)event genericEvent:(id)event triggers:(int)triggers;
+ (id)requestForMetricRequestOptions:(id)options metrics:(id)metrics;
+ (id)gzipEncode:(id)encode;
+ (id)gzipDecode:(id)decode;
+ (void)reportNetworkEvent:(id)event triggers:(int)triggers originalSessionTask:(id)task;
+ (void)reportMetricWithOptions:(id)options genericMetricType:(long long)type eventName:(id)name startTime:(id)time endTime:(id)time attributes:(id)attributes;
+ (void)_c2FormatValueForRTC:(id)rtc keyPrefix:(id)prefix targetDictionary:(id)dictionary multipleOperationGroups:(BOOL)groups;
+ (void)_reportWithOptions:(id)options networkEvent:(id)event genericEvent:(id)event triggers:(int)triggers eventName:(id)name startTime:(id)time endTime:(id)time attributes:(id)attributes;

/* instance methods */
- (id)initWithMetricRequest:(id)request metricRequestOptions:(id)options ignoreRequestThrottle:(BOOL)throttle requestThrottleIdentifier:(id)identifier requestThrottleLimit:(unsigned long long)limit;
- (void)send;
- (void)URLSession:(id)urlsession _taskIsWaitingForConnection:(id)connection;
- (void)URLSession:(id)urlsession _willRetryBackgroundDataTask:(id)task withError:(id)error;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task _conditionalRequirementsChanged:(BOOL)changed;
- (void)URLSession:(id)urlsession task:(id)task _willSendRequestForEstablishedConnection:(id)connection completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
@end

#endif /* C2ReportMetrics_h */