//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIScrollTestParameters_h
#define UIScrollTestParameters_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class CADisplayLink, NSString;

@interface UIScrollTestParameters : NSObject<NSCopying>

@property (nonatomic) double startOffset;
@property (readonly, nonatomic) double endOffset;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *testName;
@property (nonatomic) long long iterations;
@property (nonatomic) double delta;
@property (nonatomic) double length;
@property (nonatomic) unsigned long long axis;
@property (copy, nonatomic) id /* block */ extraResultsBlock;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* UIScrollTestParameters_h */