//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 47.1.0.0.0
//
#ifndef RPTWaitTestParameters_h
#define RPTWaitTestParameters_h
@import Foundation;

#include "RPTTestParameters-Protocol.h"

@class NSString;

@interface RPTWaitTestParameters : NSObject<RPTTestParameters>

@property (readonly, nonatomic) double waitDuration;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTestName:(id)name wait:(double)wait completionHandler:(id /* block */)handler;
- (id)initWithWait:(double)wait;
- (id)init;
- (void)prepareWithComposer:(id)composer;
- (id /* block */)composerBlock;
@end

#endif /* RPTWaitTestParameters_h */