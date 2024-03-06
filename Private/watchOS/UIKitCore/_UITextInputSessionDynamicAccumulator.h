//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextInputSessionDynamicAccumulator_h
#define _UITextInputSessionDynamicAccumulator_h
@import Foundation;

#include "_UITextInputSessionAccumulator.h"

@class NSArray;

@interface _UITextInputSessionDynamicAccumulator : _UITextInputSessionAccumulator

@property (copy, nonatomic) id /* block */ dynamicAccumulatorIncreaseBlock;
@property (readonly, nonatomic) NSArray *lastResults;

/* class methods */
+ (id)accumulatorWithName:(id)name depthRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range block:(id /* block */)block;

/* instance methods */
- (void)increaseWithActions:(id)actions;
- (void)enumerateAnalytics:(id /* block */)analytics;
@end

#endif /* _UITextInputSessionDynamicAccumulator_h */