//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDBufferedEventProcessor_Protocol_h
#define BKHIDBufferedEventProcessor_Protocol_h
@import Foundation;

@protocol BKHIDBufferedEventProcessor <NSObject>
/* instance methods */
- (void)conformsToBKHIDBufferedEventProcessor;
- (void)postEvent:(struct __IOHIDEvent *)event withContext:(id)context toResolution:(id)resolution fromSequence:(id)sequence;
- (long long)processEvent:(inout struct __IOHIDEvent * *)event withContext:(id)context buffer:(id)buffer sequence:(id)sequence sender:(id)sender dispatcher:(id)dispatcher resolution:(id)resolution;
- (void)bufferingDidAddNewBuffers:(id)buffers;
- (void)bufferWillBeginDraining:(id)draining;
- (void)bufferDidEndDraining:(id)draining;
@end

#endif /* BKHIDBufferedEventProcessor_Protocol_h */