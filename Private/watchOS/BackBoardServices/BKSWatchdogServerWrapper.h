//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSWatchdogServerWrapper_h
#define BKSWatchdogServerWrapper_h
@import Foundation;

@interface BKSWatchdogServerWrapper : NSObject
/* instance methods */
- (int)_BKSWatchdogGetIsAlive:(unsigned int)alive isAlive:(char *)alive timeout:(unsigned int)timeout;
@end

#endif /* BKSWatchdogServerWrapper_h */