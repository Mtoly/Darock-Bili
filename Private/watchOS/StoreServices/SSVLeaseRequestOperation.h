//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVLeaseRequestOperation_h
#define SSVLeaseRequestOperation_h
@import Foundation;

#include "SSVOperation.h"
#include "SSURLBag.h"
#include "SSVPlaybackLeaseConfiguration.h"
#include "SSVPlaybackLeaseRequest.h"

@class NSData, NSString;
@protocol OS_dispatch_semaphore;

@interface SSVLeaseRequestOperation : SSVOperation {
  /* instance variables */
  NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
  NSString *_bagKey;
  NSData *_certificateData;
  SSVPlaybackLeaseConfiguration *_configuration;
  SSVPlaybackLeaseRequest *_request;
  unsigned long long _retryCount;
  SSURLBag *_urlBag;
}

@property (copy) NSString *certificateURLBagKey;
@property (readonly, copy) SSVPlaybackLeaseRequest *leaseRequest;
@property (copy) id /* block */ outputBlock;

/* instance methods */
- (id)initWithLeaseRequest:(id)request configuration:(id)configuration;
- (id)initWithLeaseRequest:(id)request URLBag:(id)urlbag;
- (void)cancel;
- (void)main;
- (BOOL)_loadCertificateDataIfNecessary:(id *)necessary;
- (BOOL)_resolveConfigurationAndURLReturningError:(id *)error;
- (BOOL)_shouldRetryForError:(id)error;
@end

#endif /* SSVLeaseRequestOperation_h */