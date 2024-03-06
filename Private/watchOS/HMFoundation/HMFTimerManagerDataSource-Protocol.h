//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFTimerManagerDataSource_Protocol_h
#define HMFTimerManagerDataSource_Protocol_h
@import Foundation;

@protocol HMFTimerManagerDataSource <NSObject>

@property (readonly, nonatomic) double currentTime;

/* instance methods */
- (id)timerWithTimeInterval:(double)interval options:(unsigned long long)options;
@end

#endif /* HMFTimerManagerDataSource_Protocol_h */