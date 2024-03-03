//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLURLSessionPolicyClient_h
#define CSLURLSessionPolicyClient_h
@import Foundation;

#include "CSLSURLSessionPolicyServerInterface-Protocol.h"
#include "CSLURLSessionPolicyClientDelegate-Protocol.h"

@class NSString, NSXPCConnection;

@interface CSLURLSessionPolicyClient : NSObject<CSLSURLSessionPolicyServerInterface>

@property (weak, nonatomic) NSObject<CSLURLSessionPolicyClientDelegate> *delegate;
@property (readonly, nonatomic) BOOL isEntitled;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (void)_connectionDidInvalidate;
- (void)requestDefaultURLSessionPolicyForPID:(int)pid completion:(id /* block */)completion;
@end

#endif /* CSLURLSessionPolicyClient_h */