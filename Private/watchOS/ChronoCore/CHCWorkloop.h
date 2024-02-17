//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHCWorkloop_h
#define CHCWorkloop_h
@import Foundation;

@interface CHCWorkloop : NSObject
/* class methods */
+ (id)sharedDaemonWorkloop;
+ (id)serialQueueTargetingSharedWorkloop:(id)workloop;
+ (id)serialQueueTargetingSharedWorkloop:(id)workloop withQoS:(unsigned int)s;
@end

#endif /* CHCWorkloop_h */