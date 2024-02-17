//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMResultOperationDelete_h
#define MCMResultOperationDelete_h
@import Foundation;

#include "MCMResultWithContainersArrayBase.h"

@protocol OS_xpc_object;

@interface MCMResultOperationDelete : MCMResultWithContainersArrayBase

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcToMerge;

/* instance methods */
- (void)mergeWithXPCResult:(id)xpcresult;
- (BOOL)encodeResultOntoReply:(id)reply;
@end

#endif /* MCMResultOperationDelete_h */