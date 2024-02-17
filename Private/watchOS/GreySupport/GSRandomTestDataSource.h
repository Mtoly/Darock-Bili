//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSRandomTestDataSource_h
#define GSRandomTestDataSource_h
@import Foundation;

#include "GSTestDataSource.h"

@class NSTimer;

@interface GSRandomTestDataSource : GSTestDataSource

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double interval;

/* instance methods */
- (id)init;
- (void)startTimer;
- (void)stopTimer;
- (BOOL)_startStreamingData;
- (void)_stopStreamingData;
@end

#endif /* GSRandomTestDataSource_h */