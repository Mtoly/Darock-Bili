//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PAVideoConversionServiceClient_h
#define PAVideoConversionServiceClient_h
@import Foundation;

#include "VideoConversionServiceClient-Protocol.h"

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PAVideoConversionServiceClient : NSObject<VideoConversionServiceClient>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain) NSMutableDictionary *pendingRequestIdentifierToProgressMap;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)ut_invalidateServiceConnection;
- (id)init;
- (void)setupServiceConnection;
- (id)convertVideoAtSourceURL:(id)url toDestinationURL:(id)url options:(id)options completionHandler:(id /* block */)handler;
- (id)convertVideoAtSourceURLCollection:(id)urlcollection toDestinationURLCollection:(id)urlcollection options:(id)options completionHandler:(id /* block */)handler;
- (BOOL)canMarkPendingRequestAsOptionalForProgress:(id)progress;
- (void)markPendingRequestAsOptionalForProgress:(id)progress;
- (void)modifyRequestWithIdentifier:(id)identifier modifications:(id)modifications;
- (void)extractStillImageFromVideoAtSourceURL:(id)url toDestinationURL:(id)url options:(id)options completionHandler:(id /* block */)handler;
- (void)handleRequestCompletionForIdentifier:(id)identifier;
- (void)transitionToInvalidatedState;
- (void)updateProgress:(id)progress;
- (void)invalidateAfterPendingRequestCompletion;
- (void)requestStatusWithCompletionHandler:(id /* block */)handler;
@end

#endif /* PAVideoConversionServiceClient_h */