//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMediaInvokeAuthenticationQueuedObject_h
#define AMSMediaInvokeAuthenticationQueuedObject_h
@import Foundation;

#include "AMSPromise.h"
#include "AMSURLTaskInfo.h"

@class NSURLResponse;

@interface AMSMediaInvokeAuthenticationQueuedObject : NSObject

@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (retain, nonatomic) AMSPromise *pendingPromise;
@property (nonatomic) BOOL ignoringResult;

/* instance methods */
@end

#endif /* AMSMediaInvokeAuthenticationQueuedObject_h */