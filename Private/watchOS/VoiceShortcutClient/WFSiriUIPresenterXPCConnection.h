//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSiriUIPresenterXPCConnection_h
#define WFSiriUIPresenterXPCConnection_h
@import Foundation;

#include "WFSiriUIPresenterConnection-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface WFSiriUIPresenterXPCConnection : NSObject<WFSiriUIPresenterConnection>

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL connected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEndpoint:(id)endpoint;
- (void)resumeConnectionIfNecessary;
- (id)presenterWithErrorHandler:(id /* block */)handler;
@end

#endif /* WFSiriUIPresenterXPCConnection_h */