//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef _ICDelegationServiceConnectionPendingRequestContext_h
#define _ICDelegationServiceConnectionPendingRequestContext_h
@import Foundation;

#include "ICPBDGSRequest.h"

@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject

@property (readonly, nonatomic) ICPBDGSRequest *request;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

/* instance methods */
- (id)initWithRequest:(id)request responseHandler:(id /* block */)handler;
@end

#endif /* _ICDelegationServiceConnectionPendingRequestContext_h */