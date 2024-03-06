//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOVoltaireAddressCorrectionProvider_h
#define GEOVoltaireAddressCorrectionProvider_h
@import Foundation;

#include "GEOProtobufSession.h"
#include "GEOProtobufSessionTask.h"
#include "GEOProtobufSessionTaskDelegate-Protocol.h"

@class NSString;

@interface GEOVoltaireAddressCorrectionProvider : NSObject<GEOProtobufSessionTaskDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEOProtobufSession *protobufSession;
@property (retain, nonatomic) GEOProtobufSessionTask *initializationTask;
@property (retain, nonatomic) GEOProtobufSessionTask *updateTask;
@property (copy, nonatomic) id /* block */ initFinishedHandler;
@property (copy, nonatomic) id /* block */ initErrorHandler;
@property (copy, nonatomic) id /* block */ updateFinishedHandler;
@property (copy, nonatomic) id /* block */ updateErrorHandler;

/* class methods */
+ (id)acInitURL;
+ (BOOL)acInitNeedsProxy;
+ (id)acUpdateURL;
+ (BOOL)acUpdateNeedsProxy;

/* instance methods */
- (void)protobufSession:(id)session didCompleteTask:(id)task;
- (void)didCompleteInitTask;
- (void)didCompleteUpdateTask;
- (id)cancelError;
- (id)init;
- (void)startInitRequest:(id)request finished:(id /* block */)finished error:(id /* block */)error;
- (void)startUpdateRequest:(id)request finished:(id /* block */)finished error:(id /* block */)error;
- (void)cancelRequest;
@end

#endif /* GEOVoltaireAddressCorrectionProvider_h */