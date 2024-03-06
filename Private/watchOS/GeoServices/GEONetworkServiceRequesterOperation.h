//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEONetworkServiceRequesterOperation_h
#define GEONetworkServiceRequesterOperation_h
@import Foundation;

#include "GEOApplicationAuditToken.h"
#include "GEODataRequestThrottlerToken.h"
#include "GEOMapServiceTraits.h"
#include "GEOProtobufSessionTask.h"
#include "GEOProtobufSessionTaskDelegate-Protocol.h"
#include "GEOServiceRequestConfiguring-Protocol.h"
#include "GEOServiceRequesterOperation-Protocol.h"

@class NSString, NSURL, PBRequest;

@interface GEONetworkServiceRequesterOperation : NSObject<GEOProtobufSessionTaskDelegate, GEOServiceRequesterOperation> {
  /* instance variables */
  GEOProtobufSessionTask *_task;
  BOOL _canceled;
  PBRequest *_request;
  NSString *_debugRequestName;
  id /* block */ _willSendRequestHandler;
  id /* block */ _validationHandler;
  id /* block */ _completionHandler;
  NSURL *_url;
  NSObject<GEOServiceRequestConfiguring> *_config;
  NSString *_appIdentifier;
  GEOApplicationAuditToken *_auditToken;
  struct { int type; union { int raw; int tile; int placeRequest; } subtype; } _dataRequestKind;
  GEOMapServiceTraits *_traits;
  double _timeout;
  GEODataRequestThrottlerToken *_throttleToken;
  unsigned long long _requestOptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequest:(id)request traits:(id)traits auditToken:(id)token config:(id)config throttleToken:(id)token options:(unsigned long long)options willSendRequestHandler:(id /* block */)handler validationHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (void)dealloc;
- (void)_cleanup;
- (void)cancel;
- (id)_fullURL;
- (void)start;
- (void)protobufSession:(id)session willSendRequest:(id)request forTask:(id)task completionHandler:(id /* block */)handler;
- (void)protobufSession:(id)session didCompleteTask:(id)task;
- (id)protobufSession:(id)session validateResponse:(id)response;
- (void)_recordNetworkEventDataForTask;
@end

#endif /* GEONetworkServiceRequesterOperation_h */