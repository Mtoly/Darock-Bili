//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTAnalytics_h
#define MTAnalytics_h
@import Foundation;

@interface MTAnalytics : NSObject
/* class methods */
+ (void)submitEvent:(id)event eventParameters:(id)parameters;
+ (void)incrementEventCount:(id)count;
+ (void)sendCriticalEvent:(id)event;
@end

#endif /* MTAnalytics_h */