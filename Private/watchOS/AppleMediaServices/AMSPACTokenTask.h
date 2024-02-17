//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSPACTokenTask_h
#define AMSPACTokenTask_h
@import Foundation;

#include "AMSTask.h"

@class NSData, NSString;

@interface AMSPACTokenTask : AMSTask

@property (readonly) NSString *simLabelID;
@property (retain) NSData *signingData;

/* instance methods */
- (id)initWithSimLabelID:(id)id;
- (id)perform;
@end

#endif /* AMSPACTokenTask_h */